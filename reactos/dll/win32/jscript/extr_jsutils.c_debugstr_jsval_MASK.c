
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsval_t ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char const* FUNC_2 (int ) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int const) ;
 char const* FUNC_9 (char*,int ) ;

const char *FUNC_10(const jsval_t VAR_0)
{
    switch(FUNC_8(VAR_0)) {
    case 129:
        return "undefined";
    case 133:
        return "null";
    case 131:
        return FUNC_9("obj(%p)", FUNC_5(VAR_0));
    case 130:
        return FUNC_9("str(%s)", FUNC_1(FUNC_6(VAR_0)));
    case 132:
        return FUNC_9("%lf", FUNC_4(VAR_0));
    case 134:
        return FUNC_3(VAR_0) ? "true" : "false";
    case 128:
        return FUNC_2(FUNC_7(VAR_0));
    }

    FUNC_0(0);
    return ((void*)0);
}
