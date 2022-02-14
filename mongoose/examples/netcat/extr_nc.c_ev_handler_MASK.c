
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct websocket_message {int size; int data; } ;
struct TYPE_2__ {int len; int buf; } ;
struct mg_connection {TYPE_1__ recv_mbuf; int mgr; } ;







 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_4, int VAR_5, void *VAR_6) {
  switch (VAR_5) {
    case 132:
    case 130:
      FUNC_2(VAR_2, VAR_4->mgr);
      break;

    case 128: {
      struct websocket_message *VAR_7 = (struct websocket_message *) VAR_6;
      FUNC_0(VAR_7->data, 1, VAR_7->size, VAR_3);
      break;
    }

    case 131:
      VAR_1 = 1;
      break;

    case 129:
      if (!VAR_0) {
        FUNC_0(VAR_4->recv_mbuf.buf, 1, VAR_4->recv_mbuf.len, VAR_3);
        FUNC_1(&VAR_4->recv_mbuf, VAR_4->recv_mbuf.len);
      }
      break;

    default:
      break;
  }
}
