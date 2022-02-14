
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_output {int dummy; } ;
struct sway_workspace {TYPE_2__* output; } ;
struct sway_seat {int dummy; } ;
struct sway_output {int node; } ;
struct cmd_results {int dummy; } ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
struct TYPE_4__ {int lx; int width; int ly; int height; int wlr_output; } ;
struct TYPE_3__ {int output_layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char**,int) ;
 int FUNC_3 (int) ;
 struct sway_output* FUNC_4 (char*) ;
 struct sway_output* FUNC_5 (struct wlr_output*) ;
 struct sway_output* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (char*,int*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_8 (struct sway_seat*) ;
 int FUNC_9 (struct sway_seat*,int *) ;
 struct sway_workspace* FUNC_10 (struct sway_seat*) ;
 int FUNC_11 (struct sway_seat*,int ) ;
 struct wlr_output* FUNC_12 (int ,int ,int ,int,int) ;

__attribute__((used)) static struct cmd_results *FUNC_13(struct sway_seat *VAR_4,
  int VAR_5, char **VAR_6) {
 if (!VAR_5) {
  return FUNC_0(VAR_1,
   "Expected 'focus output <direction|name>'");
 }
 char *VAR_7 = FUNC_2(VAR_6, VAR_5);
 struct sway_output *VAR_8 = FUNC_4(VAR_7);

 if (!VAR_8) {
  enum wlr_direction VAR_9;
  if (!FUNC_7(VAR_7, &VAR_9)) {
   FUNC_1(VAR_7);
   return FUNC_0(VAR_1,
    "There is no output with that name");
  }
  struct sway_workspace *VAR_10 = FUNC_10(VAR_4);
  if (!VAR_10) {
   FUNC_1(VAR_7);
   return FUNC_0(VAR_0,
    "No focused workspace to base directions off of");
  }
  VAR_8 = FUNC_6(VAR_10->output, VAR_9);

  if (!VAR_8) {
   int VAR_11 = VAR_10->output->lx + VAR_10->output->width / 2;
   int VAR_12 = VAR_10->output->ly + VAR_10->output->height / 2;
   struct wlr_output *VAR_13 = FUNC_12(
     VAR_3->output_layout, FUNC_3(VAR_9),
     VAR_10->output->wlr_output, VAR_11, VAR_12);
   if (VAR_13) {
    VAR_8 = FUNC_5(VAR_13);
   }
  }
 }

 FUNC_1(VAR_7);
 if (VAR_8) {
  FUNC_11(VAR_4, FUNC_9(VAR_4, &VAR_8->node));
  FUNC_8(VAR_4);
 }

 return FUNC_0(VAR_2, ((void*)0));
}
