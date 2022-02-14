
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_res {int buf_srv; } ;
struct mbuf {char* buf; int len; } ;
struct mg_connection {int flags; struct mbuf recv_mbuf; TYPE_1__* mgr; } ;
struct TYPE_2__ {scalar_t__ user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mbuf*,int) ;
 int FUNC_2 (struct mg_connection*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_6, int VAR_7, void *VAR_8) {
  struct udp_res *VAR_9 = (struct udp_res *) VAR_6->mgr->user_data;
  struct mbuf *VAR_10 = &VAR_6->recv_mbuf;
  (void) VAR_8;

  if (VAR_6->flags & VAR_4) {
    if (VAR_7 != VAR_2 && VAR_7 != VAR_1) {
      FUNC_0(&VAR_9->buf_srv, "BUG", 3);
    }
    return;
  }

  if (VAR_7 == VAR_0) {
    FUNC_0(&VAR_9->buf_srv, "ACCEPT", 6);
  } else if (VAR_7 == VAR_3) {
    FUNC_0(&VAR_9->buf_srv, (VAR_6->flags & VAR_5 ? "+" : "-"), 1);
    FUNC_0(&VAR_9->buf_srv, " RECV ", 6);
    FUNC_0(&VAR_9->buf_srv, VAR_10->buf, VAR_10->len);
    FUNC_2(VAR_6, VAR_10->buf, VAR_10->len);
    FUNC_1(VAR_10, VAR_10->len);
  } else if (VAR_7 == VAR_1) {
    FUNC_0(&VAR_9->buf_srv, " CLOSE", 6);
  }
}
