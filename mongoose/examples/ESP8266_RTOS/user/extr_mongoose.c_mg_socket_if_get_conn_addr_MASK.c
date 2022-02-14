
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union socket_address {int dummy; } socket_address ;
struct mg_connection {int flags; int sock; int sa; } ;


 int VAR_0 ;
 int FUNC_0 (union socket_address*,int *,int) ;
 int FUNC_1 (int ,int,union socket_address*) ;

void FUNC_2(struct mg_connection *VAR_1, int VAR_2,
                                union socket_address *VAR_3) {
  if ((VAR_1->flags & VAR_0) && VAR_2) {
    FUNC_0(VAR_3, &VAR_1->sa, sizeof(*VAR_3));
    return;
  }
  FUNC_1(VAR_1->sock, VAR_2, VAR_3);
}
