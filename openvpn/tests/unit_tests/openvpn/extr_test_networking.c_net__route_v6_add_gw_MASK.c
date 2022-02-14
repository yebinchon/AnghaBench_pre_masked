
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char const*,struct in6_addr*) ;
 int FUNC_1 (int *,struct in6_addr*,int,struct in6_addr*,char*,int ,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2, int VAR_3, const char *VAR_4,
                     int VAR_5)
{
    struct in6_addr VAR_6, VAR_7;
    int VAR_8;

    if (!VAR_2 || !VAR_4)
        return -1;

    VAR_8 = FUNC_0(VAR_0, VAR_2, &VAR_6);
    if (VAR_8 != 1)
        return -1;

    VAR_8 = FUNC_0(VAR_0, VAR_4, &VAR_7);
    if (VAR_8 != 1)
        return -1;

    FUNC_2("CMD: ip -6 route add %s/%d dev %s via %s", VAR_2, VAR_3,
           VAR_1, VAR_4);
    if (VAR_5 > 0)
        FUNC_2(" metric %d", VAR_5);
    FUNC_2("\n");

    return FUNC_1(((void*)0), &VAR_6, VAR_3, &VAR_7, VAR_1, 0, VAR_5);
}
