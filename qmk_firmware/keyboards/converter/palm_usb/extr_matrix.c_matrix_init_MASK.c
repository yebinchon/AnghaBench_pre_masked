
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(void)
{
    VAR_4 = 1;


    FUNC_9();


    FUNC_6();


    FUNC_7("power up\n");
    FUNC_2(VAR_3, VAR_2);
    while( FUNC_1(VAR_0) != VAR_2 ) {;}
    FUNC_7("dcd\n");

    FUNC_8();

    if ( FUNC_5() ) {
        VAR_5 = FUNC_10();
    } else {
        FUNC_7("failed handshake");
        FUNC_0(1000);

    }




    for (uint8_t VAR_7=0; VAR_7 < VAR_1; VAR_7++) VAR_6[VAR_7] = 0x00;

    FUNC_4();
    return;


}
