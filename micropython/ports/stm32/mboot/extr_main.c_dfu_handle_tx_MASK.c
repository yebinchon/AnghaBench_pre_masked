
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int cmd; int status; scalar_t__ addr; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (scalar_t__,int,int*) ;

__attribute__((used)) static int FUNC_1(int VAR_6, int VAR_7, int VAR_8, uint8_t *VAR_9, int VAR_10) {
    if (VAR_6 == VAR_4) {
        if (VAR_7 >= 2) {
            VAR_5.cmd = 128;
            uint32_t VAR_11 = (VAR_7 - 2) * VAR_10 + VAR_5.addr;
            FUNC_0(VAR_11, VAR_8, VAR_9);
            return VAR_8;
        }
    } else if (VAR_6 == VAR_0 && VAR_8 == 6) {

        switch (VAR_5.cmd) {
            case 129:
                break;
            case 130:
                VAR_5.status = VAR_2;
                break;
            case 128:
                VAR_5.status = VAR_3;
                break;
            case 131:
                VAR_5.status = VAR_1;
                break;
        }
        VAR_9[0] = 0;
        VAR_9[1] = VAR_5.cmd;
        VAR_9[2] = 0;
        VAR_9[3] = 0;
        VAR_9[4] = VAR_5.status;
        VAR_9[5] = 0;
        return 6;
    }
    return -1;
}
