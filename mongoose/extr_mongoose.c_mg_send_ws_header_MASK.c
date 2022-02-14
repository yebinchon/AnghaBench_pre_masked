
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int tmp ;
struct ws_mask_ctx {unsigned char mask; scalar_t__ pos; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct mg_connection {TYPE_1__ send_mbuf; int * listener; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,int *,int) ;
 int FUNC_3 (struct mg_connection*,unsigned char*,int) ;
 unsigned char FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_3, int VAR_4, size_t VAR_5,
                              struct ws_mask_ctx *VAR_6) {
  int VAR_7;
  unsigned char VAR_8[10];

  VAR_8[0] =
      (VAR_4 & VAR_2 ? 0x0 : VAR_0) | (VAR_4 & VAR_1);
  if (VAR_5 < 126) {
    VAR_8[1] = (unsigned char) VAR_5;
    VAR_7 = 2;
  } else if (VAR_5 < 65535) {
    uint16_t VAR_9 = FUNC_1((uint16_t) VAR_5);
    VAR_8[1] = 126;
    FUNC_2(&VAR_8[2], &VAR_9, sizeof(VAR_9));
    VAR_7 = 4;
  } else {
    uint32_t VAR_10;
    VAR_8[1] = 127;
    VAR_10 = FUNC_0((uint32_t)((uint64_t) VAR_5 >> 32));
    FUNC_2(&VAR_8[2], &VAR_10, sizeof(VAR_10));
    VAR_10 = FUNC_0((uint32_t)(VAR_5 & 0xffffffff));
    FUNC_2(&VAR_8[6], &VAR_10, sizeof(VAR_10));
    VAR_7 = 10;
  }


  if (VAR_3->listener == ((void*)0)) {
    VAR_8[1] |= 1 << 7;
    FUNC_3(VAR_3, VAR_8, VAR_7);
    VAR_6->mask = FUNC_4();
    FUNC_3(VAR_3, &VAR_6->mask, sizeof(VAR_6->mask));
    VAR_6->pos = VAR_3->send_mbuf.len;
  } else {
    FUNC_3(VAR_3, VAR_8, VAR_7);
    VAR_6->pos = 0;
  }
}
