
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union socket_address {int dummy; } socket_address ;
struct mg_connection {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mg_connection *VAR_1,
                                   const union socket_address *VAR_2) {
  VAR_1->flags |= VAR_0;
  (void) VAR_2;
}
