
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsval_type_t ;
typedef int jsval_t ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;







 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;

HRESULT FUNC_10(jsval_t VAR_4, jsval_t VAR_5, BOOL *VAR_6)
{
    jsval_type_t VAR_7 = FUNC_9(VAR_4);

    FUNC_1("\n");

    if(VAR_7 != FUNC_9(VAR_5)) {
        if(FUNC_7(VAR_4))
            *VAR_6 = FUNC_7(VAR_5);
        else
            *VAR_6 = VAR_1;
        return VAR_2;
    }

    switch(VAR_7) {
    case 129:
    case 133:
        *VAR_6 = VAR_3;
        break;
    case 131:
        return FUNC_2(FUNC_5(VAR_4), FUNC_5(VAR_5), VAR_6);
    case 130:
        *VAR_6 = FUNC_8(FUNC_6(VAR_4), FUNC_6(VAR_5));
        break;
    case 132:
        *VAR_6 = FUNC_4(VAR_4) == FUNC_4(VAR_5);
        break;
    case 134:
        *VAR_6 = !FUNC_3(VAR_4) == !FUNC_3(VAR_5);
        break;
    case 128:
        FUNC_0("VARIANT not implemented\n");
        return VAR_0;
    }

    return VAR_2;
}
