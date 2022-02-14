
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;


 double VAR_0 ;
 int FUNC_0 (struct mg_connection*,char*,char*) ;
 int FUNC_1 (struct mg_connection*,char*,int) ;
 int FUNC_2 (struct mg_connection*,char*,int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mg_connection *VAR_1) {


  int VAR_2 = (double) FUNC_3() / VAR_0 * 100.0;


  FUNC_0(VAR_1, "%s", "HTTP/1.1 200 OK\r\nTransfer-Encoding: chunked\r\n\r\n");


  FUNC_1(VAR_1, "{ \"result\": %d }", VAR_2);


  FUNC_2(VAR_1, "", 0);
}
