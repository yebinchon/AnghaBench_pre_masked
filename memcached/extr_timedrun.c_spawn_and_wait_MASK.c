
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char**) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(char **VAR_2)
{
    int VAR_3 = VAR_1;
    pid_t VAR_4 = FUNC_1();

    switch (VAR_4) {
    case -1:
        FUNC_2("fork");
        VAR_3 = VAR_0;
        break;
    case 0:
        FUNC_0(VAR_2[0], VAR_2);
        FUNC_2("exec");
        VAR_3 = VAR_1;
        break;
    default:
        VAR_3 = FUNC_3(VAR_4);
    }
    return VAR_3;
}
