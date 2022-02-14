
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mgr_init_opts {int num_ifaces; int * nameserver; int ** ifaces; int * main_iface; } ;
struct mg_mgr {int num_ifaces; int nameserver; struct mg_iface** ifaces; void* user_data; int * ctl; } ;
struct mg_iface {TYPE_1__* vtable; } ;
typedef int WSADATA ;
struct TYPE_2__ {int (* init ) (struct mg_iface*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct mg_mgr*,int ,int) ;
 struct mg_iface* FUNC_5 (int *,struct mg_mgr*) ;
 int ** VAR_4 ;
 int VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mg_iface*) ;

void FUNC_10(struct mg_mgr *VAR_6, void *VAR_7,
                     struct mg_mgr_init_opts VAR_8) {
  FUNC_4(VAR_6, 0, sizeof(*VAR_6));



  VAR_6->user_data = VAR_7;
  FUNC_7(VAR_2, VAR_3);


  {
    int VAR_9;
    if (VAR_8.num_ifaces == 0) {
      VAR_8.num_ifaces = VAR_5;
      VAR_8.ifaces = VAR_4;
    }
    if (VAR_8.main_iface != ((void*)0)) {
      VAR_8.ifaces[VAR_1] = VAR_8.main_iface;
    }
    VAR_6->num_ifaces = VAR_8.num_ifaces;
    VAR_6->ifaces =
        (struct mg_iface **) FUNC_2(sizeof(*VAR_6->ifaces) * VAR_8.num_ifaces);
    for (VAR_9 = 0; VAR_9 < VAR_8.num_ifaces; VAR_9++) {
      VAR_6->ifaces[VAR_9] = FUNC_5(VAR_8.ifaces[VAR_9], VAR_6);
      VAR_6->ifaces[VAR_9]->vtable->init(VAR_6->ifaces[VAR_9]);
    }
  }
  if (VAR_8.nameserver != ((void*)0)) {
    VAR_6->nameserver = FUNC_8(VAR_8.nameserver);
  }
  FUNC_0(("=================================="));
  FUNC_0(("init mgr=%p", VAR_6));
}
