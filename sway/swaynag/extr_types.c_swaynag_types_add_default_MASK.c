
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaynag_type {int anchors; int button_background; int background; int text; int border; int border_bottom; int bar_border_thickness; int message_padding; int details_border_thickness; int button_border_thickness; int button_gap; int button_gap_close; int button_margin_right; int button_padding; int font; } ;
typedef int list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct swaynag_type*) ;
 int FUNC_1 (char*) ;
 struct swaynag_type* FUNC_2 (char*) ;

void FUNC_3(list_t *VAR_3) {
 struct swaynag_type *VAR_4 = FUNC_2("<defaults>");
 VAR_4->font = FUNC_1("pango:Monospace 10");
 VAR_4->anchors = VAR_2
  | VAR_0
  | VAR_1;
 VAR_4->button_background = 0x333333FF;
 VAR_4->background = 0x323232FF;
 VAR_4->text = 0xFFFFFFFF;
 VAR_4->border = 0x222222FF;
 VAR_4->border_bottom = 0x444444FF;
 VAR_4->bar_border_thickness = 2;
 VAR_4->message_padding = 8;
 VAR_4->details_border_thickness = 3;
 VAR_4->button_border_thickness = 3;
 VAR_4->button_gap = 20;
 VAR_4->button_gap_close = 15;
 VAR_4->button_margin_right = 2;
 VAR_4->button_padding = 3;
 FUNC_0(VAR_3, VAR_4);

 struct swaynag_type *VAR_5 = FUNC_2("error");
 VAR_5->button_background = 0x680A0AFF;
 VAR_5->background = 0x900000FF;
 VAR_5->text = 0xFFFFFFFF;
 VAR_5->border = 0xD92424FF;
 VAR_5->border_bottom = 0x470909FF;
 FUNC_0(VAR_3, VAR_5);

 struct swaynag_type *VAR_6 = FUNC_2("warning");
 VAR_6->button_background = 0xFFC100FF;
 VAR_6->background = 0xFFA800FF;
 VAR_6->text = 0x000000FF;
 VAR_6->border = 0xAB7100FF;
 VAR_6->border_bottom = 0xAB7100FF;
 FUNC_0(VAR_3, VAR_6);
}
