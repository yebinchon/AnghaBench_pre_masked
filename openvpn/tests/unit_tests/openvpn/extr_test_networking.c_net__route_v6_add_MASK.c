
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char const*,struct in6_addr*) ;
 int FUNC_1 (int *,struct in6_addr*,int,int *,char*,int ,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2, int VAR_3, int VAR_4)
{
    struct in6_addr VAR_5;
    int VAR_6;

    if (!VAR_2)
        return -1;

    VAR_6 = FUNC_0(VAR_0, VAR_2, &VAR_5);
    if (VAR_6 != 1)
        return -1;

    FUNC_2("CMD: ip -6 route add %s/%d dev %s", VAR_2, VAR_3, VAR_1);
    if (VAR_4 > 0)
        FUNC_2(" metric %d", VAR_4);
    FUNC_2("\n");

    return FUNC_1(((void*)0), &VAR_5, VAR_3, ((void*)0), VAR_1, 0, VAR_4);

}
