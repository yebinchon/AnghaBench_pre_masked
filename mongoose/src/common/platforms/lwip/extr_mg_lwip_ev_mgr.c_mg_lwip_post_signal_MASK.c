
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_ev_mgr_lwip_data {int sig_queue_len; int start_index; TYPE_1__* sig_queue; } ;
struct mg_connection {int mgr; TYPE_2__* iface; } ;
typedef enum mg_sig_type { ____Placeholder_mg_sig_type } mg_sig_type ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int sig; struct mg_connection* nc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(enum mg_sig_type VAR_1, struct mg_connection *VAR_2) {
  struct mg_ev_mgr_lwip_data *VAR_3 =
      (struct mg_ev_mgr_lwip_data *) VAR_2->iface->data;
  FUNC_1();
  if (VAR_3->sig_queue_len >= VAR_0) {
    FUNC_2();
    return;
  }
  int VAR_4 = (VAR_3->start_index + VAR_3->sig_queue_len) % VAR_0;
  VAR_3->sig_queue[VAR_4].sig = VAR_1;
  VAR_3->sig_queue[VAR_4].nc = VAR_2;
  VAR_3->sig_queue_len++;
  FUNC_0(VAR_2->mgr);
  FUNC_2();
}
