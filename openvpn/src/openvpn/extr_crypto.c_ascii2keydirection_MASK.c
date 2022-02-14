
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

int
FUNC_2(int VAR_3, const char *VAR_4)
{
    if (!VAR_4)
    {
        return VAR_0;
    }
    else if (!FUNC_1(VAR_4, "0"))
    {
        return VAR_2;
    }
    else if (!FUNC_1(VAR_4, "1"))
    {
        return VAR_1;
    }
    else
    {
        FUNC_0(VAR_3, "Unknown key direction '%s' -- must be '0' or '1'", VAR_4);
        return -1;
    }
    return VAR_0;
}
