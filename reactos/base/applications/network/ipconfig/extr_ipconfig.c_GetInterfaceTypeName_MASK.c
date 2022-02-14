
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szIntType ;
typedef int UINT ;
typedef int TCHAR ;
typedef int * LPTSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int *,int) ;







 int VAR_8 ;

LPTSTR FUNC_1(UINT VAR_9)
{
    static TCHAR VAR_10[25];

    switch (VAR_9)
    {
        case 131:
            if (!FUNC_0(VAR_8, VAR_3, VAR_10, sizeof(VAR_10)))
                return ((void*)0);
            break;

        case 134:
            if (!FUNC_0(VAR_8, VAR_0, VAR_10, sizeof(VAR_10)))
                return ((void*)0);
            break;

        case 128:
            if (!FUNC_0(VAR_8, VAR_6, VAR_10, sizeof(VAR_10)))
                return ((void*)0);
            break;

        case 133:
            if (!FUNC_0(VAR_8, VAR_1, VAR_10, sizeof(VAR_10)))
                return ((void*)0);
            break;

        case 130:
            if (!FUNC_0(VAR_8, VAR_4, VAR_10, sizeof(VAR_10)))
                return ((void*)0);
            break;

        case 132:
            if (!FUNC_0(VAR_8, VAR_2, VAR_10, sizeof(VAR_10)))
                return ((void*)0);
            break;

        case 129:
            if (!FUNC_0(VAR_8, VAR_5, VAR_10, sizeof(VAR_10)))
                return ((void*)0);
            break;

        default:
            if (!FUNC_0(VAR_8, VAR_7, VAR_10, sizeof(VAR_10)))
                return ((void*)0);
            break;
    }

    return VAR_10;
}
