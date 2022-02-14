
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* font; } ;
typedef TYPE_2__ pdf_font_desc ;
typedef int fz_context ;
struct TYPE_6__ {int fake_bold; int is_bold; int fake_italic; int is_italic; int is_mono; int is_serif; int ft_substitute; int ft_stretch; } ;
struct TYPE_8__ {TYPE_1__ flags; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *,char const*,int,int,int ) ;
 TYPE_4__* FUNC_1 (int *,char const*,unsigned char const*,int,int ,int) ;
 int FUNC_2 (int *,int ,char*) ;
 unsigned char* FUNC_3 (int *,int,int,int,int,int*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, pdf_font_desc *VAR_2, const char *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 VAR_2->font = FUNC_0(VAR_1, VAR_3, VAR_6, VAR_7, 0);
 if (!VAR_2->font)
 {
  const unsigned char *VAR_8;
  int VAR_9;

  VAR_8 = FUNC_3(VAR_1, VAR_4, VAR_5, VAR_6, VAR_7, &VAR_9);
  if (!VAR_8)
   FUNC_2(VAR_1, VAR_0, "cannot find substitute font");

  VAR_2->font = FUNC_1(VAR_1, VAR_3, VAR_8, VAR_9, 0, 1);
  VAR_2->font->flags.fake_bold = VAR_6 && !VAR_2->font->flags.is_bold;
  VAR_2->font->flags.fake_italic = VAR_7 && !VAR_2->font->flags.is_italic;

  VAR_2->font->flags.is_mono = VAR_4;
  VAR_2->font->flags.is_serif = VAR_5;
  VAR_2->font->flags.is_bold = VAR_6;
  VAR_2->font->flags.is_italic = VAR_7;
 }

 VAR_2->font->flags.ft_substitute = 1;
 VAR_2->font->flags.ft_stretch = 1;
}
