
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct swaybar_workspace {int name; int label; scalar_t__ visible; scalar_t__ focused; scalar_t__ urgent; } ;
struct swaybar_output {scalar_t__ height; scalar_t__ scale; int hotspots; TYPE_2__* bar; } ;
struct swaybar_hotspot {double x; int link; int data; int destroy; int callback; scalar_t__ height; scalar_t__ width; scalar_t__ y; } ;
struct box_colors {int text; int border; int background; } ;
struct TYPE_3__ {struct box_colors inactive_workspace; struct box_colors active_workspace; struct box_colors focused_workspace; struct box_colors urgent_workspace; } ;
struct swaybar_config {int pango_markup; int font; int height; TYPE_1__ colors; } ;
typedef int cairo_t ;
struct TYPE_4__ {struct swaybar_config* config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,double,int) ;
 int FUNC_2 (int *,double,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int *,int ) ;
 struct swaybar_hotspot* FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (double) ;
 int VAR_3 ;
 int FUNC_6 (int *,int ,int*,int*,int *,scalar_t__,int ,char*,int ) ;
 int FUNC_7 (int *,int ,scalar_t__,int ,char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static uint32_t FUNC_10(cairo_t *VAR_5,
  struct swaybar_output *VAR_6,
  struct swaybar_workspace *VAR_7, double *VAR_8) {
 struct swaybar_config *VAR_9 = VAR_6->bar->config;
 struct box_colors VAR_10;
 if (VAR_7->urgent) {
  VAR_10 = VAR_9->colors.urgent_workspace;
 } else if (VAR_7->focused) {
  VAR_10 = VAR_9->colors.focused_workspace;
 } else if (VAR_7->visible) {
  VAR_10 = VAR_9->colors.active_workspace;
 } else {
  VAR_10 = VAR_9->colors.inactive_workspace;
 }

 uint32_t VAR_11 = VAR_6->height * VAR_6->scale;

 int VAR_12, VAR_13;
 FUNC_6(VAR_5, VAR_9->font, &VAR_12, &VAR_13, ((void*)0),
   VAR_6->scale, VAR_9->pango_markup, "%s", VAR_7->label);

 int VAR_14 = VAR_2 * VAR_6->scale;
 int VAR_15 = VAR_1 * VAR_6->scale;
 int VAR_16 = VAR_0 * VAR_6->scale;

 uint32_t VAR_17 = VAR_14 * 2 + VAR_13
  + VAR_16 * 2;
 uint32_t VAR_18 = VAR_17 / VAR_6->scale;
 if (!VAR_6->bar->config->height &&
   VAR_6->height < VAR_18) {
  return VAR_18;
 }

 uint32_t VAR_19 = VAR_15 * 2 + VAR_12 + VAR_16 * 2;

 FUNC_3(VAR_5, VAR_10.background);
 FUNC_2(VAR_5, *VAR_8, 0, VAR_19, VAR_11);
 FUNC_0(VAR_5);

 FUNC_3(VAR_5, VAR_10.border);
 FUNC_2(VAR_5, *VAR_8, 0, VAR_19, VAR_16);
 FUNC_0(VAR_5);
 FUNC_2(VAR_5, *VAR_8, 0, VAR_16, VAR_11);
 FUNC_0(VAR_5);
 FUNC_2(VAR_5, *VAR_8 + VAR_19 - VAR_16, 0, VAR_16, VAR_11);
 FUNC_0(VAR_5);
 FUNC_2(VAR_5, *VAR_8, VAR_11 - VAR_16, VAR_19, VAR_16);
 FUNC_0(VAR_5);

 double VAR_20 = VAR_11 / 2.0 - VAR_13 / 2.0;
 FUNC_3(VAR_5, VAR_10.text);
 FUNC_1(VAR_5, *VAR_8 + VAR_19 / 2 - VAR_12 / 2, (int)FUNC_5(VAR_20));
 FUNC_7(VAR_5, VAR_9->font, VAR_6->scale, VAR_9->pango_markup,
   "%s", VAR_7->label);

 struct swaybar_hotspot *VAR_21 = FUNC_4(1, sizeof(struct swaybar_hotspot));
 VAR_21->x = *VAR_8;
 VAR_21->y = 0;
 VAR_21->width = VAR_19;
 VAR_21->height = VAR_11;
 VAR_21->callback = VAR_4;
 VAR_21->destroy = VAR_3;
 VAR_21->data = FUNC_8(VAR_7->name);
 FUNC_9(&VAR_6->hotspots, &VAR_21->link);

 *VAR_8 += VAR_19;
 return VAR_6->height;
}
