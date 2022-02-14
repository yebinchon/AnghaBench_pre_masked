
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_output {struct sway_output* data; } ;
struct sway_workspace {struct sway_output* output; } ;
struct sway_output {int wlr_output; } ;
typedef int names ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
struct TYPE_4__ {int seat; } ;
struct TYPE_6__ {TYPE_1__ handler_context; } ;
struct TYPE_5__ {int output_layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (int) ;
 struct sway_output* FUNC_1 (char const*) ;
 TYPE_2__* VAR_5 ;
 struct sway_workspace* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 struct wlr_output* FUNC_4 (int ,int,int ,int,int) ;
 struct wlr_output* FUNC_5 (int ,int ,int ,int,int) ;

__attribute__((used)) static struct sway_output *FUNC_6(const char *VAR_6,
  struct sway_output *VAR_7, int VAR_8, int VAR_9) {
 if (FUNC_3(VAR_6, "current") == 0) {
  struct sway_workspace *VAR_10 =
   FUNC_2(VAR_4->handler_context.seat);
  if (!VAR_10) {
   return ((void*)0);
  }
  return VAR_10->output;
 }

 struct {
  char *name;
  enum wlr_direction direction;
 } VAR_11[] = {
  { "up", VAR_3 },
  { "down", VAR_0 },
  { "left", VAR_1 },
  { "right", VAR_2 },
 };

 enum wlr_direction VAR_12 = 0;

 for (size_t VAR_13 = 0; VAR_13 < sizeof(VAR_11) / sizeof(VAR_11[0]); ++VAR_13) {
  if (FUNC_3(VAR_11[VAR_13].name, VAR_6) == 0) {
   VAR_12 = VAR_11[VAR_13].direction;
   break;
  }
 }

 if (VAR_7 && VAR_12) {
  struct wlr_output *VAR_14 = FUNC_4(
    VAR_5->output_layout, VAR_12, VAR_7->wlr_output,
    VAR_8, VAR_9);

  if (!VAR_14) {
   VAR_14 = FUNC_5(
     VAR_5->output_layout, FUNC_0(VAR_12),
     VAR_7->wlr_output, VAR_8, VAR_9);
  }

  if (VAR_14) {
   return VAR_14->data;
  }
 }

 return FUNC_1(VAR_6);
}
