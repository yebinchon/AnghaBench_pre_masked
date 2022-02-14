
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
 int FUNC_0 (struct mg_connection*,char*,...) ;
 int FUNC_1 (int *,int,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*,char*,int,int **,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(struct mg_connection *VAR_3, const struct http_message *VAR_4,
                   const struct mg_str *VAR_5, void *VAR_6) {
  sqlite3_stmt *VAR_7 = ((void*)0);
  const char *VAR_8 = ((void*)0);
  int VAR_9;
  (void) VAR_4;

  if (FUNC_4(VAR_6, "SELECT val FROM kv WHERE key = ?;", -1, &VAR_7,
                         ((void*)0)) == VAR_0) {
    FUNC_1(VAR_7, 1, VAR_5->p, VAR_5->len, VAR_2);
    VAR_9 = FUNC_5(VAR_7);
    VAR_8 = (char *) FUNC_2(VAR_7, 0);
    if ((VAR_9 == VAR_0 || VAR_9 == VAR_1) && VAR_8 != ((void*)0)) {
      FUNC_0(VAR_3,
                "HTTP/1.1 200 OK\r\n"
                "Content-Type: text/plain\r\n"
                "Content-Length: %d\r\n\r\n%s",
                (int) FUNC_6(VAR_8), VAR_8);
    } else {
      FUNC_0(VAR_3, "%s",
                "HTTP/1.1 404 Not Found\r\n"
                "Content-Length: 0\r\n\r\n");
    }
    FUNC_3(VAR_7);
  } else {
    FUNC_0(VAR_3, "%s",
              "HTTP/1.1 500 Server Error\r\n"
              "Content-Length: 0\r\n\r\n");
  }
}
