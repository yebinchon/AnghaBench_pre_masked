
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlr_box {int dummy; } ;
struct input_config {TYPE_2__* mapped_to_region; int mapped_to; } ;
struct cmd_results {int dummy; } ;
struct TYPE_5__ {struct input_config* input_config; } ;
struct TYPE_7__ {TYPE_1__ handler_context; } ;
struct TYPE_6__ {int width; int height; void* y; void* x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int,int) ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char const*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (char*,char**,int) ;

struct cmd_results *FUNC_5(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_1(VAR_5, "map_to_region", VAR_2, 4))) {
  return VAR_7;
 }
 struct input_config *VAR_8 = VAR_4->handler_context.input_config;
 if (!VAR_8) {
  return FUNC_2(VAR_0, "No input device defined");
 }

 VAR_8->mapped_to = VAR_3;
 VAR_8->mapped_to_region = FUNC_0(1, sizeof(struct wlr_box));

 const char *VAR_9;
 char *VAR_10;

 VAR_8->mapped_to_region->x = FUNC_4(VAR_6[0], &VAR_10, 10);
 if (VAR_10[0] != '\0') {
  VAR_9 = "Invalid X coordinate";
  goto error;
 }

 VAR_8->mapped_to_region->y = FUNC_4(VAR_6[1], &VAR_10, 10);
 if (VAR_10[0] != '\0') {
  VAR_9 = "Invalid Y coordinate";
  goto error;
 }

 VAR_8->mapped_to_region->width = FUNC_4(VAR_6[2], &VAR_10, 10);
 if (VAR_10[0] != '\0' || VAR_8->mapped_to_region->width < 1) {
  VAR_9 = "Invalid width";
  goto error;
 }

 VAR_8->mapped_to_region->height = FUNC_4(VAR_6[3], &VAR_10, 10);
 if (VAR_10[0] != '\0' || VAR_8->mapped_to_region->height < 1) {
  VAR_9 = "Invalid height";
  goto error;
 }

 return FUNC_2(VAR_1, ((void*)0));

error:
 FUNC_3(VAR_8->mapped_to_region);
 VAR_8->mapped_to_region = ((void*)0);
 return FUNC_2(VAR_0, VAR_9);
}
