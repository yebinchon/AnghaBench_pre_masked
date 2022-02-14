
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct simple_data {int data_rcvd; int fail; int to_send; } ;
struct TYPE_2__ {scalar_t__ len; int buf; } ;
struct mg_connection {TYPE_1__ recv_mbuf; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (char*,char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct simple_data *VAR_0, struct mg_connection *VAR_1,
                    void *VAR_2) {
  if (*((int *) VAR_2) != (int) VAR_1->recv_mbuf.len) {
    char VAR_3[100];
    FUNC_1(VAR_3, "(num recv wrong: %d vs %d)", *((int *) VAR_2),
            (int) FUNC_3(VAR_0->to_send));
    FUNC_2(VAR_0->fail, VAR_3);
    return;
  }
  FUNC_4(VAR_0->data_rcvd, VAR_1->recv_mbuf.buf, VAR_1->recv_mbuf.len);
  FUNC_0(&VAR_1->recv_mbuf, VAR_1->recv_mbuf.len);
}
