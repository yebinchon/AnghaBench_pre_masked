
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_xml ;
struct TYPE_3__ {char combine; scalar_t__ cond; scalar_t__ name; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef TYPE_1__ fz_css_selector ;


 int FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_5(fz_css_selector *VAR_0, fz_xml *VAR_1)
{
 if (!VAR_1)
  return 0;

 if (VAR_0->combine)
 {

  if (VAR_0->combine == ' ')
  {
   fz_xml *VAR_2 = FUNC_3(VAR_1);
   while (VAR_2)
   {
    if (FUNC_5(VAR_0->left, VAR_2))
     if (FUNC_5(VAR_0->right, VAR_1))
      return 1;
    VAR_2 = FUNC_3(VAR_2);
   }
   return 0;
  }


  if (VAR_0->combine == '>')
  {
   fz_xml *VAR_3 = FUNC_3(VAR_1);
   if (!VAR_3)
    return 0;
   if (!FUNC_5(VAR_0->left, VAR_3))
    return 0;
   if (!FUNC_5(VAR_0->right, VAR_1))
    return 0;
  }


  if (VAR_0->combine == '+')
  {
   fz_xml *VAR_4 = FUNC_1(VAR_1);
   while (VAR_4 && !FUNC_2(VAR_4))
    VAR_4 = FUNC_1(VAR_4);
   if (!VAR_4)
    return 0;
   if (!FUNC_2(VAR_4))
    return 0;
   if (!FUNC_5(VAR_0->left, VAR_4))
    return 0;
   if (!FUNC_5(VAR_0->right, VAR_1))
    return 0;
  }
 }

 if (VAR_0->name)
 {
  if (!FUNC_0(VAR_1, VAR_0->name))
   return 0;
 }

 if (VAR_0->cond)
 {
  if (!FUNC_4(VAR_0->cond, VAR_1))
   return 0;
 }

 return 1;
}
