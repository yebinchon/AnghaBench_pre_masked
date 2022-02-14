
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(uint32_t VAR_0, uint32_t VAR_1)
{

    FUNC_0();

    FUNC_3(0x0a, 4);

    FUNC_3(0x04, 3);

    FUNC_3(0x00, 1);


    if (FUNC_2())
        return -1;


    FUNC_3(VAR_0 & 0xFF, 8);

    if (FUNC_2())
        return -1;

    FUNC_3((VAR_0 & 0xFF00) >> 8, 8);

    if (FUNC_2())
        return -1;


    FUNC_3(VAR_1 & 0xFF, 8);

    if (FUNC_2())
        return -1;

    FUNC_3((VAR_1 & 0xFF00) >> 8, 8);

    if (FUNC_2())
        return -1;


    FUNC_1();

    return 0;
}
