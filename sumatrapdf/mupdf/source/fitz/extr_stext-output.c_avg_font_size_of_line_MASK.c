
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; scalar_t__ size; } ;
typedef TYPE_1__ fz_stext_char ;



__attribute__((used)) static float FUNC_0(fz_stext_char *VAR_0)
{
 float VAR_1 = 0;
 int VAR_2 = 0;
 if (!VAR_0)
  return 0;
 while (VAR_0)
 {
  VAR_1 += VAR_0->size;
  ++VAR_2;
  VAR_0 = VAR_0->next;
 }
 return VAR_1 / VAR_2;
}
