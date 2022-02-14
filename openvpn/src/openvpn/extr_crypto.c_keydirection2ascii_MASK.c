
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

const char *
FUNC_1(int VAR_3, bool VAR_4, bool VAR_5)
{
    if (VAR_3 == VAR_0)
    {
        if (VAR_5)
        {
            return "not set";
        }
        else
        {
            return ((void*)0);
        }
    }
    else if (VAR_3 == VAR_2)
    {
        return VAR_4 ? "1" : "0";
    }
    else if (VAR_3 == VAR_1)
    {
        return VAR_4 ? "0" : "1";
    }
    else
    {
        FUNC_0(0);
    }
    return ((void*)0);
}
