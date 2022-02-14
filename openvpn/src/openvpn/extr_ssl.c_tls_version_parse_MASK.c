
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 () ;

int
FUNC_2(const char *VAR_5, const char *VAR_6)
{
    const int VAR_7 = FUNC_1();
    if (!FUNC_0(VAR_5, "1.0") && VAR_0 <= VAR_7)
    {
        return VAR_0;
    }
    else if (!FUNC_0(VAR_5, "1.1") && VAR_1 <= VAR_7)
    {
        return VAR_1;
    }
    else if (!FUNC_0(VAR_5, "1.2") && VAR_2 <= VAR_7)
    {
        return VAR_2;
    }
    else if (!FUNC_0(VAR_5, "1.3") && VAR_3 <= VAR_7)
    {
        return VAR_3;
    }
    else if (VAR_6 && !FUNC_0(VAR_6, "or-highest"))
    {
        return VAR_7;
    }
    else
    {
        return VAR_4;
    }
}
