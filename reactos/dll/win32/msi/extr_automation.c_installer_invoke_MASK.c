
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int VARIANT ;
typedef int UINT ;
typedef int REFIID ;
typedef int LCID ;
typedef int HRESULT ;
typedef int EXCEPINFO ;
typedef int DISPPARAMS ;
typedef int DISPID ;
typedef int AutomationObject ;
 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *,int *) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (int ,int *,int *,int *,int *) ;
 int FUNC_3 (int ,int *,int *,int *,int *) ;
 int FUNC_4 (int ,int *,int *,int *,int *) ;
 int FUNC_5 (int ,int *,int *,int *,int *) ;
 int FUNC_6 (int ,int *,int *,int *,int *) ;
 int FUNC_7 (int ,int *,int *,int *,int *) ;
 int FUNC_8 (int ,int *,int *,int *,int *) ;
 int FUNC_9 (int *,int ,int *,int *,int *,int *) ;
 int FUNC_10 (int ,int *,int *,int *,int *) ;
 int FUNC_11 (int ,int *,int *,int *,int *) ;
 int FUNC_12 (int ,int *,int *,int *,int *) ;
 int FUNC_13 (int ,int *,int *,int *,int *) ;
 int FUNC_14 (int ,int *,int *,int *,int *) ;
 int FUNC_15 (int ,int *,int *,int *,int *) ;
 int FUNC_16 (int ,int *,int *,int *,int *) ;
 int FUNC_17 (int ,int *,int *,int *,int *) ;
 int FUNC_18 (int ,int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_19(
        AutomationObject* VAR_1,
        DISPID VAR_2,
        REFIID VAR_3,
        LCID VAR_4,
        WORD VAR_5,
        DISPPARAMS* VAR_6,
        VARIANT* VAR_7,
        EXCEPINFO* VAR_8,
        UINT* VAR_9)
{
    switch (VAR_2)
    {
        case 146:
            return FUNC_0(VAR_5, VAR_6,
                                              VAR_7, VAR_8, VAR_9);

        case 137:
            return FUNC_9(VAR_1, VAR_5, VAR_6,
                                             VAR_7, VAR_8, VAR_9);

        case 136:
            return FUNC_10(VAR_5, VAR_6,
                                             VAR_7, VAR_8, VAR_9);

        case 138:
            return FUNC_8(VAR_5, VAR_6,
                                              VAR_7, VAR_8, VAR_9);

        case 130:
            return FUNC_16(VAR_5, VAR_6,
                                                    VAR_7, VAR_8,
                                                    VAR_9);

        case 129:
            return FUNC_17(VAR_5, VAR_6,
                                         VAR_7, VAR_8, VAR_9);

        case 145:
            return FUNC_1(VAR_5, VAR_6,
                                           VAR_7, VAR_8, VAR_9);

        case 140:
            return FUNC_6(VAR_5, VAR_6,
                                                VAR_7, VAR_8,
                                                VAR_9);

        case 128:
            return FUNC_18(VAR_5, VAR_7,
                                         VAR_8, VAR_9);

        case 139:
            return FUNC_7(VAR_5, VAR_6,
                                                 VAR_7, VAR_8,
                                                 VAR_9);

        case 132:
            return FUNC_14(VAR_5, VAR_6,
                                               VAR_7, VAR_8,
                                               VAR_9);

        case 144:
            return FUNC_2(VAR_5, VAR_6,
                                             VAR_7, VAR_8, VAR_9);

        case 143:
            return FUNC_3(VAR_5, VAR_6,
                                                VAR_7, VAR_8,
                                                VAR_9);

        case 142:
            return FUNC_4(VAR_5, VAR_6,
                                          VAR_7, VAR_8, VAR_9);

        case 141:
            return FUNC_5(VAR_5, VAR_6,
                                             VAR_7, VAR_8, VAR_9);

        case 133:
            return FUNC_12(VAR_5, VAR_6,
                                              VAR_7, VAR_8, VAR_9);

        case 135:
            return FUNC_11(VAR_5, VAR_6,
                                             VAR_7, VAR_8, VAR_9);

        case 134:
            return FUNC_13(VAR_5, VAR_6,
                                          VAR_7, VAR_8, VAR_9);

        case 131:
            return FUNC_15(VAR_5, VAR_6,
                                                 VAR_7, VAR_8,
                                                 VAR_9);

        default:
            return VAR_0;
    }
}
