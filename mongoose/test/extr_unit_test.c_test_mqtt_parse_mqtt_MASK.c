
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; } ;
struct mg_connection {int* user_data; int flags; TYPE_1__ recv_mbuf; int (* proto_handler ) (struct mg_connection*,int ,int*) ;TYPE_1__ send_mbuf; int handler; } ;
typedef int msg ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mg_connection* FUNC_2 () ;
 int FUNC_3 (struct mg_connection*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char,int) ;
 int FUNC_12 (struct mg_connection*,int ) ;
 int FUNC_13 (struct mg_connection*,char*,int ,int ,char*,int) ;
 int FUNC_14 (struct mg_connection*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (struct mg_connection*,int ,int*) ;
 int FUNC_16 (struct mg_connection*,int ,int*) ;
 int FUNC_17 (struct mg_connection*,int ,int*) ;
 int FUNC_18 (struct mg_connection*,int ,int*) ;
 int FUNC_19 (struct mg_connection*,int ,int*) ;
 int FUNC_20 (struct mg_connection*,int ,int*) ;
 int FUNC_21 (struct mg_connection*,int ,int*) ;

__attribute__((used)) static const char *FUNC_22(void) {
  struct mg_connection *VAR_7 = FUNC_2();
  char VAR_8[] = {(char) (VAR_3 << 4), 2, 1, 1};
  char *VAR_9;
  int VAR_10 = 0;
  int VAR_11 = sizeof(VAR_8), VAR_12, VAR_13;

  VAR_7->user_data = &VAR_10;
  VAR_7->handler = VAR_4;
  FUNC_14(VAR_7);

  FUNC_6(&VAR_7->recv_mbuf, VAR_8, VAR_11);
  VAR_7->proto_handler(VAR_7, VAR_0, &VAR_11);

  FUNC_1(VAR_10, 1);
  FUNC_7(&VAR_7->recv_mbuf);


  VAR_12 = 2 + 6 + VAR_5;
  VAR_9 = (char *) FUNC_5(512);
  VAR_9[0] = (char) (VAR_2 << 4);
  VAR_9[1] = (VAR_12 & 0x7f) | 0x80;
  VAR_9[2] = VAR_12 >> 7;
  FUNC_10(&VAR_9[3], "\0\006/topic", 8);
  FUNC_11(&VAR_9[11], 'A', VAR_5);

  VAR_11 = 3 + VAR_12;
  FUNC_6(&VAR_7->recv_mbuf, VAR_9, VAR_11);


  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
    VAR_10 = 123;
    VAR_7->recv_mbuf.len = VAR_13;
    VAR_7->proto_handler(VAR_7, VAR_0, &VAR_13);
    FUNC_1((int) VAR_7->recv_mbuf.len, VAR_13);
    FUNC_1(VAR_10, 123);
  }

  VAR_7->recv_mbuf.len = VAR_11;
  VAR_7->proto_handler(VAR_7, VAR_0, &VAR_11);
  FUNC_1(VAR_10, 2);
  FUNC_7(&VAR_7->recv_mbuf);
  FUNC_4(VAR_9);


  VAR_12 = 8 + VAR_6;
  VAR_9 = (char *) FUNC_5(20100);
  VAR_9[0] = (char) (VAR_2 << 4);
  VAR_9[1] = (VAR_12 & 127) | 0x80;
  VAR_9[2] = ((VAR_12 >> 7) & 127) | 0x80;
  VAR_9[3] = (VAR_12 >> 14);
  FUNC_10(&VAR_9[4], "\0\006/topic", 8);
  FUNC_11(&VAR_9[12], 'A', VAR_6);

  VAR_11 = 4 + VAR_12;
  FUNC_6(&VAR_7->recv_mbuf, VAR_9, VAR_11);
  VAR_7->proto_handler(VAR_7, VAR_0, &VAR_11);

  FUNC_1(VAR_10, 3);
  FUNC_9(&VAR_7->recv_mbuf, VAR_7->recv_mbuf.len);



  VAR_9[0] = (char) (VAR_2 << 4);
  VAR_9[1] = 0xff;
  VAR_9[2] = 0xff;
  VAR_9[3] = 0xff;
  VAR_9[4] = 0xff;
  VAR_9[5] = 0xff;
  FUNC_6(&VAR_7->recv_mbuf, VAR_9, 10);
  VAR_7->proto_handler(VAR_7, VAR_0, &VAR_11);
  FUNC_0(VAR_7->flags & VAR_1);

  FUNC_7(&VAR_7->recv_mbuf);
  FUNC_4(VAR_9);


  VAR_9 = (char *) FUNC_5(VAR_6);
  FUNC_11(VAR_9, 'A', VAR_6);
  FUNC_13(VAR_7, "/topic", 0, 0, VAR_9, VAR_6);
  VAR_7->recv_mbuf = VAR_7->send_mbuf;
  FUNC_8(&VAR_7->send_mbuf, 0);
  VAR_11 = VAR_7->recv_mbuf.len;
  VAR_7->proto_handler(VAR_7, VAR_0, &VAR_11);

  FUNC_1(VAR_10, 3);
  FUNC_7(&VAR_7->recv_mbuf);
  FUNC_4(VAR_9);


  FUNC_12(VAR_7, 0);
  VAR_7->recv_mbuf = VAR_7->send_mbuf;
  FUNC_8(&VAR_7->send_mbuf, 0);
  VAR_11 = 4;
  VAR_7->proto_handler(VAR_7, VAR_0, &VAR_11);

  FUNC_1(VAR_10, 4);
  FUNC_7(&VAR_7->recv_mbuf);

  FUNC_3(VAR_7);
  return ((void*)0);
}
