
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int cap; int* object; } ;
typedef TYPE_1__ page_objects ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, page_objects **VAR_1, int VAR_2)
{
 page_objects *VAR_3;


 if (*VAR_1 == ((void*)0))
  *VAR_1 = FUNC_1(VAR_0);

 VAR_3 = *VAR_1;

 if (VAR_3->len == VAR_3->cap)
 {
  VAR_3 = FUNC_0(VAR_0, VAR_3, sizeof(page_objects) + (VAR_3->cap*2 - 1)*sizeof(int));
  VAR_3->cap *= 2;
  *VAR_1 = VAR_3;
 }
 VAR_3->object[VAR_3->len++] = VAR_2;
}
