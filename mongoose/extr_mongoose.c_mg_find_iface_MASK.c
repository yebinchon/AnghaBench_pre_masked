
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int num_ifaces; struct mg_iface** ifaces; } ;
struct mg_iface_vtable {int dummy; } ;
struct mg_iface {struct mg_iface_vtable const* vtable; } ;



struct mg_iface *FUNC_0(struct mg_mgr *VAR_0,
                               const struct mg_iface_vtable *VAR_1,
                               struct mg_iface *VAR_2) {
  int VAR_3 = 0;
  if (VAR_2 != ((void*)0)) {
    for (VAR_3 = 0; VAR_3 < VAR_0->num_ifaces; VAR_3++) {
      if (VAR_0->ifaces[VAR_3] == VAR_2) {
        VAR_3++;
        break;
      }
    }
  }

  for (; VAR_3 < VAR_0->num_ifaces; VAR_3++) {
    if (VAR_0->ifaces[VAR_3]->vtable == VAR_1) {
      return VAR_0->ifaces[VAR_3];
    }
  }
  return ((void*)0);
}
