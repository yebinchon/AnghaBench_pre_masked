
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int fz_css_value ;
struct TYPE_11__ {int count; TYPE_2__* prop; } ;
typedef TYPE_1__ fz_css_match ;
struct TYPE_12__ {char const* name; int spec; int * value; } ;


 int FUNC_0 (TYPE_1__*,int *,int,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char const*,char const*) ;

__attribute__((used)) static void
FUNC_9(fz_css_match *VAR_0, const char *VAR_1, fz_css_value *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!FUNC_8(VAR_1, "margin"))
 {
  FUNC_5(VAR_0, VAR_2, VAR_3);
  return;
 }
 if (!FUNC_8(VAR_1, "padding"))
 {
  FUNC_6(VAR_0, VAR_2, VAR_3);
  return;
 }
 if (!FUNC_8(VAR_1, "border-width"))
 {
  FUNC_3(VAR_0, VAR_2, VAR_3);
  return;
 }
 if (!FUNC_8(VAR_1, "border-color"))
 {
  FUNC_1(VAR_0, VAR_2, VAR_3);
  return;
 }
 if (!FUNC_8(VAR_1, "border-style"))
 {
  FUNC_2(VAR_0, VAR_2, VAR_3);
  return;
 }
 if (!FUNC_8(VAR_1, "border"))
 {
  FUNC_0(VAR_0, VAR_2, VAR_3, 1, 1, 1, 1);
  return;
 }
 if (!FUNC_8(VAR_1, "border-top"))
 {
  FUNC_0(VAR_0, VAR_2, VAR_3, 1, 0, 0, 0);
  return;
 }
 if (!FUNC_8(VAR_1, "border-right"))
 {
  FUNC_0(VAR_0, VAR_2, VAR_3, 0, 1, 0, 0);
  return;
 }
 if (!FUNC_8(VAR_1, "border-bottom"))
 {
  FUNC_0(VAR_0, VAR_2, VAR_3, 0, 0, 1, 0);
  return;
 }
 if (!FUNC_8(VAR_1, "border-left"))
 {
  FUNC_0(VAR_0, VAR_2, VAR_3, 0, 0, 0, 1);
  return;
 }
 if (!FUNC_8(VAR_1, "list-style"))
 {
  FUNC_4(VAR_0, VAR_2, VAR_3);
  return;
 }
 for (VAR_4 = 0; VAR_4 < VAR_0->count; ++VAR_4)
 {
  if (!FUNC_8(VAR_0->prop[VAR_4].name, VAR_1))
  {
   if (VAR_0->prop[VAR_4].spec <= VAR_3)
   {
    VAR_0->prop[VAR_4].value = VAR_2;
    VAR_0->prop[VAR_4].spec = VAR_3;
   }
   return;
  }
 }

 if (VAR_0->count + 1 >= (int)FUNC_7(VAR_0->prop))
 {

  return;
 }

 VAR_0->prop[VAR_0->count].name = VAR_1;
 VAR_0->prop[VAR_0->count].value = VAR_2;
 VAR_0->prop[VAR_0->count].spec = VAR_3;
 ++VAR_0->count;
}
