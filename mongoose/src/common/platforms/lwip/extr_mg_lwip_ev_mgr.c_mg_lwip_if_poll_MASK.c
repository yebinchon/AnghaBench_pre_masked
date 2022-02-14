
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef double time_t ;
struct mg_mgr {struct mg_connection* active_connections; } ;
struct TYPE_3__ {TYPE_2__* tcp; } ;
struct mg_lwip_conn_state {scalar_t__ draining_rx_chain; int * rx_chain; TYPE_1__ pcb; } ;
struct mg_iface {struct mg_mgr* mgr; } ;
struct mg_connection {scalar_t__ sock; int flags; double ev_timer_time; int send_mbuf; struct mg_connection* next; } ;
struct TYPE_4__ {int * unsent; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mg_mgr*) ;
 int FUNC_3 (struct mg_connection*) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (struct mg_connection*,double) ;
 scalar_t__ FUNC_6 (struct mg_connection*,struct mg_lwip_conn_state*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (int ,struct mg_connection*) ;
 double FUNC_9 () ;
 int VAR_4 ;

time_t FUNC_10(struct mg_iface *VAR_5, int VAR_6) {
  struct mg_mgr *VAR_7 = VAR_5->mgr;
  int VAR_8 = 0;
  double VAR_9 = FUNC_9();
  struct mg_connection *VAR_10, *VAR_11;
  double VAR_12 = 0;
  int VAR_13 = 0;



  FUNC_2(VAR_7);
  for (VAR_10 = VAR_7->active_connections; VAR_10 != ((void*)0); VAR_10 = VAR_11) {
    struct mg_lwip_conn_state *VAR_14 = (struct mg_lwip_conn_state *) VAR_10->sock;
    VAR_11 = VAR_10->next;
    VAR_8++;
    if (!FUNC_5(VAR_10, VAR_9)) continue;
    if (VAR_10->sock != VAR_0 &&
        !(VAR_10->flags & (VAR_2 | VAR_1)) && VAR_14->pcb.tcp != ((void*)0) &&
        VAR_14->pcb.tcp->unsent != ((void*)0)) {
      FUNC_7(VAR_4, VAR_14->pcb.tcp);
    }
    if (VAR_10->ev_timer_time > 0) {
      if (VAR_13 == 0 || VAR_10->ev_timer_time < VAR_12) {
        VAR_12 = VAR_10->ev_timer_time;
      }
      VAR_13++;
    }

    if (VAR_10->sock != VAR_0) {
      if (FUNC_6(VAR_10, VAR_14)) {
        FUNC_4(VAR_10);
        FUNC_1(&VAR_10->send_mbuf);
      }
      if (VAR_14->rx_chain != ((void*)0)) {
        FUNC_3(VAR_10);
      } else if (VAR_14->draining_rx_chain) {




        FUNC_8(VAR_3, VAR_10);
      }
    }
  }





  (void) VAR_6;
  return VAR_9;
}
