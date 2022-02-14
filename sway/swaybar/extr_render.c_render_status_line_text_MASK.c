
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct swaybar_output {double scale; scalar_t__ height; TYPE_3__* bar; scalar_t__ focused; } ;
struct TYPE_5__ {int statusline; int focused_statusline; } ;
struct swaybar_config {double status_padding; int pango_markup; int font; int height; TYPE_2__ colors; } ;
typedef int cairo_t ;
struct TYPE_6__ {struct swaybar_config* config; TYPE_1__* status; } ;
struct TYPE_4__ {char* text; } ;


 int FUNC_0 (int *,double,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (int *,int ,int*,int*,int *,double,int ,char*,char const*) ;
 int FUNC_4 (int *,int ,scalar_t__,int ,char*,char const*) ;

__attribute__((used)) static uint32_t FUNC_5(cairo_t *VAR_0,
  struct swaybar_output *VAR_1, double *VAR_2) {
 const char *VAR_3 = VAR_1->bar->status->text;
 if (!VAR_3) {
  return 0;
 }

 struct swaybar_config *VAR_4 = VAR_1->bar->config;
 FUNC_1(VAR_0, VAR_1->focused ?
   VAR_4->colors.focused_statusline : VAR_4->colors.statusline);

 int VAR_5, VAR_6;
 FUNC_3(VAR_0, VAR_4->font, &VAR_5, &VAR_6, ((void*)0),
   VAR_1->scale, VAR_4->pango_markup, "%s", VAR_3);

 double VAR_7 = VAR_4->status_padding * VAR_1->scale;
 int VAR_8 = 3 * VAR_1->scale;

 uint32_t VAR_9 = VAR_6 + VAR_7 * 2;
 uint32_t VAR_10 = VAR_9 / VAR_1->scale;
 if (!VAR_1->bar->config->height &&
   VAR_1->height < VAR_10) {
  return VAR_10;
 }

 *VAR_2 -= VAR_5 + VAR_8;
 uint32_t VAR_11 = VAR_1->height * VAR_1->scale;
 double VAR_12 = VAR_11 / 2.0 - VAR_6 / 2.0;
 FUNC_0(VAR_0, *VAR_2, (int)FUNC_2(VAR_12));
 FUNC_4(VAR_0, VAR_4->font, VAR_1->scale,
   VAR_4->pango_markup, "%s", VAR_3);
 *VAR_2 -= VAR_8;
 return VAR_1->height;
}
