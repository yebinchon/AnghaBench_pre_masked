
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int RedisSock ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*,int,size_t*) ;
 int FUNC_3 (int *,char*,size_t) ;

__attribute__((used)) static int
FUNC_4(RedisSock *VAR_0, int *VAR_1)
{
    char VAR_2[4096];
    size_t VAR_3;


    if (FUNC_2(VAR_0, VAR_2, sizeof(VAR_2)-1, &VAR_3) < 0)
        return -1;

    if (VAR_2[0] != '*') {
        if (FUNC_0(VAR_0)) {
            if (VAR_2[0] == '-') {
                FUNC_3(VAR_0, VAR_2+1, VAR_3-1);
            }
        }
        return -1;
    }

    *VAR_1 = FUNC_1(VAR_2+1);

    return 0;
}
