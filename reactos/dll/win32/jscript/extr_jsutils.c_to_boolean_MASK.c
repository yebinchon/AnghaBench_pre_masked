
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsval_t ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;







 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

HRESULT FUNC_11(jsval_t VAR_4, BOOL *VAR_5)
{
    switch(FUNC_10(VAR_4)) {
    case 129:
    case 133:
        *VAR_5 = VAR_2;
        return VAR_3;
    case 131:
        *VAR_5 = FUNC_5(VAR_4) != ((void*)0);
        return VAR_3;
    case 130:
        *VAR_5 = FUNC_9(FUNC_6(VAR_4)) != 0;
        return VAR_3;
    case 132:
        *VAR_5 = !FUNC_8(FUNC_4(VAR_4)) && FUNC_4(VAR_4);
        return VAR_3;
    case 134:
        *VAR_5 = FUNC_3(VAR_4);
        return VAR_3;
    case 128:
        FUNC_0("unimplemented for variant %s\n", FUNC_2(FUNC_7(VAR_4)));
        return VAR_1;
    }

    FUNC_1(0);
    return VAR_0;
}
