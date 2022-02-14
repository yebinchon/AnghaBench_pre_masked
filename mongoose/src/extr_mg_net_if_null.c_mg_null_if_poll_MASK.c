
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct mg_mgr {struct mg_connection* active_connections; } ;
struct mg_iface {struct mg_mgr* mgr; } ;
struct mg_connection {struct mg_connection* next; } ;


 int FUNC_0 (struct mg_connection*,double) ;
 double FUNC_1 () ;

__attribute__((used)) static time_t FUNC_2(struct mg_iface *VAR_0, int VAR_1) {
  struct mg_mgr *VAR_2 = VAR_0->mgr;
  struct mg_connection *VAR_3, *VAR_4;
  double VAR_5 = FUNC_1();

  for (VAR_3 = VAR_2->active_connections; VAR_3 != ((void*)0); VAR_3 = VAR_4) {
    VAR_4 = VAR_3->next;
    FUNC_0(VAR_3, VAR_5);
  }
  (void) VAR_1;
  return (time_t) VAR_5;
}
