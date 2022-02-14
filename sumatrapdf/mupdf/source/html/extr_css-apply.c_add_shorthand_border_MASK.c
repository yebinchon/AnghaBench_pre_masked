
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; struct TYPE_4__* next; int data; } ;
typedef TYPE_1__ fz_css_value ;
typedef int fz_css_match ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(fz_css_match *VAR_5, fz_css_value *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 while (VAR_6)
 {
  if (VAR_6->type == VAR_0)
  {
   if (VAR_8) FUNC_0(VAR_5, "border-top-color", VAR_6, VAR_7);
   if (VAR_9) FUNC_0(VAR_5, "border-right-color", VAR_6, VAR_7);
   if (VAR_10) FUNC_0(VAR_5, "border-bottom-color", VAR_6, VAR_7);
   if (VAR_11) FUNC_0(VAR_5, "border-left-color", VAR_6, VAR_7);
  }
  else if (VAR_6->type == VAR_1)
  {
   if (FUNC_1(VAR_6->data, VAR_3, FUNC_2(VAR_3)))
   {
    if (VAR_8) FUNC_0(VAR_5, "border-top-width", VAR_6, VAR_7);
    if (VAR_9) FUNC_0(VAR_5, "border-right-width", VAR_6, VAR_7);
    if (VAR_10) FUNC_0(VAR_5, "border-bottom-width", VAR_6, VAR_7);
    if (VAR_11) FUNC_0(VAR_5, "border-left-width", VAR_6, VAR_7);
   }
   else if (FUNC_1(VAR_6->data, VAR_2, FUNC_2(VAR_2)))
   {
    if (VAR_8) FUNC_0(VAR_5, "border-top-style", VAR_6, VAR_7);
    if (VAR_9) FUNC_0(VAR_5, "border-right-style", VAR_6, VAR_7);
    if (VAR_10) FUNC_0(VAR_5, "border-bottom-style", VAR_6, VAR_7);
    if (VAR_11) FUNC_0(VAR_5, "border-left-style", VAR_6, VAR_7);
   }
   else if (FUNC_1(VAR_6->data, VAR_4, FUNC_2(VAR_4)))
   {
    if (VAR_8) FUNC_0(VAR_5, "border-top-color", VAR_6, VAR_7);
    if (VAR_9) FUNC_0(VAR_5, "border-right-color", VAR_6, VAR_7);
    if (VAR_10) FUNC_0(VAR_5, "border-bottom-color", VAR_6, VAR_7);
    if (VAR_11) FUNC_0(VAR_5, "border-left-color", VAR_6, VAR_7);
   }
  }
  else
  {
   if (VAR_8) FUNC_0(VAR_5, "border-top-width", VAR_6, VAR_7);
   if (VAR_9) FUNC_0(VAR_5, "border-right-width", VAR_6, VAR_7);
   if (VAR_10) FUNC_0(VAR_5, "border-bottom-width", VAR_6, VAR_7);
   if (VAR_11) FUNC_0(VAR_5, "border-left-width", VAR_6, VAR_7);
  }
  VAR_6 = VAR_6->next;
 }
}
