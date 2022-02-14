
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct swaybar_output {int scale; scalar_t__ height; TYPE_1__* bar; } ;
struct swaybar_config {int height; int font; int binding_mode_indicator; } ;
typedef int cairo_t ;
struct TYPE_2__ {char* mode; struct swaybar_config* config; int mode_pango_markup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int*,int*,int *,int,int ,char*,char const*) ;

__attribute__((used)) static uint32_t FUNC_1(cairo_t *VAR_3,
  struct swaybar_output *VAR_4) {
 const char *VAR_5 = VAR_4->bar->mode;
 if (!VAR_5) {
  return 0;
 }

 struct swaybar_config *VAR_6 = VAR_4->bar->config;

 if (!VAR_6->binding_mode_indicator) {
  return 0;
 }

 int VAR_7, VAR_8;
 FUNC_0(VAR_3, VAR_6->font, &VAR_7, &VAR_8, ((void*)0),
   VAR_4->scale, VAR_4->bar->mode_pango_markup,
   "%s", VAR_5);

 int VAR_9 = VAR_2 * VAR_4->scale;
 int VAR_10 = VAR_1 * VAR_4->scale;
 int VAR_11 = VAR_0 * VAR_4->scale;

 uint32_t VAR_12 = VAR_8 + VAR_9 * 2
  + VAR_11 * 2;
 uint32_t VAR_13 = VAR_12 / VAR_4->scale;
 if (!VAR_4->bar->config->height &&
   VAR_4->height < VAR_13) {
  return 0;
 }
 return VAR_7 + VAR_10 * 2 + VAR_11 * 2;
}
