
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wlr_box {int dummy; } ;
struct timespec {int dummy; } ;
struct TYPE_9__ {int content_height; int content_width; int content_y; int content_x; } ;
struct sway_transaction_instruction {TYPE_2__ container_state; int serial; struct sway_node* node; } ;
struct sway_transaction {scalar_t__ num_waiting; scalar_t__ timer; struct timespec commit_time; scalar_t__ num_configures; TYPE_1__* instructions; } ;
struct sway_node {struct sway_transaction_instruction* instruction; TYPE_3__* sway_container; } ;
struct TYPE_13__ {scalar_t__ txn_wait; scalar_t__ noatomic; scalar_t__ txn_timings; } ;
struct TYPE_12__ {int txn_timeout_ms; int wl_event_loop; } ;
struct TYPE_11__ {int geometry; int saved_geometry; int saved_buffer; int surface; } ;
struct TYPE_10__ {TYPE_4__* view; } ;
struct TYPE_8__ {int length; struct sway_transaction_instruction** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct timespec*) ;
 TYPE_7__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (struct sway_node*) ;
 TYPE_6__ VAR_5 ;
 scalar_t__ FUNC_3 (struct sway_node*,struct sway_transaction_instruction*) ;
 int FUNC_4 (int ,char*,struct sway_transaction*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (int ,int ,struct sway_transaction*) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int ,struct timespec*) ;

__attribute__((used)) static void FUNC_11(struct sway_transaction *VAR_6) {
 FUNC_4(VAR_1, "Transaction %p committing with %i instructions",
   VAR_6, VAR_6->instructions->length);
 VAR_6->num_waiting = 0;
 for (int VAR_7 = 0; VAR_7 < VAR_6->instructions->length; ++VAR_7) {
  struct sway_transaction_instruction *VAR_8 =
   VAR_6->instructions->items[VAR_7];
  struct sway_node *VAR_9 = VAR_8->node;
  if (FUNC_3(VAR_9, VAR_8)) {
   VAR_8->serial = FUNC_6(VAR_9->sway_container->view,
     VAR_8->container_state.content_x,
     VAR_8->container_state.content_y,
     VAR_8->container_state.content_width,
     VAR_8->container_state.content_height);
   ++VAR_6->num_waiting;





   struct timespec VAR_10;
   FUNC_0(VAR_0, &VAR_10);
   FUNC_10(
     VAR_9->sway_container->view->surface, &VAR_10);
  }
  if (FUNC_2(VAR_9) && !VAR_9->sway_container->view->saved_buffer) {
   FUNC_7(VAR_9->sway_container->view);
   FUNC_1(&VAR_9->sway_container->view->saved_geometry,
     &VAR_9->sway_container->view->geometry,
     sizeof(struct wlr_box));
  }
  VAR_9->instruction = VAR_8;
 }
 VAR_6->num_configures = VAR_6->num_waiting;
 if (VAR_3.txn_timings) {
  FUNC_0(VAR_0, &VAR_6->commit_time);
 }
 if (VAR_3.noatomic) {
  VAR_6->num_waiting = 0;
 } else if (VAR_3.txn_wait) {


  VAR_6->num_waiting += 1000000;
 }

 if (VAR_6->num_waiting) {

  VAR_6->timer = FUNC_8(VAR_5.wl_event_loop,
    VAR_4, VAR_6);
  if (VAR_6->timer) {
   FUNC_9(VAR_6->timer,
     VAR_5.txn_timeout_ms);
  } else {
   FUNC_5(VAR_2, "Unable to create transaction timer "
     "(some imperfect frames might be rendered)");
   VAR_6->num_waiting = 0;
  }
 }
}
