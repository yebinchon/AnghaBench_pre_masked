
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int wBlockNum; int wLength; int* buf; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (scalar_t__,int*,int) ;
 scalar_t__ FUNC_3 (int*) ;

__attribute__((used)) static int FUNC_4(void) {
    int VAR_4 = -1;
    if (VAR_3.wBlockNum == 0) {

        if (VAR_3.wLength >= 1 && VAR_3.buf[0] == 0x41) {
            if (VAR_3.wLength == 1) {

                VAR_4 = FUNC_0();
            } else if (VAR_3.wLength == 5) {

                uint32_t VAR_5;
                VAR_4 = FUNC_1(FUNC_3(&VAR_3.buf[1]), &VAR_5);
            }
        } else if (VAR_3.wLength >= 1 && VAR_3.buf[0] == 0x21) {
            if (VAR_3.wLength == 5) {

                VAR_3.addr = FUNC_3(&VAR_3.buf[1]);
                VAR_4 = 0;
            }
        }
    } else if (VAR_3.wBlockNum > 1) {

        uint32_t VAR_6 = (VAR_3.wBlockNum - 2) * VAR_2 + VAR_3.addr;
        VAR_4 = FUNC_2(VAR_6, VAR_3.buf, VAR_3.wLength);
    }
    if (VAR_4 == 0) {
        return VAR_0;
    } else {
        return VAR_1;
    }
}
