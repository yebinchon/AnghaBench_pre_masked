
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
struct http_message {int body; } ;
typedef int n2 ;
typedef int n1 ;


 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (struct mg_connection*,char*,char*) ;
 int FUNC_2 (struct mg_connection*,char*,double) ;
 int FUNC_3 (struct mg_connection*,char*,int ) ;
 double FUNC_4 (char*,int *) ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_0, struct http_message *VAR_1) {
  char VAR_2[100], VAR_3[100];
  double VAR_4;


  FUNC_0(&VAR_1->body, "n1", VAR_2, sizeof(VAR_2));
  FUNC_0(&VAR_1->body, "n2", VAR_3, sizeof(VAR_3));


  FUNC_1(VAR_0, "%s", "HTTP/1.1 200 OK\r\nTransfer-Encoding: chunked\r\n\r\n");


  VAR_4 = FUNC_4(VAR_2, ((void*)0)) + FUNC_4(VAR_3, ((void*)0));
  FUNC_2(VAR_0, "{ \"result\": %lf }", VAR_4);
  FUNC_3(VAR_0, "", 0);
}
