
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; scalar_t__* object; } ;
typedef TYPE_1__ page_objects ;
typedef int fz_context ;



__attribute__((used)) static void
FUNC_0(fz_context *VAR_0, page_objects *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4 = VAR_1->len-1;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
 {
  if (VAR_1->object[VAR_2] == VAR_1->object[VAR_2+1])
   break;
 }
 VAR_3 = VAR_2;
 VAR_2++;
 for (; VAR_2 < VAR_4; VAR_2++)
 {
  if (VAR_1->object[VAR_3] != VAR_1->object[VAR_2])
   VAR_1->object[++VAR_3] = VAR_1->object[VAR_2];
 }
 VAR_1->len = VAR_3+1;
}
