
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin_port; int sin_addr; } ;
union socket_address {TYPE_1__ sin; } ;
struct mg_connection {int flags; union socket_address sa; int user_data; TYPE_2__* listener; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mg_connection*,int *,int ,int ,union socket_address*) ;
 int FUNC_3 (struct mg_connection*) ;
 int FUNC_4 (struct mg_connection*) ;
 scalar_t__ FUNC_5 (struct mg_connection*,TYPE_2__*) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct mg_connection *VAR_5, union socket_address *VAR_6,
                         size_t VAR_7) {
  FUNC_0(VAR_0, ("%p %s://%s:%hu", VAR_5, (VAR_5->flags & VAR_3 ? "udp" : "tcp"),
                 FUNC_1(VAR_6->sin.sin_addr), FUNC_6(VAR_6->sin.sin_port)));
  VAR_5->sa = *VAR_6;
  {
    FUNC_2(VAR_5, ((void*)0), VAR_5->user_data, VAR_1, &VAR_5->sa);
  }
  (void) VAR_7;
}
