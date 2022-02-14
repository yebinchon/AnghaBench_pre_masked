
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_3, struct in_addr *VAR_4)
{
    if (!VAR_3 || !*VAR_3 || !VAR_4)
    {
        VAR_2 = VAR_0;
        return -1;
    }

    if (!FUNC_1(VAR_3, "255.255.255.255"))
    {

        VAR_4->s_addr = VAR_1;
        return 0;
    }

 VAR_4->s_addr = FUNC_0(VAR_3);
    return (VAR_4->s_addr == VAR_1) ? -1 : 0;
}
