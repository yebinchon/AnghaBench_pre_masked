
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ unicode; } ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__* LPSTR ;
typedef int LPCWSTR ;
typedef int INT_PTR ;
typedef TYPE_1__ COMBOEX_INFO ;
typedef int CBE_ITEMDATA ;


 int * FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,scalar_t__*,int,int *,int *) ;
 int FUNC_3 (scalar_t__*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static UINT FUNC_5(COMBOEX_INFO *VAR_1, INT_PTR VAR_2, LPWSTR VAR_3)
{
    CBE_ITEMDATA *VAR_4;
    LPCWSTR VAR_5;

    VAR_4 = FUNC_0(VAR_1, VAR_2);
    if (!VAR_4)
        return 0;

    VAR_5 = FUNC_1(VAR_1, VAR_4);
    if (!VAR_5)
    {
        if (VAR_3)
        {
            if (VAR_1->unicode)
                VAR_3[0] = 0;
            else
                *((LPSTR)VAR_3) = 0;
        }
        return 0;
    }

    if (VAR_1->unicode)
    {
        if (VAR_3)
            FUNC_3(VAR_3, VAR_5);
        return FUNC_4(VAR_5);
    }
    else
    {
        UINT VAR_6;
        VAR_6 = FUNC_2(VAR_0, 0, VAR_5, -1, (LPSTR)VAR_3, 0x40000000, ((void*)0), ((void*)0));
        if (VAR_6) VAR_6--;
        return VAR_6;
    }
}
