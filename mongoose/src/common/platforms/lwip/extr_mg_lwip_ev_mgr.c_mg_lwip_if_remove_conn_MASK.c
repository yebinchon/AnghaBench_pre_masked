
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_ev_mgr_lwip_data {TYPE_2__* sig_queue; } ;
struct mg_connection {TYPE_1__* iface; } ;
struct TYPE_4__ {int sig; struct mg_connection* nc; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct mg_connection *VAR_2) {
  struct mg_ev_mgr_lwip_data *VAR_3 =
      (struct mg_ev_mgr_lwip_data *) VAR_2->iface->data;

  for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    if (VAR_3->sig_queue[VAR_4].nc == VAR_2) {
      VAR_3->sig_queue[VAR_4].sig = VAR_1;
    }
  }
}
