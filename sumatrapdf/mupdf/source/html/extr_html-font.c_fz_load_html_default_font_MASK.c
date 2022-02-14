
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** fonts; } ;
typedef TYPE_1__ fz_html_font_set ;
typedef int fz_font ;
typedef int fz_context ;
struct TYPE_5__ {int is_serif; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;
 unsigned char* FUNC_1 (int *,char const*,int,int,int*) ;
 int * FUNC_2 (int *,int *,unsigned char const*,int,int ,int) ;
 int FUNC_3 (int *,int ,char*,char const*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static fz_font *
FUNC_5(fz_context *VAR_1, fz_html_font_set *VAR_2, const char *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = !FUNC_4(VAR_3, "monospace");
 int VAR_7 = !FUNC_4(VAR_3, "sans-serif");
 const char *VAR_8 = VAR_6 ? "Courier" : VAR_7 ? "Helvetica" : "Charis SIL";
 const char *VAR_9 = VAR_6 ? "Courier" : VAR_7 ? "Helvetica" : "Times";
 int VAR_10 = (VAR_6 ? 8 : VAR_7 ? 4 : 0) + VAR_4 * 2 + VAR_5;
 if (!VAR_2->fonts[VAR_10])
 {
  const unsigned char *VAR_11;
  int VAR_12;

  VAR_11 = FUNC_1(VAR_1, VAR_8, VAR_4, VAR_5, &VAR_12);
  if (!VAR_11)
   VAR_11 = FUNC_1(VAR_1, VAR_9, VAR_4, VAR_5, &VAR_12);
  if (!VAR_11)
   FUNC_3(VAR_1, VAR_0, "cannot load html font: %s", VAR_8);
  VAR_2->fonts[VAR_10] = FUNC_2(VAR_1, ((void*)0), VAR_11, VAR_12, 0, 1);
  FUNC_0(VAR_2->fonts[VAR_10])->is_serif = !VAR_7;
 }
 return VAR_2->fonts[VAR_10];
}
