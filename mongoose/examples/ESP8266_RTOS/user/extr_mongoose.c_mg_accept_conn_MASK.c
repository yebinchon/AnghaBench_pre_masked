
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin_port; int sin_addr; } ;
union socket_address {TYPE_1__ sin; int sa; } ;
struct mg_connection {int sock; } ;
typedef int socklen_t ;
typedef scalar_t__ sock_t ;
typedef int sa ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *,int*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 struct mg_connection* FUNC_5 (struct mg_connection*) ;
 int FUNC_6 (struct mg_connection*,union socket_address*,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct mg_connection*,scalar_t__) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct mg_connection *VAR_1) {
  struct mg_connection *VAR_2;
  union socket_address VAR_3;
  socklen_t VAR_4 = sizeof(VAR_3);

  sock_t VAR_5 = FUNC_1(VAR_1->sock, &VAR_3.sa, &VAR_4);
  if (VAR_5 == VAR_0) {
    if (FUNC_7()) {
      FUNC_0(("%p: failed to accept: %d", VAR_1, FUNC_4()));
    }
    return 0;
  }
  VAR_2 = FUNC_5(VAR_1);
  if (VAR_2 == ((void*)0)) {
    FUNC_2(VAR_5);
    return 0;
  }
  FUNC_0(("%p conn from %s:%d", VAR_2, FUNC_3(VAR_3.sin.sin_addr),
       FUNC_9(VAR_3.sin.sin_port)));
  FUNC_8(VAR_2, VAR_5);
  FUNC_6(VAR_2, &VAR_3, VAR_4);
  return 1;
}
