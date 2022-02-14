
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;







 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(json_t *VAR_0, json_t *VAR_1)
{
    if(!VAR_0 || !VAR_1)
        return 0;

    if(FUNC_5(VAR_0) != FUNC_5(VAR_1))
        return 0;


    if(VAR_0 == VAR_1)
        return 1;

    switch(FUNC_5(VAR_0)) {
        case 130:
            return FUNC_2(VAR_0, VAR_1);
        case 132:
            return FUNC_0(VAR_0, VAR_1);
        case 128:
            return FUNC_4(VAR_0, VAR_1);
        case 131:
            return FUNC_1(VAR_0, VAR_1);
        case 129:
            return FUNC_3(VAR_0, VAR_1);
        default:
            return 0;
    }
}
