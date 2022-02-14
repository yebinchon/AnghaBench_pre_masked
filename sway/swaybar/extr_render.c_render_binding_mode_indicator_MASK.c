
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct swaybar_output {int scale; scalar_t__ height; TYPE_3__* bar; } ;
struct TYPE_4__ {int text; int border; int background; } ;
struct TYPE_5__ {TYPE_1__ binding_mode; } ;
struct swaybar_config {int font; TYPE_2__ colors; int height; } ;
typedef int cairo_t ;
struct TYPE_6__ {char* mode; int mode_pango_markup; struct swaybar_config* config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,double,int) ;
 int FUNC_2 (int *,double,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (double) ;
 int FUNC_5 (int *,int ,int*,int*,int *,int,int ,char*,char const*) ;
 int FUNC_6 (int *,int ,scalar_t__,int ,char*,char const*) ;

__attribute__((used)) static uint32_t FUNC_7(cairo_t *VAR_3,
  struct swaybar_output *VAR_4, double VAR_5) {
 const char *VAR_6 = VAR_4->bar->mode;
 if (!VAR_6) {
  return 0;
 }

 struct swaybar_config *VAR_7 = VAR_4->bar->config;
 int VAR_8, VAR_9;
 FUNC_5(VAR_3, VAR_7->font, &VAR_8, &VAR_9, ((void*)0),
   VAR_4->scale, VAR_4->bar->mode_pango_markup,
   "%s", VAR_6);

 int VAR_10 = VAR_2 * VAR_4->scale;
 int VAR_11 = VAR_1 * VAR_4->scale;
 int VAR_12 = VAR_0 * VAR_4->scale;

 uint32_t VAR_13 = VAR_9 + VAR_10 * 2
  + VAR_12 * 2;
 uint32_t VAR_14 = VAR_13 / VAR_4->scale;
 if (!VAR_4->bar->config->height &&
   VAR_4->height < VAR_14) {
  return VAR_14;
 }
 uint32_t VAR_15 = VAR_8 + VAR_11 * 2 + VAR_12 * 2;

 uint32_t VAR_16 = VAR_4->height * VAR_4->scale;
 FUNC_3(VAR_3, VAR_7->colors.binding_mode.background);
 FUNC_2(VAR_3, VAR_5, 0, VAR_15, VAR_16);
 FUNC_0(VAR_3);

 FUNC_3(VAR_3, VAR_7->colors.binding_mode.border);
 FUNC_2(VAR_3, VAR_5, 0, VAR_15, VAR_12);
 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_5, 0, VAR_12, VAR_16);
 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_5 + VAR_15 - VAR_12, 0, VAR_12, VAR_16);
 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_5, VAR_16 - VAR_12, VAR_15, VAR_12);
 FUNC_0(VAR_3);

 double VAR_17 = VAR_16 / 2.0 - VAR_9 / 2.0;
 FUNC_3(VAR_3, VAR_7->colors.binding_mode.text);
 FUNC_1(VAR_3, VAR_5 + VAR_15 / 2 - VAR_8 / 2, (int)FUNC_4(VAR_17));
 FUNC_6(VAR_3, VAR_7->font, VAR_4->scale,
   VAR_4->bar->mode_pango_markup, "%s", VAR_6);
 return VAR_4->height;
}
