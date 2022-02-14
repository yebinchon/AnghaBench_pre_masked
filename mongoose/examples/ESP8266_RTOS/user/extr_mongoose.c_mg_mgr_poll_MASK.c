
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_mgr {int num_calls; int num_ifaces; TYPE_2__** ifaces; } ;
struct TYPE_4__ {TYPE_1__* vtable; } ;
struct TYPE_3__ {int (* poll ) (TYPE_2__*,int) ;} ;


 int FUNC_0 (TYPE_2__*,int) ;

int FUNC_1(struct mg_mgr *VAR_0, int VAR_1) {
  int VAR_2, VAR_3 = VAR_0->num_calls;

  for (VAR_2 = 0; VAR_2 < VAR_0->num_ifaces; VAR_2++) {
    VAR_0->ifaces[VAR_2]->vtable->poll(VAR_0->ifaces[VAR_2], VAR_1);
  }

  return (VAR_0->num_calls - VAR_3);
}
