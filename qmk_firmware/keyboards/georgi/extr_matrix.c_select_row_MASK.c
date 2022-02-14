
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void FUNC_3(uint8_t VAR_17)
{
    if (VAR_17 < 7) {

        if (VAR_16) {
        } else {
            VAR_16 = FUNC_0(VAR_12, VAR_10); if (VAR_16) goto out;
            VAR_16 = FUNC_2(VAR_11, VAR_10); if (VAR_16) goto out;
            VAR_16 = FUNC_2(0xFF & ~(1<<VAR_17), VAR_10); if (VAR_16) goto out;
        out:
            FUNC_1();
        }
    } else {

        switch (VAR_17) {
            case 7:
                VAR_7 |= VAR_4;
                VAR_13 &= ~VAR_4;
                break;
            case 8:
                VAR_7 |= VAR_5;
                VAR_13 &= ~VAR_5;
                break;
            case 9:
                VAR_7 |= VAR_6;
                VAR_13 &= ~VAR_6;
                break;
            case 10:
                VAR_7 |= VAR_0;
                VAR_13 &= ~VAR_0;
                break;
            case 11:
                VAR_9 |= VAR_1;
                VAR_15 &= ~VAR_1;
                break;
            case 12:
                VAR_9 |= VAR_2;
                VAR_15 &= ~VAR_2;
                break;
            case 13:
                VAR_8 |= VAR_3;
                VAR_14 &= ~VAR_3;
                break;
        }
    }
}
