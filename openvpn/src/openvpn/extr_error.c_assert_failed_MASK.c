
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,int,...) ;

void
FUNC_2(const char *VAR_1, int VAR_2, const char *VAR_3)
{
    if (VAR_3)
    {
        FUNC_1(VAR_0, "Assertion failed at %s:%d (%s)", VAR_1, VAR_2, VAR_3);
    }
    else
    {
        FUNC_1(VAR_0, "Assertion failed at %s:%d", VAR_1, VAR_2);
    }
    FUNC_0(1);
}
