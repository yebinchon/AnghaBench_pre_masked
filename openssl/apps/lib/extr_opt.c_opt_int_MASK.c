
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,long*) ;
 int FUNC_1 (char*,int ,char const*) ;
 int VAR_0 ;

int FUNC_2(const char *VAR_1, int *VAR_2)
{
    long VAR_3;

    if (!FUNC_0(VAR_1, &VAR_3))
        return 0;
    *VAR_2 = (int)VAR_3;
    if (*VAR_2 != VAR_3) {
        FUNC_1("%s: Value \"%s\" outside integer range\n",
                          VAR_0, VAR_1);
        return 0;
    }
    return 1;
}
