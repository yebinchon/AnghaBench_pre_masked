
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {struct mg_connection* active_connections; } ;
struct mg_connection {double ev_timer_time; struct mg_connection* next; } ;



double FUNC_0(const struct mg_mgr *VAR_0) {
  double VAR_1 = 0;
  struct mg_connection *VAR_2;
  for (VAR_2 = VAR_0->active_connections; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
    if (VAR_2->ev_timer_time <= 0) continue;
    if (VAR_1 == 0 || VAR_2->ev_timer_time < VAR_1) {
      VAR_1 = VAR_2->ev_timer_time;
    }
  }
  return VAR_1;
}
