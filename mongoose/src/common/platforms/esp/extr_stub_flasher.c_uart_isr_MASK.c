
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct data_buf {scalar_t__ flags; } ;
struct TYPE_2__ {int state; size_t bwi; int ps; struct data_buf* bufs; } ;





 void* FUNC_0 (int ) ;


 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 TYPE_1__ VAR_0 ;

void FUNC_10(void *VAR_1) {
  uint32_t VAR_2 = FUNC_0(FUNC_5(0));
  uint8_t VAR_3, VAR_4;
  while ((VAR_3 = FUNC_0(FUNC_6(0))) > 0) {
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
      uint8_t VAR_5 = FUNC_0(FUNC_2(0));
      switch (VAR_0.state) {
        case 128: {
          if (VAR_5 == 0xc0) {
            VAR_0.state = 130;
            VAR_0.ps = 0;
          }
          break;
        }
        case 130:
        case 132: {
          struct data_buf *VAR_6 = &VAR_0.bufs[VAR_0.bwi];
          if (VAR_5 == 0xdb) {
            VAR_0.state = 129;
          } else if (VAR_5 == 0xc0) {
            FUNC_9();
            if (VAR_0.ps == 0) {

              VAR_0.state = 131;
              FUNC_1(FUNC_4(0), 0);
              goto out;
            } else {
              VAR_0.state = 128;
            }
          } else {
            if (VAR_0.state == 130) {
              VAR_6->flags = VAR_5;
              VAR_0.state = 132;
            } else {
              FUNC_8(VAR_5);
            }
          }
          break;
        }
        case 129: {
          if (VAR_5 == 0xdc) {
            VAR_5 = 0xc0;
          } else if (VAR_5 == 0xdd) {
            VAR_5 = 0xdb;
          } else {
            VAR_0.state = 131;
            FUNC_1(FUNC_4(0), 0);
            goto out;
          }
          FUNC_8(VAR_5);
          VAR_0.state = 132;
          break;
        }
        case 131: {
          goto out;
        }
      }
    }
  }
out:
  FUNC_7(FUNC_3(0), VAR_2);
  (void) VAR_1;
}
