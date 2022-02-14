
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char const*,char*) ;

int
FUNC_1(const char *VAR_4, const char *VAR_5)
{
    if (FUNC_0(VAR_4, VAR_5, "tun"))
    {
        return VAR_2;
    }
    else if (FUNC_0(VAR_4, VAR_5, "tap"))
    {
        return VAR_1;
    }
    else if (FUNC_0(VAR_4, VAR_5, "null"))
    {
        return VAR_0;
    }
    else
    {
        return VAR_3;
    }
}
