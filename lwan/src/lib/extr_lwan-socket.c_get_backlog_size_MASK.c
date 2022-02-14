
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,int*) ;

__attribute__((used)) static int FUNC_3(void)
{
    int VAR_1 = VAR_0;


    FILE *VAR_2;

    VAR_2 = FUNC_1("/proc/sys/net/core/somaxconn", "re");
    if (VAR_2) {
        int VAR_3;
        if (FUNC_2(VAR_2, "%d", &VAR_3) == 1)
            VAR_1 = VAR_3;
        FUNC_0(VAR_2);
    }


    return VAR_1;
}
