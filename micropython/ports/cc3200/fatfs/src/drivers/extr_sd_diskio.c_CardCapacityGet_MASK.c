
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int usRCA; unsigned long ulBlockSize; unsigned long ulNofBlock; } ;
typedef TYPE_1__ DiskInfo_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned long*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_2(DiskInfo_t *VAR_3) {
    unsigned long VAR_4;
    unsigned long VAR_5[4];
    unsigned long VAR_6;
    unsigned long VAR_7;
    unsigned long VAR_8;
    unsigned long VAR_9;


    VAR_4 = FUNC_0(VAR_0, (VAR_3->usRCA << 16));

    if(VAR_4 == 0) {

        FUNC_1(VAR_1,VAR_5);






        if(VAR_5[3] >> 30) {
            VAR_6 = VAR_2 * 1024;
            VAR_7 = (VAR_5[1] >> 16 | ((VAR_5[2] & 0x3F) << 16)) + 1;
        }
        else {
            VAR_6 = 1 << ((VAR_5[2] >> 16) & 0xF);
            VAR_8 = ((VAR_5[1] >> 15) & 0x7);
            VAR_9 = ((VAR_5[1] >> 30) | (VAR_5[2] & 0x3FF) << 2);
            VAR_7 = (VAR_9 + 1) * (1 << (VAR_8 + 2));
        }


        VAR_3->ulBlockSize = VAR_6;
        VAR_3->ulNofBlock = VAR_7;
    }

    return VAR_4;
}
