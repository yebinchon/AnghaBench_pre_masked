
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int robj ;
typedef int client ;


 long long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,long long*) ;

int FUNC_2(client *VAR_2, robj *VAR_3) {
    long long VAR_4;

    if (FUNC_1(VAR_3,&VAR_4) != VAR_1 ||
        VAR_4 < 0 || VAR_4 >= VAR_0)
    {
        FUNC_0(VAR_2,"Invalid or out of range slot");
        return -1;
    }
    return (int) VAR_4;
}
