
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; struct TYPE_4__* next; int data; } ;
typedef TYPE_1__ fz_css_value ;
typedef int fz_css_match ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(fz_css_match *VAR_3, fz_css_value *VAR_4, int VAR_5)
{
 while (VAR_4)
 {
  if (VAR_4->type == VAR_0)
  {
   if (FUNC_1(VAR_4->data, VAR_2, FUNC_2(VAR_2)))
   {
    FUNC_0(VAR_3, "list-style-type", VAR_4, VAR_5);
   }
   else if (FUNC_1(VAR_4->data, VAR_1, FUNC_2(VAR_1)))
   {
    FUNC_0(VAR_3, "list-style-position", VAR_4, VAR_5);
   }
  }
  VAR_4 = VAR_4->next;
 }
}
