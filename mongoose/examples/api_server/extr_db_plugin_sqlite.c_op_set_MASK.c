
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct mg_str {scalar_t__ len; char* p; } ;
struct mg_connection {int dummy; } ;
struct http_message {struct mg_str body; struct mg_str query_string; } ;
typedef int sqlite3_stmt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mg_str const*,char*,char*,int) ;
 int FUNC_1 (struct mg_connection*,char*,char*) ;
 int FUNC_2 (int *,int,char*,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (void*,char*,int,int **,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct mg_connection *VAR_2, const struct http_message *VAR_3,
                   const struct mg_str *VAR_4, void *VAR_5) {
  sqlite3_stmt *VAR_6 = ((void*)0);
  char VAR_7[200];
  const struct mg_str *VAR_8 =
      VAR_3->query_string.len > 0 ? &VAR_3->query_string : &VAR_3->body;

  FUNC_0(VAR_8, "value", VAR_7, sizeof(VAR_7));
  if (FUNC_4(VAR_5, "INSERT OR REPLACE INTO kv VALUES (?, ?);", -1,
                         &VAR_6, ((void*)0)) == VAR_0) {
    FUNC_2(VAR_6, 1, VAR_4->p, VAR_4->len, VAR_1);
    FUNC_2(VAR_6, 2, VAR_7, FUNC_6(VAR_7), VAR_1);
    FUNC_5(VAR_6);
    FUNC_3(VAR_6);
  }
  FUNC_1(VAR_2, "%s", "HTTP/1.1 200 OK\r\nContent-Length: 0\r\n\r\n");
}
