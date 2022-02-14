
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* custom; } ;
typedef TYPE_1__ fz_html_font_set ;
struct TYPE_9__ {char* family; int is_bold; int is_italic; int is_small_caps; int * font; struct TYPE_9__* next; } ;
typedef TYPE_2__ fz_html_font_face ;
struct TYPE_10__ {int fake_bold; int fake_italic; int is_italic; int is_bold; } ;
typedef TYPE_3__ fz_font_flags_t ;
typedef int fz_font ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,char const*,int,int,int ,char*,int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_3__* FUNC_2 (int *) ;
 int * FUNC_3 (int *,TYPE_1__*,char const*,int,int) ;
 unsigned char* FUNC_4 (int *,char const*,int,int,int*) ;
 int * FUNC_5 (int *,int *,unsigned char const*,int,int ,int ) ;
 int FUNC_6 (char const*,char*) ;

fz_font *
FUNC_7(fz_context *VAR_0, fz_html_font_set *VAR_1,
 const char *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 fz_html_font_face *VAR_6;
 const unsigned char *VAR_7;
 int VAR_8 = 0;
 fz_font *VAR_9 = ((void*)0);
 int VAR_10;

 for (VAR_6 = VAR_1->custom; VAR_6; VAR_6 = VAR_6->next)
 {
  if (!FUNC_6(VAR_2, VAR_6->family))
  {
   int VAR_11 =
    1 * (VAR_3 == VAR_6->is_bold) +
    2 * (VAR_4 == VAR_6->is_italic) +
    4 * (VAR_5 == VAR_6->is_small_caps);
   if (VAR_11 > VAR_8)
   {
    VAR_8 = VAR_11;
    VAR_9 = VAR_6->font;
   }
  }
 }
 if (VAR_9)
  return VAR_9;

 VAR_7 = FUNC_4(VAR_0, VAR_2, VAR_3, VAR_4, &VAR_10);
 if (VAR_7)
 {
  fz_font *VAR_12 = FUNC_5(VAR_0, ((void*)0), VAR_7, VAR_10, 0, 0);
  fz_font_flags_t *VAR_13 = FUNC_2(VAR_12);
  if (VAR_3 && !VAR_13->is_bold)
   VAR_13->fake_bold = 1;
  if (VAR_4 && !VAR_13->is_italic)
   VAR_13->fake_italic = 1;
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 0, "<builtin>", VAR_12);
  FUNC_1(VAR_0, VAR_12);
  return VAR_12;
 }

 if (!FUNC_6(VAR_2, "monospace") || !FUNC_6(VAR_2, "sans-serif") || !FUNC_6(VAR_2, "serif"))
  return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return ((void*)0);
}
