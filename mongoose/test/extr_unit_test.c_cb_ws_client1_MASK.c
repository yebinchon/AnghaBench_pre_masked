
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct websocket_message {int data; scalar_t__ size; int flags; } ;
struct mg_connection {scalar_t__ user_data; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct mbuf*,char*,int) ;
 int FUNC_2 (char**,int ,char*,char*,int ,int,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_5, int VAR_6, void *VAR_7) {
  struct websocket_message *VAR_8 = (struct websocket_message *) VAR_7;

  if (VAR_6 == VAR_2 || VAR_6 == VAR_1) {
    char *VAR_9 = ((void*)0);
    int VAR_10;
    VAR_10 =
        FUNC_2(&VAR_9, 0, "%s%.2x:[%.*s]",
                    (VAR_6 == VAR_1 ? "CONTROL:" : ""),
                    VAR_8->flags, (int) VAR_8->size, VAR_8->data);
    FUNC_1((struct mbuf *) VAR_5->user_data, VAR_9, VAR_10);
    FUNC_0(VAR_9);
  } else if (VAR_6 == VAR_0) {
    VAR_4 = 0;
  } else if (VAR_6 == VAR_3) {
    VAR_4 = 1;
  }
}
