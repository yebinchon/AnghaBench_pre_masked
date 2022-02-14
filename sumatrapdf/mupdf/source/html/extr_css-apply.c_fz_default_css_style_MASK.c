
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* height; void* width; void* font_size; int list_style_type; int white_space; int vertical_align; int text_align; int visibility; } ;
typedef TYPE_1__ fz_css_style ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2(fz_context *VAR_7, fz_css_style *VAR_8)
{
 FUNC_1(VAR_8, 0, sizeof *VAR_8);
 VAR_8->visibility = VAR_5;
 VAR_8->text_align = VAR_3;
 VAR_8->vertical_align = VAR_4;
 VAR_8->white_space = VAR_6;
 VAR_8->list_style_type = VAR_0;
 VAR_8->font_size = FUNC_0(1, VAR_2);
 VAR_8->width = FUNC_0(0, VAR_1);
 VAR_8->height = FUNC_0(0, VAR_1);
}
