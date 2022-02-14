
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union socket_address {int sa; } ;
typedef int socklen_t ;
typedef int sock_t ;


 int FUNC_0 (int ,int *,int*) ;
 int FUNC_1 (int ,int *,int*) ;
 int FUNC_2 (union socket_address*,int ,int) ;

__attribute__((used)) static void FUNC_3(sock_t VAR_0, int VAR_1,
                             union socket_address *VAR_2) {
  socklen_t VAR_3 = sizeof(*VAR_2);
  FUNC_2(VAR_2, 0, VAR_3);
  if (VAR_1) {
    FUNC_0(VAR_0, &VAR_2->sa, &VAR_3);
  } else {
    FUNC_1(VAR_0, &VAR_2->sa, &VAR_3);
  }
}
