
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mg_str {scalar_t__ len; scalar_t__ p; } ;
struct mg_connection {int flags; } ;
struct mbuf {char* buf; scalar_t__ len; } ;
typedef int nonce ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (unsigned char*,int,char*) ;
 int FUNC_3 (struct mg_str const,struct mg_str const,struct mbuf*) ;
 int FUNC_4 (struct mg_connection*,char*,...) ;
 int FUNC_5 () ;

void FUNC_6(struct mg_connection *VAR_1,
                                   const struct mg_str VAR_2,
                                   const struct mg_str VAR_3,
                                   const struct mg_str VAR_4,
                                   const struct mg_str VAR_5,
                                   const struct mg_str VAR_6,
                                   const struct mg_str VAR_7) {
  struct mbuf VAR_8;
  char VAR_9[25];
  uint32_t VAR_10[4];
  VAR_10[0] = FUNC_5();
  VAR_10[1] = FUNC_5();
  VAR_10[2] = FUNC_5();
  VAR_10[3] = FUNC_5();
  FUNC_2((unsigned char *) &VAR_10, sizeof(VAR_10), VAR_9);

  FUNC_1(&VAR_8, 0);
  if (VAR_6.len > 0) {
    FUNC_3(VAR_6, VAR_7, &VAR_8);
  }







  FUNC_4(VAR_1,
            "GET %.*s HTTP/1.1\r\n"
            "Upgrade: websocket\r\n"
            "Connection: Upgrade\r\n"
            "%.*s"
            "Sec-WebSocket-Version: 13\r\n"
            "Sec-WebSocket-Key: %s\r\n",
            (int) VAR_2.len, VAR_2.p, (int) VAR_8.len,
            (VAR_8.buf == ((void*)0) ? "" : VAR_8.buf), VAR_9);


  if (VAR_3.len > 0) {
    int VAR_11 = (int) (VAR_2.p - VAR_3.p);
    FUNC_4(VAR_1, "Host: %.*s\r\n", VAR_11, VAR_3.p);
  }
  if (VAR_4.len > 0) {
    FUNC_4(VAR_1, "Sec-WebSocket-Protocol: %.*s\r\n", (int) VAR_4.len,
              VAR_4.p);
  }
  if (VAR_5.len > 0) {
    FUNC_4(VAR_1, "%.*s", (int) VAR_5.len, VAR_5.p);
  }
  FUNC_4(VAR_1, "\r\n");

  VAR_1->flags |= VAR_0;

  FUNC_0(&VAR_8);
}
