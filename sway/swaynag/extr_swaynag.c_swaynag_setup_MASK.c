
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl_registry {int dummy; } ;
struct swaynag_pointer {int cursor_surface; } ;
struct swaynag {int scale; scalar_t__ querying_outputs; int surface; int layer_surface; TYPE_2__* type; TYPE_1__* output; scalar_t__ layer_shell; scalar_t__ compositor; struct swaynag_pointer pointer; int display; scalar_t__ shm; int outputs; } ;
struct TYPE_4__ {int anchors; scalar_t__ output; } ;
struct TYPE_3__ {int * wl_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (struct swaynag*) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 struct wl_registry* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct wl_registry*,int *,struct swaynag*) ;
 int FUNC_11 (struct wl_registry*) ;
 int FUNC_12 (int,int *,struct swaynag*) ;
 int FUNC_13 (scalar_t__,int,int *,int ,char*) ;
 int FUNC_14 (int,int *,struct swaynag*) ;
 int FUNC_15 (int,int ) ;

void FUNC_16(struct swaynag *VAR_6) {
 VAR_6->display = FUNC_6(((void*)0));
 if (!VAR_6->display) {
  FUNC_2("Unable to connect to the compositor. "
    "If your compositor is running, check or set the "
    "WAYLAND_DISPLAY environment variable.");
 }

 VAR_6->scale = 1;
 FUNC_9(&VAR_6->outputs);

 struct wl_registry *VAR_7 = FUNC_7(VAR_6->display);
 FUNC_10(VAR_7, &VAR_4, VAR_6);
 FUNC_8(VAR_6->display);
 FUNC_0(VAR_6->compositor && VAR_6->layer_shell && VAR_6->shm);

 while (VAR_6->querying_outputs > 0) {
  FUNC_8(VAR_6->display);
 }

 if (!VAR_6->output && VAR_6->type->output) {
  FUNC_3(VAR_1, "Output '%s' not found", VAR_6->type->output);
  FUNC_4(VAR_6);
  FUNC_1(VAR_0);
 }

 struct swaynag_pointer *VAR_8 = &VAR_6->pointer;
 VAR_8->cursor_surface = FUNC_5(VAR_6->compositor);
 FUNC_0(VAR_8->cursor_surface);

 VAR_6->surface = FUNC_5(VAR_6->compositor);
 FUNC_0(VAR_6->surface);
 FUNC_12(VAR_6->surface, &VAR_5, VAR_6);

 VAR_6->layer_surface = FUNC_13(
   VAR_6->layer_shell, VAR_6->surface,
   VAR_6->output ? VAR_6->output->wl_output : ((void*)0),
   VAR_2, "swaynag");
 FUNC_0(VAR_6->layer_surface);
 FUNC_14(VAR_6->layer_surface,
   &VAR_3, VAR_6);
 FUNC_15(VAR_6->layer_surface,
   VAR_6->type->anchors);

 FUNC_11(VAR_7);
}
