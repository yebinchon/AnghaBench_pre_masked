
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ len; int p; } ;
struct mg_connection {int dummy; } ;


 int FUNC_0 (struct mg_connection*,char*,int,...) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

void FUNC_2(struct mg_connection *VAR_1, int VAR_2,
                             const struct mg_str VAR_3) {
  FUNC_0(VAR_1, "HTTP/1.1 %d %s\r\n", VAR_2,
            FUNC_1(VAR_2));

  FUNC_0(VAR_1, "Server: %s\r\n", VAR_0);

  if (VAR_3.len > 0) {
    FUNC_0(VAR_1, "%.*s\r\n", (int) VAR_3.len, VAR_3.p);
  }
}
