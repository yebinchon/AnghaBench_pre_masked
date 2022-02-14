
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int
FUNC_2(const char *VAR_4, const int VAR_5)
{
    if (FUNC_1(VAR_4, "net30"))
    {
        return VAR_0;
    }
    else if (FUNC_1(VAR_4, "p2p"))
    {
        return VAR_1;
    }
    else if (FUNC_1(VAR_4, "subnet"))
    {
        return VAR_2;
    }
    else
    {
        FUNC_0(VAR_5, "--topology must be net30, p2p, or subnet");
        return VAR_3;
    }
}
