
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;

void FUNC_5(int VAR_1)
{
    if(0==VAR_1)
    {
        FUNC_1(115200);
        VAR_0 = 1;

        FUNC_3(VAR_1+'0');
        FUNC_4("\r\n");
    }
    while(!VAR_0);
    FUNC_0(VAR_1*200000);
    FUNC_4("Hello, world! From processor <");
    FUNC_3(VAR_1+'0');
    FUNC_4(">\r\n");

    if(0==VAR_1)
    {
        while (1) {
            FUNC_3(FUNC_2());
        }

    }
    else
    {
        while(1);
    }
}
