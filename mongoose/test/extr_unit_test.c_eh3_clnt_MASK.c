
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_res {int buf_clnt; } ;
struct mbuf {char* buf; int len; } ;
struct mg_connection {int flags; struct mbuf recv_mbuf; TYPE_1__* mgr; } ;
struct TYPE_2__ {scalar_t__ user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mbuf*,int) ;
 int FUNC_2 (struct mg_connection*,char*,char*) ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_4, int VAR_5, void *VAR_6) {
  struct udp_res *VAR_7 = (struct udp_res *) VAR_4->mgr->user_data;
  struct mbuf *VAR_8 = &VAR_4->recv_mbuf;
  (void) VAR_6;

  if (VAR_5 == VAR_1) {
    FUNC_0(&VAR_7->buf_clnt, "CONNECT", 7);
    FUNC_2(VAR_4, "%s", "boo!");
  } else if (VAR_5 == VAR_2) {
    FUNC_0(&VAR_7->buf_clnt, " RECV ", 6);
    FUNC_0(&VAR_7->buf_clnt, VAR_8->buf, VAR_8->len);
    FUNC_1(VAR_8, VAR_8->len);
    VAR_4->flags |= VAR_3;
  } else if (VAR_5 == VAR_0) {
    FUNC_0(&VAR_7->buf_clnt, " CLOSE", 6);
  }
}
