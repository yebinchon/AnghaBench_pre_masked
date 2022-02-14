
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

int FUNC_2(void)
{
    if (sizeof(time_t) < 8)
        FUNC_1("Skipping; time_t is less than 64-bits");
    else
        FUNC_0(VAR_0, 1000000);
    return 1;
}
