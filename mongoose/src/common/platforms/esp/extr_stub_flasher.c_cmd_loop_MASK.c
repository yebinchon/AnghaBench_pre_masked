
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int args ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int,int,int,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int,int,int) ;
 int FUNC_11 () ;

uint8_t FUNC_12(void) {
  uint8_t VAR_1 = 0x55;
  do {

    FUNC_2(FUNC_5(0), VAR_0);
    FUNC_0(FUNC_5(0), VAR_0);
    uint32_t VAR_2[4];
    uint32_t VAR_3 = FUNC_3(&VAR_1, 1);
    if (VAR_3 != 1) {
      continue;
    }
    uint8_t VAR_4 = 0xff;
    switch (VAR_1) {
      case 131: {
        VAR_3 = FUNC_3(VAR_2, sizeof(VAR_2));
        if (VAR_3 == 12) {
          VAR_4 = FUNC_10(VAR_2[0] , VAR_2[1] ,
                                VAR_2[2] );
        } else {
          VAR_4 = 0x41;
        }
        break;
      }
      case 133: {
        VAR_3 = FUNC_3(VAR_2, sizeof(VAR_2));
        if (VAR_3 == 16) {
          VAR_4 = FUNC_8(VAR_2[0] , VAR_2[1],
                               VAR_2[2] ,
                               VAR_2[3] );
        } else {
          VAR_4 = 0x51;
        }
        break;
      }
      case 135: {
        VAR_3 = FUNC_3(VAR_2, sizeof(VAR_2));
        if (VAR_3 == 12) {
          VAR_4 = FUNC_7(VAR_2[0] , VAR_2[1],
                                 VAR_2[2] );
        } else {
          VAR_4 = 0x61;
        }
        break;
      }
      case 132: {
        VAR_4 = FUNC_9();
        break;
      }
      case 134: {
        VAR_4 = FUNC_11();
        break;
      }
      case 137:
      case 129: {
        VAR_4 = 0;
        FUNC_4(&VAR_4, 1);
        return VAR_1;
      }
      case 136: {
        VAR_3 = FUNC_3(VAR_2, sizeof(VAR_2));
        FUNC_4(VAR_2, VAR_3);
        VAR_4 = 0;
        break;
      }
      case 130: {
        VAR_3 = FUNC_3(VAR_2, sizeof(VAR_2));
        if (VAR_3 == 4) {
          uint32_t VAR_5 = FUNC_1((uint32_t *) VAR_2[0]);
          FUNC_4(&VAR_5, sizeof(VAR_5));
          VAR_4 = 0;
        } else {
          VAR_4 = 0x91;
        }
        break;
      }
      case 128: {
        VAR_3 = FUNC_3(VAR_2, sizeof(VAR_2));
        if (VAR_3 == 8) {
          FUNC_6((uint32_t *) VAR_2[0], VAR_2[1]);
          VAR_4 = 0;
        } else {
          VAR_4 = 0xa1;
        }
        break;
      }
    }
    FUNC_4(&VAR_4, 1);
  } while (VAR_1 != 137 && VAR_1 != 129);
  return VAR_1;
}
