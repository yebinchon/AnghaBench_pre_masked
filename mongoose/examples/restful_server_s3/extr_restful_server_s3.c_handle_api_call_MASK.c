
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
struct http_message {int body; } ;
typedef int host ;
typedef int file_name ;
typedef int file_data ;
typedef int bucket ;


 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (struct mg_connection*,char*,char*) ;
 int FUNC_2 (struct mg_connection*,char*) ;
 int FUNC_3 (struct mg_connection*,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct mg_connection *VAR_0, struct http_message *VAR_1) {
  char VAR_2[100], VAR_3[100], VAR_4[100], VAR_5[100];


  FUNC_0(&VAR_1->body, "file_name", VAR_2, sizeof(VAR_2));
  FUNC_0(&VAR_1->body, "file_data", VAR_3, sizeof(VAR_3));
  FUNC_0(&VAR_1->body, "host", VAR_4, sizeof(VAR_4));
  FUNC_0(&VAR_1->body, "bucket", VAR_5, sizeof(VAR_5));


  FUNC_1(VAR_0, "%s", "HTTP/1.1 200 OK\r\nTransfer-Encoding: chunked\r\n\r\n");


  if (VAR_2[0] == '\0' || VAR_3[0] == '\0' || VAR_5[0] == '\0') {
    FUNC_2(VAR_0, "bad input");
  } else {
    FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
  }
}
