
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_3(const char *VAR_2)
{
    char VAR_3[VAR_0];
    if (VAR_1 == 0)
        return -1;
    if (FUNC_1(VAR_2, VAR_3, VAR_0) == -1)
    {
        FUNC_0(((void*)0), "Invalid custom stderr log path", VAR_2);
        return -1;
    }
    return FUNC_2(VAR_3);
}
