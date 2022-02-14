
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ SYSOP; } ;
struct TYPE_10__ {TYPE_3__ bit; } ;
struct TYPE_7__ {int CMD; } ;
struct TYPE_8__ {TYPE_1__ bit; } ;
struct TYPE_11__ {TYPE_4__ SYNCBUSY; TYPE_2__ CTRLB; } ;
struct TYPE_12__ {TYPE_5__ I2CM; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char* VAR_6 ;
 int FUNC_1 (int ,unsigned char*,int,int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (int) ;

void FUNC_4(void) {
    unsigned char *VAR_7 = VAR_6;
    unsigned char *VAR_8;
    unsigned char *VAR_9 = (unsigned char *)&VAR_5;

    FUNC_0(VAR_0);

    for (VAR_8 = VAR_9; VAR_8 < VAR_9 + 256; VAR_8 += 32) {
        VAR_7[0] = VAR_8 - VAR_9;
        VAR_7[1] = 32;
        FUNC_2(&VAR_7[2], VAR_8, 32);
        FUNC_1(VAR_4, VAR_7, 34, 50000);
        VAR_3->I2CM.CTRLB.bit.CMD = 0x03;
        while (VAR_3->I2CM.SYNCBUSY.bit.SYSOP) {
            FUNC_0(VAR_2);
        }
        FUNC_3(100);
    }

    FUNC_0(VAR_1);
}
