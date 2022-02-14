
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(uint8_t VAR_6)
{
    int VAR_7 = (VAR_2 + 1) & (VAR_0 - 1);
    if (VAR_7 == VAR_1) {
        FUNC_3("UART buffer overflow - char dropped\n");
        return 1;
    }
    if (VAR_6 == VAR_3) {
        FUNC_2();
        return 1;
    } else {
        VAR_4[VAR_2] = VAR_6;
        VAR_2 = VAR_7;
    }

    FUNC_0(&VAR_5);
    FUNC_1();
    return 1;
}
