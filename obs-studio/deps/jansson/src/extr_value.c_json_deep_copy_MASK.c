
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
 int * FUNC_0 (int const*) ;
 int * FUNC_1 (int const*) ;
 int * FUNC_2 (int const*) ;
 int * FUNC_3 (int const*) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;

json_t *FUNC_6(const json_t *VAR_0)
{
    if(!VAR_0)
        return ((void*)0);

    switch(FUNC_5(VAR_0)) {
        case 131:
            return FUNC_2(VAR_0);
        case 135:
            return FUNC_0(VAR_0);


        case 129:
            return FUNC_4(VAR_0);
        case 133:
            return FUNC_1(VAR_0);
        case 130:
            return FUNC_3(VAR_0);
        case 128:
        case 134:
        case 132:
            return (json_t *)VAR_0;
        default:
            return ((void*)0);
    }

    return ((void*)0);
}
