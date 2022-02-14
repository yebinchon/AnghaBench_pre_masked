
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_mgr {TYPE_1__** ifaces; } ;
struct mg_lwip_conn_state {int recv_pending; int err; } ;
struct mg_ev_mgr_lwip_data {scalar_t__ sig_queue_len; int start_index; TYPE_2__* sig_queue; } ;
struct mg_connection {int recv_mbuf; int * mgr; int * iface; scalar_t__ sock; } ;
struct TYPE_4__ {int sig; struct mg_connection* nc; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 size_t VAR_0 ;



 int VAR_1 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mg_connection*) ;
 int FUNC_2 (struct mg_connection*) ;
 int FUNC_3 (struct mg_connection*,int ) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(struct mg_mgr *VAR_2) {
  struct mg_ev_mgr_lwip_data *VAR_3 =
      (struct mg_ev_mgr_lwip_data *) VAR_2->ifaces[VAR_0]->data;
  while (VAR_3->sig_queue_len > 0) {
    FUNC_5();
    int VAR_4 = VAR_3->start_index;
    int VAR_5 = VAR_3->sig_queue[VAR_4].sig;
    struct mg_connection *VAR_6 = VAR_3->sig_queue[VAR_4].nc;
    struct mg_lwip_conn_state *VAR_7 = (struct mg_lwip_conn_state *) VAR_6->sock;
    VAR_3->start_index = (VAR_4 + 1) % VAR_1;
    VAR_3->sig_queue_len--;
    FUNC_6();
    if (VAR_6->iface == ((void*)0) || VAR_6->mgr == ((void*)0)) continue;
    switch (VAR_5) {
      case 130: {
        FUNC_3(VAR_6, VAR_7->err);
        break;
      }
      case 131: {
        FUNC_1(VAR_6);
        break;
      }
      case 129: {
        VAR_7->recv_pending = 0;
        FUNC_2(VAR_6);
        FUNC_0(&VAR_6->recv_mbuf);
        break;
      }
      case 128: {
        break;
      }
      case 132: {
        FUNC_4(VAR_6);
        break;
      }
    }
  }
}
