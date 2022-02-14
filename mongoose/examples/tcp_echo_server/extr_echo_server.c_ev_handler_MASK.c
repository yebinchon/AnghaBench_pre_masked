
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int len; int buf; } ;
struct mg_connection {struct mbuf recv_mbuf; } ;



 int FUNC_0 (struct mbuf*,int ) ;
 int FUNC_1 (struct mg_connection*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_0, int VAR_1, void *VAR_2) {
  struct mbuf *VAR_3 = &VAR_0->recv_mbuf;
  (void) VAR_2;

  switch (VAR_1) {
    case 128:
      FUNC_1(VAR_0, VAR_3->buf, VAR_3->len);
      FUNC_0(VAR_3, VAR_3->len);
      break;
    default:
      break;
  }
}
