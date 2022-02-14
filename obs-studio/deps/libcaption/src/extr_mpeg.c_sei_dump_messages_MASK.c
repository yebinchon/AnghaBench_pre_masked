
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sei_message_t ;
typedef int cea708_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,double) ;
 scalar_t__ FUNC_2 (int*,size_t,int *) ;
 int FUNC_3 (int ,char*,...) ;
 int* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_8(sei_message_t* VAR_3, double VAR_4)
{
    cea708_t VAR_5;
    sei_message_t* VAR_6;
    FUNC_1(&VAR_5, VAR_4);

    for (VAR_6 = VAR_3; VAR_6; VAR_6 = FUNC_5(VAR_6)) {
        uint8_t* VAR_7 = FUNC_4(VAR_6);
        size_t VAR_8 = FUNC_6(VAR_6);
        FUNC_3(VAR_2, "-- Message %p\n-- Message Type: %ld\n-- Message Size: %d\n", VAR_7, FUNC_7(VAR_6), (int)VAR_8);

        while (VAR_8) {
            FUNC_3(VAR_2, "%02X ", *VAR_7);
            ++VAR_7;
            --VAR_8;
        }

        FUNC_3(VAR_2, "\n");

        if (VAR_1 == FUNC_7(VAR_6)) {
            if (VAR_0 != FUNC_2(FUNC_4(VAR_6), FUNC_6(VAR_6), &VAR_5)) {
                FUNC_3(VAR_2, "cea708_parse error\n");
            } else {
                FUNC_0(&VAR_5);
            }
        }
    }
}
