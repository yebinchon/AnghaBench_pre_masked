
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int len; int buf; } ;
struct mg_connection {int flags; scalar_t__ user_data; struct mbuf recv_mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct mbuf*,int ) ;
 int FUNC_3 (struct mg_connection*,int ,int ) ;
 int FUNC_4 (char*,char*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_8, int VAR_9, void *VAR_10) {
  struct mbuf *VAR_11 = &VAR_8->recv_mbuf;
  (void) VAR_10;

  if (VAR_9 == VAR_3) {
    if (VAR_8->flags & VAR_5) {
      FUNC_4("%s\n", "Error connecting to server!");
      FUNC_0(VAR_0);
    }
    FUNC_4("%s\n", "Connected to server. Type a message and press enter.");
  } else if (VAR_9 == VAR_4) {
    if (VAR_8->flags & VAR_6) {

      struct mg_connection *VAR_12 = (struct mg_connection *) VAR_8->user_data;
      FUNC_3(VAR_12, VAR_11->buf, VAR_11->len);
      FUNC_2(VAR_11, VAR_11->len);
    } else {

      FUNC_1(VAR_11->buf, VAR_11->len, 1, VAR_7);
      FUNC_2(VAR_11, VAR_11->len);
    }
  } else if (VAR_9 == VAR_2) {

    FUNC_0(VAR_1);
  }
}
