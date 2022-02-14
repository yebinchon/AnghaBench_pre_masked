
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int * FUNC_0 (int*) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2()
{

    time_t VAR_0;
    VAR_0 = -15;
    FUNC_1(FUNC_0(&VAR_0) == ((void*)0), "ctime doesn't return NULL for invalid parameters\n");
    VAR_0 = -5000000;
    FUNC_1(FUNC_0(&VAR_0) == ((void*)0), "ctime doesn't return NULL for invalid parameters\n");
}
