
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ len; int p; } ;
struct mg_connection {int dummy; } ;
typedef int bhead ;
typedef int bbody ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,int,char*,int,int ,...) ;
 int FUNC_2 (struct mg_connection*,char*,int) ;
 int FUNC_3 (struct mg_connection*,int,char*) ;

void FUNC_4(struct mg_connection *VAR_0, int VAR_1,
                           const struct mg_str VAR_2,
                           const struct mg_str VAR_3) {
  char VAR_4[100], *VAR_5 = VAR_4;
  int VAR_6 = FUNC_1(&VAR_5, sizeof(VAR_4),
                       "<p>Moved <a href='%.*s'>here</a>.\r\n",
                       (int) VAR_2.len, VAR_2.p);
  char VAR_7[150], *VAR_8 = VAR_7;
  FUNC_1(&VAR_8, sizeof(VAR_7),
              "Location: %.*s\r\n"
              "Content-Type: text/html\r\n"
              "Content-Length: %d\r\n"
              "Cache-Control: no-cache\r\n"
              "%.*s%s",
              (int) VAR_2.len, VAR_2.p, VAR_6, (int) VAR_3.len,
              VAR_3.p, (VAR_3.len > 0 ? "\r\n" : ""));
  FUNC_3(VAR_0, VAR_1, VAR_8);
  if (VAR_8 != VAR_7) FUNC_0(VAR_8);
  FUNC_2(VAR_0, VAR_5, VAR_6);
  if (VAR_5 != VAR_4) FUNC_0(VAR_5);
}
