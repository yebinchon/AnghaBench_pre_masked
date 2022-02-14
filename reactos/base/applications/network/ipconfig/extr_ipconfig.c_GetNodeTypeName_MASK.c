
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szNode ;
typedef int UINT ;
typedef int TCHAR ;
typedef int * LPTSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int VAR_5 ;

LPTSTR FUNC_1(UINT VAR_6)
{
    static TCHAR VAR_7[14];

    switch (VAR_6)
    {
        case 1:
            if (!FUNC_0(VAR_5, VAR_0, VAR_7, sizeof(VAR_7)))
                return ((void*)0);
            break;

        case 2:
            if (!FUNC_0(VAR_5, VAR_3, VAR_7, sizeof(VAR_7)))
                return ((void*)0);
            break;

        case 4:
            if (!FUNC_0(VAR_5, VAR_2, VAR_7, sizeof(VAR_7)))
                return ((void*)0);
            break;

        case 8:
            if (!FUNC_0(VAR_5, VAR_1, VAR_7, sizeof(VAR_7)))
                return ((void*)0);
            break;

        default :
            if (!FUNC_0(VAR_5, VAR_4, VAR_7, sizeof(VAR_7)))
                return ((void*)0);
            break;
    }

    return VAR_7;
}
