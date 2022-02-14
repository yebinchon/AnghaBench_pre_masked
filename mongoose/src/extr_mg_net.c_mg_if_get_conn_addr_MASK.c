
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union socket_address {int dummy; } socket_address ;
struct mg_connection {TYPE_2__* iface; } ;
struct TYPE_4__ {TYPE_1__* vtable; } ;
struct TYPE_3__ {int (* get_conn_addr ) (struct mg_connection*,int,union socket_address*) ;} ;


 int FUNC_0 (struct mg_connection*,int,union socket_address*) ;

void FUNC_1(struct mg_connection *VAR_0, int VAR_1,
                         union socket_address *VAR_2) {
  VAR_0->iface->vtable->get_conn_addr(VAR_0, VAR_1, VAR_2);
}
