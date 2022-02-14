
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union socket_address {int dummy; } socket_address ;
struct mg_connection {int dummy; } ;
typedef scalar_t__ sock_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (union socket_address*,int ,int ) ;
 int FUNC_2 (struct mg_connection*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mg_connection *VAR_2,
                                   union socket_address *VAR_3) {
  sock_t VAR_4 = FUNC_1(VAR_3, VAR_1, 0);
  if (VAR_4 == VAR_0) return (FUNC_0() ? FUNC_0() : 1);
  FUNC_2(VAR_2, VAR_4);
  return 0;
}
