
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
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_3(uint8_t VAR_10)
{
    if (VAR_10 < 8) {

        if (VAR_9) {

        } else {


            VAR_9 = FUNC_0(VAR_4, VAR_5); if (VAR_9) goto out;
            VAR_9 = FUNC_2(VAR_3, VAR_5); if (VAR_9) goto out;
            VAR_9 = FUNC_2( 0xFF & ~(1<<VAR_10) & ~(0<<8), VAR_5); if (VAR_9) goto out;
        out:
            FUNC_1();
        }
    } else {


        switch (VAR_10) {
            case 8:
                VAR_0 |= (1<<0);
                VAR_6 &= ~(1<<0);
                break;
            case 9:
                VAR_0 |= (1<<1);
                VAR_6 &= ~(1<<1);
                break;
            case 10:
                VAR_0 |= (1<<2);
                VAR_6 &= ~(1<<2);
                break;
            case 11:
                VAR_0 |= (1<<3);
                VAR_6 &= ~(1<<3);
                break;
            case 12:
                VAR_2 |= (1<<2);
                VAR_8 &= ~(1<<3);
                break;
            case 13:
                VAR_2 |= (1<<3);
                VAR_8 &= ~(1<<3);
                break;
            case 14:
                VAR_1 |= (1<<6);
                VAR_7 &= ~(1<<6);
                break;
            case 15:
                VAR_1 |= (1<<7);
                VAR_7 &= ~(1<<7);
                break;
        }
    }
}
