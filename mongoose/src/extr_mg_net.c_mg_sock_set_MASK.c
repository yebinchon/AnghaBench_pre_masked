
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_connection {TYPE_2__* iface; } ;
typedef scalar_t__ sock_t ;
struct TYPE_4__ {TYPE_1__* vtable; } ;
struct TYPE_3__ {int (* sock_set ) (struct mg_connection*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mg_connection*,scalar_t__) ;

void FUNC_1(struct mg_connection *VAR_1, sock_t VAR_2) {
  if (VAR_2 != VAR_0) {
    VAR_1->iface->vtable->sock_set(VAR_1, VAR_2);
  }
}
