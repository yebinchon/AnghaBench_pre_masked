
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int sock; } ;
typedef int sock_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mg_connection *VAR_0, sock_t VAR_1) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1);
  VAR_0->sock = VAR_1;
  FUNC_0(("%p %d", VAR_0, VAR_1));
}
