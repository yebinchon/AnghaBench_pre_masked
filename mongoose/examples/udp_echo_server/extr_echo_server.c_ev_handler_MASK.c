
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int len; int buf; } ;
struct mg_connection {int flags; struct mbuf recv_mbuf; } ;



 int VAR_0 ;
 int FUNC_0 (struct mbuf*,int ) ;
 int FUNC_1 (struct mg_connection*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct mbuf *VAR_4 = &VAR_1->recv_mbuf;
  (void) VAR_3;
  switch (VAR_2) {
    case 128:
      FUNC_1(VAR_1, VAR_4->buf, VAR_4->len);
      FUNC_0(VAR_4, VAR_4->len);






      VAR_1->flags |= VAR_0;
      break;
    default:
      break;
  }
}
