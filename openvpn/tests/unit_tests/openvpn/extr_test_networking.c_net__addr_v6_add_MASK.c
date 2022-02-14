
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char const*,struct in6_addr*) ;
 int FUNC_1 (int *,char*,struct in6_addr*,int) ;
 int FUNC_2 (char*,char const*,int,char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2, int VAR_3)
{
    struct in6_addr VAR_4;
    int VAR_5;

    VAR_5 = FUNC_0(VAR_0, VAR_2, &VAR_4);
    if (VAR_5 != 1)
        return -1;

    FUNC_2("CMD: ip -6 addr add %s/%d dev %s\n", VAR_2, VAR_3, VAR_1);

    return FUNC_1(((void*)0), VAR_1, &VAR_4, VAR_3);
}
