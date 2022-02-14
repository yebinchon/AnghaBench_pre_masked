
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_3)
{
    if (VAR_3 == VAR_0)
    {
        return "accept";
    }
    if (VAR_3 == VAR_1)
    {
        return "ignore";
    }
    if (VAR_3 == VAR_2)
    {
        return "reject";
    }
    else
    {
        return "???";
    }
}
