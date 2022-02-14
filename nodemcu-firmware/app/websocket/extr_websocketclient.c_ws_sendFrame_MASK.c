
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int connectionState; int knownFailureCode; scalar_t__ isSecure; } ;
typedef TYPE_1__ ws_info ;
typedef int uint8_t ;
struct espconn {scalar_t__ reverse; } ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (struct espconn*) ;
 int FUNC_3 (struct espconn*) ;
 int FUNC_4 (struct espconn*,int *,int) ;
 int FUNC_5 (struct espconn*,int *,int) ;
 int FUNC_6 (char*,char const*,unsigned short) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct espconn *VAR_0, int VAR_1, const char *VAR_2, unsigned short VAR_3) {
  FUNC_0("ws_sendFrame %d %d\n", VAR_1, VAR_3);
  ws_info *VAR_4 = (ws_info *) VAR_0->reverse;

  if (VAR_4->connectionState == 4) {
    FUNC_0("already in closing state\n");
    return;
  } else if (VAR_4->connectionState != 3) {
    FUNC_0("can't send message while not in a connected state\n");
    return;
  }

  char *VAR_5 = FUNC_1(1,10 + VAR_3);
  if (VAR_5 == ((void*)0)) {
    FUNC_0("Out of memory when receiving message, disconnecting...\n");

    VAR_4->knownFailureCode = -16;
    if (VAR_4->isSecure)
      FUNC_3(VAR_0);
    else
      FUNC_2(VAR_0);
    return;
  }

  VAR_5[0] = 1 << 7;
  VAR_5[0] += VAR_1;
  VAR_5[1] = 1 << 7;
  int VAR_6;
  if (VAR_3 < 126) {
    VAR_5[1] += VAR_3;
    VAR_6 = 2;
  } else if (VAR_3 < 0x10000) {
    VAR_5[1] += 126;
    VAR_5[2] = VAR_3 >> 8;
    VAR_5[3] = VAR_3;
    VAR_6 = 4;
  } else {
    VAR_5[1] += 127;
    VAR_5[2] = VAR_3 >> 24;
    VAR_5[3] = VAR_3 >> 16;
    VAR_5[4] = VAR_3 >> 8;
    VAR_5[5] = VAR_3;
    VAR_6 = 6;
  }


  VAR_5[VAR_6] = (char) FUNC_8();
  VAR_5[VAR_6 + 1] = (char) FUNC_8();
  VAR_5[VAR_6 + 2] = (char) FUNC_8();
  VAR_5[VAR_6 + 3] = (char) FUNC_8();
  VAR_6 += 4;


  FUNC_6(VAR_5 + VAR_6, VAR_2, VAR_3);


  int VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
    VAR_5[VAR_6 + VAR_7] ^= VAR_5[VAR_6 - 4 + VAR_7 % 4];
  }
  VAR_6 += VAR_3;

  FUNC_0("b[0] = %d \n", VAR_5[0]);
  FUNC_0("b[1] = %d \n", VAR_5[1]);
  FUNC_0("b[2] = %d \n", VAR_5[2]);
  FUNC_0("b[3] = %d \n", VAR_5[3]);
  FUNC_0("b[4] = %d \n", VAR_5[4]);
  FUNC_0("b[5] = %d \n", VAR_5[5]);
  FUNC_0("b[6] = %d \n", VAR_5[6]);
  FUNC_0("b[7] = %d \n", VAR_5[7]);
  FUNC_0("b[8] = %d \n", VAR_5[8]);
  FUNC_0("b[9] = %d \n", VAR_5[9]);

  FUNC_0("sending message\n");
  if (VAR_4->isSecure)
    FUNC_4(VAR_0, (uint8_t *) VAR_5, VAR_6);
  else
    FUNC_5(VAR_0, (uint8_t *) VAR_5, VAR_6);

  FUNC_7(VAR_5);
}
