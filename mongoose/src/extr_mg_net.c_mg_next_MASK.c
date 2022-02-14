
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {struct mg_connection* active_connections; } ;
struct mg_connection {struct mg_connection* next; } ;



struct mg_connection *FUNC_0(struct mg_mgr *VAR_0, struct mg_connection *VAR_1) {
  return VAR_1 == ((void*)0) ? VAR_0->active_connections : VAR_1->next;
}
