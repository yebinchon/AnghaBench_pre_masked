
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct swaybar_workspace {int label; } ;
struct swaybar_output {int scale; scalar_t__ height; TYPE_1__* bar; } ;
struct swaybar_config {int height; int pango_markup; int font; } ;
typedef int cairo_t ;
struct TYPE_2__ {struct swaybar_config* config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int*,int*,int *,int,int ,char*,int ) ;

__attribute__((used)) static uint32_t FUNC_1(cairo_t *VAR_3,
  struct swaybar_output *VAR_4,
  struct swaybar_workspace *VAR_5) {
 struct swaybar_config *VAR_6 = VAR_4->bar->config;

 int VAR_7, VAR_8;
 FUNC_0(VAR_3, VAR_6->font, &VAR_7, &VAR_8, ((void*)0),
   VAR_4->scale, VAR_6->pango_markup, "%s", VAR_5->label);

 int VAR_9 = VAR_2 * VAR_4->scale;
 int VAR_10 = VAR_1 * VAR_4->scale;
 int VAR_11 = VAR_0 * VAR_4->scale;

 uint32_t VAR_12 = VAR_9 * 2 + VAR_8
  + VAR_11 * 2;
 uint32_t VAR_13 = VAR_12 / VAR_4->scale;
 if (!VAR_4->bar->config->height &&
   VAR_4->height < VAR_13) {
  return 0;
 }

 return VAR_10 * 2 + VAR_7 + VAR_11 * 2;
}
