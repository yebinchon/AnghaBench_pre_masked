
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;


 int FUNC_0 (struct mg_connection*,char*,char const*,unsigned long) ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(struct mg_connection *VAR_0,
                                      const char *VAR_1) {
  FUNC_0(VAR_0,
            "HTTP/1.1 401 Unauthorized\r\n"
            "WWW-Authenticate: Digest qop=\"auth\", "
            "realm=\"%s\", nonce=\"%lx\"\r\n"
            "Content-Length: 0\r\n\r\n",
            VAR_1, (unsigned long) FUNC_1());
}
