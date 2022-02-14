
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 char* FUNC_0 (int*) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_2(void)
{
    time_t VAR_0 = -1;
    char* VAR_1;
    VAR_1 = FUNC_0(&VAR_0);
    FUNC_1(VAR_1 == ((void*)0), "expected ctime to return NULL, got %s\n", VAR_1);
}
