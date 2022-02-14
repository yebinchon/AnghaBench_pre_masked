
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ top; scalar_t__ right; scalar_t__ bottom; scalar_t__ left; } ;
struct workspace_config {scalar_t__ gaps_inner; TYPE_4__* outputs; TYPE_3__ gaps_outer; } ;
struct TYPE_9__ {scalar_t__ top; scalar_t__ right; scalar_t__ bottom; scalar_t__ left; } ;
struct sway_workspace {scalar_t__ gaps_inner; int node; void* output_priority; TYPE_2__ gaps_outer; void* tiling; void* floating; int layout; int prev_split_layout; int * name; } ;
struct sway_output {TYPE_1__* wlr_output; } ;
struct TYPE_14__ {scalar_t__ gaps_inner; TYPE_2__ gaps_outer; } ;
struct TYPE_12__ {int new_node; } ;
struct TYPE_13__ {TYPE_5__ events; } ;
struct TYPE_11__ {int length; char** items; } ;
struct TYPE_8__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sway_workspace* FUNC_0 (int,int) ;
 TYPE_7__* VAR_5 ;
 void* FUNC_1 () ;
 int FUNC_2 (int *,struct sway_workspace*,char*) ;
 int FUNC_3 (void*,int *) ;
 int FUNC_4 (int *,int ,struct sway_workspace*) ;
 int FUNC_5 (struct sway_output*,struct sway_workspace*) ;
 int FUNC_6 (struct sway_output*) ;
 int FUNC_7 (struct sway_output*) ;
 TYPE_6__* VAR_6 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int * FUNC_9 (char const*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int *,int *) ;
 struct workspace_config* FUNC_12 (char const*) ;
 struct sway_output* FUNC_13 (char const*) ;
 int FUNC_14 (struct sway_workspace*,struct sway_output*) ;

struct sway_workspace *FUNC_15(struct sway_output *VAR_7,
  const char *VAR_8) {
 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_13(VAR_8);
 }

 FUNC_10(VAR_3, "Adding workspace %s for output %s", VAR_8,
   VAR_7->wlr_output->name);

 struct sway_workspace *VAR_9 = FUNC_0(1, sizeof(struct sway_workspace));
 if (!VAR_9) {
  FUNC_10(VAR_4, "Unable to allocate sway_workspace");
  return ((void*)0);
 }
 FUNC_4(&VAR_9->node, VAR_2, VAR_9);
 VAR_9->name = VAR_8 ? FUNC_9(VAR_8) : ((void*)0);
 VAR_9->prev_split_layout = VAR_1;
 VAR_9->layout = FUNC_6(VAR_7);
 VAR_9->floating = FUNC_1();
 VAR_9->tiling = FUNC_1();
 VAR_9->output_priority = FUNC_1();

 VAR_9->gaps_outer = VAR_5->gaps_outer;
 VAR_9->gaps_inner = VAR_5->gaps_inner;
 if (VAR_8) {
  struct workspace_config *VAR_10 = FUNC_12(VAR_8);
  if (VAR_10) {
   if (VAR_10->gaps_outer.top != VAR_0) {
    VAR_9->gaps_outer.top = VAR_10->gaps_outer.top;
   }
   if (VAR_10->gaps_outer.right != VAR_0) {
    VAR_9->gaps_outer.right = VAR_10->gaps_outer.right;
   }
   if (VAR_10->gaps_outer.bottom != VAR_0) {
    VAR_9->gaps_outer.bottom = VAR_10->gaps_outer.bottom;
   }
   if (VAR_10->gaps_outer.left != VAR_0) {
    VAR_9->gaps_outer.left = VAR_10->gaps_outer.left;
   }
   if (VAR_10->gaps_inner != VAR_0) {
    VAR_9->gaps_inner = VAR_10->gaps_inner;
   }


   for (int VAR_11 = 0; VAR_11 < VAR_10->outputs->length; ++VAR_11) {
    char *VAR_12 = VAR_10->outputs->items[VAR_11];
    if (FUNC_8(VAR_12, "*") != 0) {
     FUNC_3(VAR_9->output_priority, FUNC_9(VAR_12));
    }
   }
  }
 }


 FUNC_14(VAR_9, VAR_7);

 FUNC_5(VAR_7, VAR_9);
 FUNC_7(VAR_7);

 FUNC_2(((void*)0), VAR_9, "init");
 FUNC_11(&VAR_6->events.new_node, &VAR_9->node);

 return VAR_9;
}
