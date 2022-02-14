
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaynag_type {int bar_border_thickness; int message_padding; int details_border_thickness; int button_border_thickness; int button_gap; int button_gap_close; int button_margin_right; int button_padding; int name; } ;


 struct swaynag_type* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;

struct swaynag_type *FUNC_3(const char *VAR_0) {
 struct swaynag_type *VAR_1 = FUNC_0(1, sizeof(struct swaynag_type));
 if (!VAR_1) {
  FUNC_2("Failed to allocate type: %s", VAR_0);
 }
 VAR_1->name = FUNC_1(VAR_0);
 VAR_1->bar_border_thickness = -1;
 VAR_1->message_padding = -1;
 VAR_1->details_border_thickness = -1;
 VAR_1->button_border_thickness = -1;
 VAR_1->button_gap = -1;
 VAR_1->button_gap_close = -1;
 VAR_1->button_margin_right = -1;
 VAR_1->button_padding = -1;
 return VAR_1;
}
