
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
struct TYPE_6__ {int ft_substitute; scalar_t__ ft_stretch; } ;
struct TYPE_8__ {TYPE_1__ flags; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *,char const*,int,int) ;
 unsigned char* FUNC_1 (int *,int,int*,int*) ;
 TYPE_4__* FUNC_2 (int *,char const*,unsigned char const*,int,int,int ) ;
 int FUNC_3 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, pdf_font_desc *VAR_2, const char *VAR_3, int VAR_4, int VAR_5)
{
 VAR_2->font = FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);
 if (!VAR_2->font)
 {
  const unsigned char *VAR_6;
  int VAR_7;
  int VAR_8;

  VAR_6 = FUNC_1(VAR_1, VAR_4, &VAR_7, &VAR_8);
  if (!VAR_6)
   FUNC_3(VAR_1, VAR_0, "cannot find builtin CJK font");


  VAR_2->font = FUNC_2(VAR_1, VAR_3, VAR_6, VAR_7, VAR_8, 0);
 }

 VAR_2->font->flags.ft_substitute = 1;
 VAR_2->font->flags.ft_stretch = 0;
}
