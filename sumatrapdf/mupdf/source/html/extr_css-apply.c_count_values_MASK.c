
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ fz_css_value ;



__attribute__((used)) static int
FUNC_0(fz_css_value *VAR_0)
{
 int VAR_1 = 0;
 while (VAR_0)
 {
  VAR_1++;
  VAR_0 = VAR_0->next;
 }
 return VAR_1;
}
