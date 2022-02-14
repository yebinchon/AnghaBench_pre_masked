
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int procfile ;


 unsigned int FUNC_0 (int *) ;
 char* FUNC_1 (int *,size_t,int) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(procfile *VAR_0) {
    size_t VAR_1;
    unsigned int VAR_2 = FUNC_0(VAR_0);
    int VAR_3 = -1;
    char *VAR_4 = ((void*)0);
    for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
    {
        if (FUNC_2(VAR_0, VAR_1) < 2)
            continue;
        VAR_4 = FUNC_1(VAR_0, VAR_1, 1);
        if (FUNC_4(VAR_4, "zram") == 0)
        {
            VAR_3 = FUNC_3(FUNC_1(VAR_0, VAR_1, 0));
            if (VAR_3 == 0)
                return -1;
            return VAR_3;
        }
    }
    return -1;
}
