
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaynag_type {scalar_t__ anchors; scalar_t__ button_background; scalar_t__ background; scalar_t__ text; scalar_t__ border; scalar_t__ border_bottom; int bar_border_thickness; int message_padding; int details_border_thickness; int button_border_thickness; int button_gap; int button_gap_close; int button_margin_right; int button_padding; void* output; void* font; } ;


 void* FUNC_0 (void*) ;

void FUNC_1(struct swaynag_type *VAR_0, struct swaynag_type *VAR_1) {
 if (!VAR_0 || !VAR_1) {
  return;
 }

 if (VAR_1->font) {
  VAR_0->font = FUNC_0(VAR_1->font);
 }

 if (VAR_1->output) {
  VAR_0->output = FUNC_0(VAR_1->output);
 }

 if (VAR_1->anchors > 0) {
  VAR_0->anchors = VAR_1->anchors;
 }


 if (VAR_1->button_background > 0) {
  VAR_0->button_background = VAR_1->button_background;
 }

 if (VAR_1->background > 0) {
  VAR_0->background = VAR_1->background;
 }

 if (VAR_1->text > 0) {
  VAR_0->text = VAR_1->text;
 }

 if (VAR_1->border > 0) {
  VAR_0->border = VAR_1->border;
 }

 if (VAR_1->border_bottom > 0) {
  VAR_0->border_bottom = VAR_1->border_bottom;
 }


 if (VAR_1->bar_border_thickness > -1) {
  VAR_0->bar_border_thickness = VAR_1->bar_border_thickness;
 }

 if (VAR_1->message_padding > -1) {
  VAR_0->message_padding = VAR_1->message_padding;
 }

 if (VAR_1->details_border_thickness > -1) {
  VAR_0->details_border_thickness = VAR_1->details_border_thickness;
 }

 if (VAR_1->button_border_thickness > -1) {
  VAR_0->button_border_thickness = VAR_1->button_border_thickness;
 }

 if (VAR_1->button_gap > -1) {
  VAR_0->button_gap = VAR_1->button_gap;
 }

 if (VAR_1->button_gap_close > -1) {
  VAR_0->button_gap_close = VAR_1->button_gap_close;
 }

 if (VAR_1->button_margin_right > -1) {
  VAR_0->button_margin_right = VAR_1->button_margin_right;
 }

 if (VAR_1->button_padding > -1) {
  VAR_0->button_padding = VAR_1->button_padding;
 }
}
