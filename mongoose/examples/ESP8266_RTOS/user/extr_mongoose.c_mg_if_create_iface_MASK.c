
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_iface_vtable {int dummy; } ;
struct mg_iface {struct mg_iface_vtable const* vtable; int * data; struct mg_mgr* mgr; } ;


 scalar_t__ FUNC_0 (int,int) ;

struct mg_iface *FUNC_1(const struct mg_iface_vtable *VAR_0,
                                    struct mg_mgr *VAR_1) {
  struct mg_iface *VAR_2 = (struct mg_iface *) FUNC_0(1, sizeof(*VAR_2));
  VAR_2->mgr = VAR_1;
  VAR_2->data = ((void*)0);
  VAR_2->vtable = VAR_0;
  return VAR_2;
}
