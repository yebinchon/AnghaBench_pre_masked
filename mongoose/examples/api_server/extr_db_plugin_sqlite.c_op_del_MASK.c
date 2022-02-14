
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int len; int p; } ;
struct mg_connection {int dummy; } ;
struct http_message {int dummy; } ;
typedef int sqlite3_stmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mg_connection*,char*,char*) ;
 int FUNC_1 (int *,int,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,char*,int,int **,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_3, const struct http_message *VAR_4,
                   const struct mg_str *VAR_5, void *VAR_6) {
  sqlite3_stmt *VAR_7 = ((void*)0);
  int VAR_8;
  (void) VAR_4;

  if (FUNC_3(VAR_6, "DELETE FROM kv WHERE key = ?;", -1, &VAR_7,
                         ((void*)0)) == VAR_0) {
    FUNC_1(VAR_7, 1, VAR_5->p, VAR_5->len, VAR_2);
    VAR_8 = FUNC_4(VAR_7);
    if (VAR_8 == VAR_0 || VAR_8 == VAR_1) {
      FUNC_0(VAR_3, "%s", "HTTP/1.1 200 OK\r\nContent-Length: 0\r\n\r\n");
    } else {
      FUNC_0(VAR_3, "%s",
                "HTTP/1.1 404 Not Found\r\n"
                "Content-Length: 0\r\n\r\n");
    }
    FUNC_2(VAR_7);
  } else {
    FUNC_0(VAR_3, "%s",
              "HTTP/1.1 500 Server Error\r\n"
              "Content-Length: 0\r\n\r\n");
  }
}
