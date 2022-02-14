
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* frameBuffer; unsigned short frameBufferLen; int knownFailureCode; char* payloadBuffer; int payloadOriginalOpCode; int payloadBufferLen; int connectionState; scalar_t__ isSecure; int (* onReceive ) (TYPE_1__*,int,char*,int) ;int timeoutTimer; scalar_t__ unhealthyPoints; } ;
typedef TYPE_1__ ws_info ;
typedef int uint64_t ;
struct espconn {scalar_t__ reverse; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (struct espconn*) ;
 int FUNC_3 (struct espconn*,int ) ;
 int FUNC_4 (struct espconn*) ;
 int FUNC_5 (char*,char*,unsigned short) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (char*,unsigned short) ;
 int FUNC_10 (TYPE_1__*,int,char*,int) ;
 int VAR_5 ;
 int FUNC_11 (struct espconn*,int,char const*,unsigned short) ;

__attribute__((used)) static void FUNC_12(void *VAR_6, char *VAR_7, unsigned short VAR_8) {
  FUNC_0("ws_receiveCallback %d \n", VAR_8);
  struct espconn *VAR_9 = (struct espconn *) VAR_6;
  ws_info *VAR_10 = (ws_info *) VAR_9->reverse;

  VAR_10->unhealthyPoints = 0;
  FUNC_8(&VAR_10->timeoutTimer);
  FUNC_7(&VAR_10->timeoutTimer, VAR_4, 1);


  char *VAR_11 = VAR_7;
  if (VAR_10->frameBuffer != ((void*)0)) {
    FUNC_0("Appending new frameBuffer to old one \n");

    VAR_10->frameBuffer = FUNC_9(VAR_10->frameBuffer, VAR_10->frameBufferLen + VAR_8);
    if (VAR_10->frameBuffer == ((void*)0)) {
      FUNC_0("Failed to allocate new framebuffer, disconnecting...\n");

      VAR_10->knownFailureCode = -8;
      if (VAR_10->isSecure)
        FUNC_4(VAR_9);
      else
        FUNC_2(VAR_9);
      return;
    }
    FUNC_5(VAR_10->frameBuffer + VAR_10->frameBufferLen, VAR_11, VAR_8);

    VAR_10->frameBufferLen += VAR_8;

    VAR_8 = VAR_10->frameBufferLen;
    VAR_11 = VAR_10->frameBuffer;
    FUNC_0("New frameBufferLen: %d\n", VAR_8);
  }

  while (VAR_11 != ((void*)0)) {
    FUNC_0("b[0] = %d \n", VAR_11[0]);
    FUNC_0("b[1] = %d \n", VAR_11[1]);
    FUNC_0("b[2] = %d \n", VAR_11[2]);
    FUNC_0("b[3] = %d \n", VAR_11[3]);
    FUNC_0("b[4] = %d \n", VAR_11[4]);
    FUNC_0("b[5] = %d \n", VAR_11[5]);
    FUNC_0("b[6] = %d \n", VAR_11[6]);
    FUNC_0("b[7] = %d \n", VAR_11[7]);

    int VAR_12 = VAR_11[0] & 0x80 ? 1 : 0;
    int VAR_13 = VAR_11[0] & 0x0f;
    int VAR_14 = VAR_11[1] & 0x80 ? 1 : 0;
    uint64_t VAR_15 = VAR_11[1] & 0x7f;
    int VAR_16 = 2;
    if (VAR_15 == 126) {
      VAR_15 = (VAR_11[2] << 8) + VAR_11[3];
      VAR_16 = 4;
    } else if (VAR_15 == 127) {
      VAR_15 = (VAR_11[2] << 24) + (VAR_11[3] << 16) + (VAR_11[4] << 8) + VAR_11[5];
      VAR_16 = 6;
    }

    if (VAR_14) {
      int VAR_17 = VAR_16;
      VAR_16 += 4;

      int VAR_18;
      for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
        VAR_11[VAR_16 + VAR_18] ^= VAR_11[VAR_17 + VAR_18 % 4];
      }
    }

    if (VAR_15 > VAR_8 - VAR_16) {
      FUNC_0("INCOMPLETE Frame \n");
      if (VAR_10->frameBuffer == ((void*)0)) {
        FUNC_0("Allocing new frameBuffer \n");
        VAR_10->frameBuffer = FUNC_1(1,VAR_8);
        if (VAR_10->frameBuffer == ((void*)0)) {
          FUNC_0("Failed to allocate framebuffer, disconnecting... \n");

          VAR_10->knownFailureCode = -9;
          if (VAR_10->isSecure)
            FUNC_4(VAR_9);
          else
            FUNC_2(VAR_9);
          return;
        }
        FUNC_5(VAR_10->frameBuffer, VAR_11, VAR_8);
        VAR_10->frameBufferLen = VAR_8;
      }
      break;
    }

    if (!VAR_12) {
      FUNC_0("PARTIAL frame! Should concat payload and later restore opcode\n");
      if(VAR_10->payloadBuffer == ((void*)0)) {
        FUNC_0("Allocing new payloadBuffer \n");
        VAR_10->payloadBuffer = FUNC_1(1,VAR_15);
        if (VAR_10->payloadBuffer == ((void*)0)) {
          FUNC_0("Failed to allocate payloadBuffer, disconnecting...\n");

          VAR_10->knownFailureCode = -10;
          if (VAR_10->isSecure)
            FUNC_4(VAR_9);
          else
            FUNC_2(VAR_9);
          return;
        }
        FUNC_5(VAR_10->payloadBuffer, VAR_11 + VAR_16, VAR_15);
        VAR_10->frameBufferLen = VAR_15;
        VAR_10->payloadOriginalOpCode = VAR_13;
      } else {
        FUNC_0("Appending new payloadBuffer to old one \n");
        VAR_10->payloadBuffer = FUNC_9(VAR_10->payloadBuffer, VAR_10->payloadBufferLen + VAR_15);
        if (VAR_10->payloadBuffer == ((void*)0)) {
          FUNC_0("Failed to allocate new framebuffer, disconnecting...\n");

          VAR_10->knownFailureCode = -11;
          if (VAR_10->isSecure)
            FUNC_4(VAR_9);
          else
            FUNC_2(VAR_9);
          return;
        }
        FUNC_5(VAR_10->payloadBuffer + VAR_10->payloadBufferLen, VAR_11 + VAR_16, VAR_15);

        VAR_10->payloadBufferLen += VAR_15;
      }
    } else {
      char *VAR_19;
      if (VAR_13 == VAR_1) {
        FUNC_0("restoring original opcode\n");
        if (VAR_10->payloadBuffer == ((void*)0)) {
          FUNC_0("Got FIN continuation frame but didn't receive any beforehand, disconnecting...\n");

          VAR_10->knownFailureCode = -15;
          if (VAR_10->isSecure)
            FUNC_4(VAR_9);
          else
            FUNC_2(VAR_9);
          return;
        }

        VAR_19 = FUNC_1(1,VAR_10->payloadBufferLen + VAR_15);

        if (VAR_19 == ((void*)0)) {
          FUNC_0("Failed to allocate new framebuffer, disconnecting...\n");

          VAR_10->knownFailureCode = -12;
          if (VAR_10->isSecure)
            FUNC_4(VAR_9);
          else
            FUNC_2(VAR_9);
          return;
        }
        FUNC_5(VAR_19, VAR_10->payloadBuffer, VAR_10->payloadBufferLen);
        FUNC_5(VAR_19 + VAR_10->payloadBufferLen, VAR_11 + VAR_16, VAR_15);

        FUNC_6(VAR_10->payloadBuffer);
        VAR_10->payloadBuffer = ((void*)0);

        VAR_15 += VAR_10->payloadBufferLen;
        VAR_10->payloadBufferLen = 0;

        VAR_13 = VAR_10->payloadOriginalOpCode;
        VAR_10->payloadOriginalOpCode = 0;
      } else {
        int VAR_20 = 0;

        if (VAR_13 == VAR_0 && VAR_15 > 0) {
          unsigned int VAR_21 = VAR_11[VAR_16] << (8 + VAR_11[VAR_16 + 1]);
          FUNC_0("Closing due to: %d\n", VAR_21);
          VAR_20 += 2;
        }

        VAR_19 = FUNC_1(1,VAR_15 - VAR_20 + 1);
        if (VAR_19 == ((void*)0)) {
          FUNC_0("Failed to allocate payload, disconnecting...\n");

          VAR_10->knownFailureCode = -13;
          if (VAR_10->isSecure)
            FUNC_4(VAR_9);
          else
            FUNC_2(VAR_9);
          return;
        }

        FUNC_5(VAR_19, VAR_11 + VAR_16 + VAR_20, VAR_15 - VAR_20);
        VAR_19[VAR_15 - VAR_20] = '\0';
      }

      FUNC_0("isFin %d \n", VAR_12);
      FUNC_0("opCode %d \n", VAR_13);
      FUNC_0("hasMask %d \n", VAR_14);
      FUNC_0("payloadLength %d \n", VAR_15);
      FUNC_0("len %d \n", VAR_8);
      FUNC_0("bufOffset %d \n", VAR_16);

      if (VAR_13 == VAR_0) {
        FUNC_0("Closing message: %s\n", VAR_19);

        FUNC_3(VAR_9, VAR_5);
        FUNC_11(VAR_9, VAR_0, (const char *) (VAR_11 + VAR_16), (unsigned short) VAR_15);
        VAR_10->connectionState = 4;
      } else if (VAR_13 == VAR_2) {
        FUNC_11(VAR_9, VAR_3, (const char *) (VAR_11 + VAR_16), (unsigned short) VAR_15);
      } else if (VAR_13 == VAR_3) {

      } else {
        if (VAR_10->onReceive) VAR_10->onReceive(VAR_10, VAR_15, VAR_19, VAR_13);
      }
      FUNC_6(VAR_19);
    }

    VAR_16 += VAR_15;
    FUNC_0("bufOffset %d \n", VAR_16);
    if (VAR_16 == VAR_8) {
      VAR_11 = ((void*)0);
      if (VAR_10->frameBuffer != ((void*)0)) {
        FUNC_6(VAR_10->frameBuffer);
        VAR_10->frameBuffer = ((void*)0);
        VAR_10->frameBufferLen = 0;
      }
    } else {
      VAR_8 -= VAR_16;
      VAR_11 += VAR_16;
      if (VAR_10->frameBuffer != ((void*)0)) {
        FUNC_0("Reallocing frameBuffer to remove consumed frame\n");

        VAR_10->frameBuffer = FUNC_9(VAR_10->frameBuffer, VAR_10->frameBufferLen + VAR_8);
        if (VAR_10->frameBuffer == ((void*)0)) {
          FUNC_0("Failed to allocate new frame buffer, disconnecting...\n");

          VAR_10->knownFailureCode = -14;
          if (VAR_10->isSecure)
            FUNC_4(VAR_9);
          else
            FUNC_2(VAR_9);
          return;
        }
        FUNC_5(VAR_10->frameBuffer + VAR_10->frameBufferLen, VAR_11, VAR_8);

        VAR_10->frameBufferLen += VAR_8;
        VAR_11 = VAR_10->frameBuffer;
      }
    }
  }
}
