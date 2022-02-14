
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int buf; } ;
struct mg_connection {TYPE_1__ recv_mbuf; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct mg_connection*,int ,int ) ;

void FUNC_2(struct mg_connection *VAR_0, struct mg_connection *VAR_1) {
  FUNC_1(VAR_1, VAR_0->recv_mbuf.buf, VAR_0->recv_mbuf.len);
  FUNC_0(&VAR_0->recv_mbuf, VAR_0->recv_mbuf.len);
}
