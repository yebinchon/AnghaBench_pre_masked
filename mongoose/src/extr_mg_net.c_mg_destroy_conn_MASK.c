
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_connection {scalar_t__ sock; int send_mbuf; int recv_mbuf; int * proto_data; int (* proto_data_destructor ) (int *) ;TYPE_1__* iface; int flags; } ;
struct TYPE_4__ {int (* destroy_conn ) (struct mg_connection*) ;} ;
struct TYPE_3__ {TYPE_2__* vtable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mg_connection*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mg_connection*,int ,int) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (struct mg_connection*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mg_connection *VAR_2, int VAR_3) {
  if (VAR_2->sock != VAR_0) {
    FUNC_0(VAR_1, ("%p 0x%lx %d", VAR_2, VAR_2->flags, VAR_3));
  }
  if (VAR_3) VAR_2->iface->vtable->destroy_conn(VAR_2);
  if (VAR_2->proto_data != ((void*)0) && VAR_2->proto_data_destructor != ((void*)0)) {
    VAR_2->proto_data_destructor(VAR_2->proto_data);
  }



  FUNC_2(&VAR_2->recv_mbuf);
  FUNC_2(&VAR_2->send_mbuf);

  FUNC_3(VAR_2, 0, sizeof(*VAR_2));
  FUNC_1(VAR_2);
}
