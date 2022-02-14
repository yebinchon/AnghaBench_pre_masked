
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
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void FUNC_3(uint8_t VAR_14)
{
    if (VAR_14 < 6) {

        if (VAR_13) {

        } else {
            VAR_13 = FUNC_0(VAR_10, VAR_8); if (VAR_13) goto out;
            VAR_13 = FUNC_2(VAR_9, VAR_8); if (VAR_13) goto out;
            VAR_13 = FUNC_2(~(1<<VAR_14), VAR_8); if (VAR_13) goto out;
        out:
            FUNC_1();
        }
    } else {

        switch (VAR_14) {
            case 6:
                VAR_6 |= VAR_2;
                VAR_11 &= ~VAR_2;
                break;
            case 7:
                VAR_6 |= VAR_3;
                VAR_11 &= ~VAR_3;
                break;
            case 8:
                VAR_6 |= VAR_4;
                VAR_11 &= ~VAR_4;
                break;
            case 9:
                VAR_6 |= VAR_5;
                VAR_11 &= ~VAR_5;
                break;
            case 10:
                VAR_7 |= VAR_0;
                VAR_12 &= ~VAR_0;
                break;
            case 11:
                VAR_7 |= VAR_1;
                VAR_12 &= ~VAR_1;
                break;
        }
    }
}
