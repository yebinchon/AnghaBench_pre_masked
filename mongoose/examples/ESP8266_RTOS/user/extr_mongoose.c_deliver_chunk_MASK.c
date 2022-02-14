
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct mg_connection {int flags; TYPE_2__ recv_mbuf; int user_data; int handler; } ;
struct TYPE_3__ {int len; } ;
struct http_message {TYPE_1__ body; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mg_connection*,int ,int ,int ,struct http_message*) ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_2, struct http_message *VAR_3,
                          int VAR_4) {

  VAR_3->body.len = VAR_2->recv_mbuf.len - VAR_4;
  VAR_2->flags &= ~VAR_1;
  FUNC_0(VAR_2, VAR_2->handler, VAR_2->user_data, VAR_0, VAR_3);

  if (VAR_2->flags & VAR_1) VAR_2->recv_mbuf.len = VAR_4;
}
