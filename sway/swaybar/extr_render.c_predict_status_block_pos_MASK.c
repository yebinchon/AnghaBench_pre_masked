
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct swaybar_output {int scale; scalar_t__ height; TYPE_1__* bar; } ;
struct swaybar_config {double status_padding; int status_edge_padding; int height; int * sep_symbol; int font; } ;
struct i3bar_block {int markup; int min_width; int border_left; int border_right; int separator_block_width; scalar_t__ urgent; scalar_t__ border; int * min_width_str; int * full_text; } ;
typedef int cairo_t ;
struct TYPE_2__ {struct swaybar_config* config; } ;


 int FUNC_0 (int *,int ,int*,int*,int *,int,int,char*,int *) ;

__attribute__((used)) static void FUNC_1(cairo_t *VAR_0,
  struct swaybar_output *VAR_1, struct i3bar_block *VAR_2, double *VAR_3,
  bool VAR_4) {
 if (!VAR_2->full_text || !*VAR_2->full_text) {
  return;
 }

 struct swaybar_config *VAR_5 = VAR_1->bar->config;

 int VAR_6, VAR_7;
 FUNC_0(VAR_0, VAR_5->font, &VAR_6, &VAR_7, ((void*)0),
   VAR_1->scale, VAR_2->markup, "%s", VAR_2->full_text);

 int VAR_8 = 3 * VAR_1->scale;
 double VAR_9 = VAR_5->status_padding * VAR_1->scale;

 int VAR_10 = VAR_6;

 if (VAR_2->min_width_str) {
  int VAR_11;
  FUNC_0(VAR_0, VAR_5->font, &VAR_11, ((void*)0), ((void*)0),
    VAR_1->scale, VAR_2->markup, "%s", VAR_2->min_width_str);
  VAR_2->min_width = VAR_11;
 }
 if (VAR_10 < VAR_2->min_width) {
  VAR_10 = VAR_2->min_width;
 }

 uint32_t VAR_12 = VAR_7 + VAR_9 * 2;
 uint32_t VAR_13 = VAR_12 / VAR_1->scale;
 if (!VAR_1->bar->config->height &&
   VAR_1->height < VAR_13) {
  return;
 }

 *VAR_3 -= VAR_10;
 if ((VAR_2->border || VAR_2->urgent) && VAR_2->border_left > 0) {
  *VAR_3 -= (VAR_2->border_left * VAR_1->scale + VAR_8);
 }
 if ((VAR_2->border || VAR_2->urgent) && VAR_2->border_right > 0) {
  *VAR_3 -= (VAR_2->border_right * VAR_1->scale + VAR_8);
 }

 int VAR_14, VAR_15;
 int VAR_16 = VAR_2->separator_block_width;
 if (!VAR_4) {
  if (VAR_5->sep_symbol) {
   FUNC_0(VAR_0, VAR_5->font, &VAR_14, &VAR_15, ((void*)0),
     VAR_1->scale, 0, "%s", VAR_5->sep_symbol);
   uint32_t VAR_17 = VAR_15 + VAR_9 * 2;
   uint32_t VAR_18 = VAR_17 / VAR_1->scale;
   if (!VAR_1->bar->config->height &&
     VAR_1->height < VAR_18) {
    return;
   }
   if (VAR_14 > VAR_16) {
    VAR_16 = VAR_14 + VAR_8 * 2;
   }
  }
  *VAR_3 -= VAR_16;
 } else if (VAR_5->status_edge_padding) {
  *VAR_3 -= VAR_5->status_edge_padding * VAR_1->scale;
 }
}
