
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int len; int buf; } ;
struct mg_connection {int flags; int mgr; struct mbuf recv_mbuf; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mbuf*,int ) ;
 struct mg_connection* FUNC_1 (int ,struct mg_connection*) ;
 int FUNC_2 (struct mg_connection*,int ,int ) ;
 int FUNC_3 (void*,char*,int,int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_5, int VAR_6, void *VAR_7) {
  (void) VAR_7;
  if (VAR_6 == VAR_1) {

    struct mbuf *VAR_8 = &VAR_5->recv_mbuf;
    struct mg_connection *VAR_9;

    for (VAR_9 = FUNC_1(VAR_5->mgr, ((void*)0)); VAR_9 != ((void*)0); VAR_9 = FUNC_1(VAR_5->mgr, VAR_9)) {
      if (!(VAR_9->flags & VAR_2)) continue;
      FUNC_2(VAR_9, VAR_8->buf, VAR_8->len);
    }
    FUNC_0(VAR_8, VAR_8->len);
  } else if (VAR_6 == VAR_0) {
    char VAR_10[32];
    FUNC_3(VAR_7, VAR_10, sizeof(VAR_10),
                        VAR_3 | VAR_4);
    FUNC_4("New client connected from %s\n", VAR_10);
  }
}
