
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct input_config_mapped_from_region {int dummy; } ;
struct input_config {TYPE_2__* mapped_from_region; } ;
struct cmd_results {int dummy; } ;
struct TYPE_5__ {struct input_config* input_config; } ;
struct TYPE_7__ {TYPE_1__ handler_context; } ;
struct TYPE_6__ {scalar_t__ x1; scalar_t__ y1; scalar_t__ x2; scalar_t__ y2; int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int,int) ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,scalar_t__*,scalar_t__*,int*) ;

struct cmd_results *FUNC_5(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_1(VAR_4, "map_from_region", VAR_2, 2))) {
  return VAR_6;
 }
 struct input_config *VAR_7 = VAR_3->handler_context.input_config;
 if (!VAR_7) {
  return FUNC_2(VAR_0, "No input device defined");
 }

 VAR_7->mapped_from_region =
  FUNC_0(1, sizeof(struct input_config_mapped_from_region));

 bool VAR_8, VAR_9;
 if (!FUNC_4(VAR_5[0], &VAR_7->mapped_from_region->x1,
   &VAR_7->mapped_from_region->y1, &VAR_8)) {
  FUNC_3(VAR_7->mapped_from_region);
  VAR_7->mapped_from_region = ((void*)0);
  return FUNC_2(VAR_0, "Invalid top-left coordinates");
 }
 if (!FUNC_4(VAR_5[1], &VAR_7->mapped_from_region->x2,
   &VAR_7->mapped_from_region->y2, &VAR_9)) {
  FUNC_3(VAR_7->mapped_from_region);
  VAR_7->mapped_from_region = ((void*)0);
  return FUNC_2(VAR_0, "Invalid bottom-right coordinates");
 }
 if (VAR_7->mapped_from_region->x1 > VAR_7->mapped_from_region->x2 ||
   VAR_7->mapped_from_region->y1 > VAR_7->mapped_from_region->y2) {
  FUNC_3(VAR_7->mapped_from_region);
  VAR_7->mapped_from_region = ((void*)0);
  return FUNC_2(VAR_0, "Invalid rectangle");
 }
 if (VAR_8 != VAR_9) {
  FUNC_3(VAR_7->mapped_from_region);
  VAR_7->mapped_from_region = ((void*)0);
  return FUNC_2(VAR_0,
   "Both coordinates must be in the same unit");
 }
 VAR_7->mapped_from_region->mm = VAR_8;

 return FUNC_2(VAR_1, ((void*)0));
}
