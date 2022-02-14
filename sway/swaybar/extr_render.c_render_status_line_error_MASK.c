
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct swaybar_output {scalar_t__ height; scalar_t__ scale; TYPE_3__* bar; } ;
typedef int cairo_t ;
struct TYPE_6__ {TYPE_2__* config; TYPE_1__* status; } ;
struct TYPE_5__ {double status_padding; char* font; int height; } ;
struct TYPE_4__ {char* text; } ;


 int FUNC_0 (int *,double,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (int *,char*,int*,int*,int *,double,int,char*,char const*) ;
 int FUNC_4 (int *,char*,scalar_t__,int,char*,char const*) ;

__attribute__((used)) static uint32_t FUNC_5(cairo_t *VAR_0,
  struct swaybar_output *VAR_1, double *VAR_2) {
 const char *VAR_3 = VAR_1->bar->status->text;
 if (!VAR_3) {
  return 0;
 }

 uint32_t VAR_4 = VAR_1->height * VAR_1->scale;

 FUNC_1(VAR_0, 0xFF0000FF);

 int VAR_5 = 3 * VAR_1->scale;
 double VAR_6 =
  VAR_1->bar->config->status_padding * VAR_1->scale;

 char *VAR_7 = VAR_1->bar->config->font;
 int VAR_8, VAR_9;
 FUNC_3(VAR_0, VAR_7, &VAR_8, &VAR_9, ((void*)0),
   VAR_1->scale, 0, "%s", VAR_3);

 uint32_t VAR_10 = VAR_9 + VAR_6 * 2;
 uint32_t VAR_11 = VAR_10 / VAR_1->scale;
 if (!VAR_1->bar->config->height &&
   VAR_1->height < VAR_11) {
  return VAR_11;
 }
 *VAR_2 -= VAR_8 + VAR_5;

 double VAR_12 = VAR_4 / 2.0 - VAR_9 / 2.0;
 FUNC_0(VAR_0, *VAR_2, (int)FUNC_2(VAR_12));
 FUNC_4(VAR_0, VAR_7, VAR_1->scale, 0, "%s", VAR_3);
 *VAR_2 -= VAR_5;
 return VAR_1->height;
}
