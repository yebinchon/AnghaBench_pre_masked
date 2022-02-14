
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {scalar_t__ sock; int flags; int * listener; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct mg_connection *VAR_2) {
  if (VAR_2->sock == VAR_0) return;
  if (!(VAR_2->flags & VAR_1)) {
    FUNC_0(VAR_2->sock);
  } else {

    if (VAR_2->listener == ((void*)0)) FUNC_0(VAR_2->sock);
  }
  VAR_2->sock = VAR_0;
}
