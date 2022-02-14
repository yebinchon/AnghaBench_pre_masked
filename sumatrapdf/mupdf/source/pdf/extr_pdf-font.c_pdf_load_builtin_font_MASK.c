
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {float ascent; float descent; TYPE_5__* font; int flags; } ;
typedef TYPE_2__ pdf_font_desc ;
typedef int fz_context ;
struct TYPE_7__ {int is_serif; } ;
struct TYPE_10__ {TYPE_3__* ft_face; TYPE_1__ flags; } ;
struct TYPE_9__ {float ascender; float units_per_EM; float descender; } ;
typedef TYPE_3__* FT_Face ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int *,char const*,int ,int ,int) ;
 unsigned char* FUNC_1 (int *,char const*,int*) ;
 TYPE_5__* FUNC_2 (int *,char const*,unsigned char const*,int,int ,int) ;
 int FUNC_3 (int *,int ,char*,char const*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_2, pdf_font_desc *VAR_3, const char *VAR_4, int VAR_5)
{
 FT_Face VAR_6;
 const char *VAR_7 = FUNC_4(VAR_4);
 if (VAR_7 == VAR_4)
  VAR_7 = "Times-Roman";

 VAR_3->font = FUNC_0(VAR_2, VAR_4, 0, 0, !VAR_5);
 if (!VAR_3->font)
 {
  const unsigned char *VAR_8;
  int VAR_9;

  VAR_8 = FUNC_1(VAR_2, VAR_7, &VAR_9);
  if (!VAR_8)
   FUNC_3(VAR_2, VAR_0, "cannot find builtin font: '%s'", VAR_4);

  VAR_3->font = FUNC_2(VAR_2, VAR_4, VAR_8, VAR_9, 0, 1);
  VAR_3->font->flags.is_serif = !!FUNC_6(VAR_7, "Times");
 }

 if (!FUNC_5(VAR_7, "Symbol") || !FUNC_5(VAR_7, "ZapfDingbats"))
  VAR_3->flags |= VAR_1;

 VAR_6 = VAR_3->font->ft_face;
 VAR_3->ascent = 1000.0f * VAR_6->ascender / VAR_6->units_per_EM;
 VAR_3->descent = 1000.0f * VAR_6->descender / VAR_6->units_per_EM;
}
