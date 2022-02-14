
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct detail_data {int dummy; } ;
typedef int WCHAR ;
struct TYPE_8__ {scalar_t__ pwszName; } ;
struct TYPE_7__ {int * pszObjId; } ;
typedef TYPE_1__* PCERT_EXTENSION ;
typedef TYPE_2__* PCCRYPT_OID_INFO ;
typedef int * LPWSTR ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,struct detail_data*,int *,int *,int ,TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(HWND VAR_2, struct detail_data *VAR_3,
 PCERT_EXTENSION VAR_4)
{
    PCCRYPT_OID_INFO VAR_5 = FUNC_0(VAR_0,
     VAR_4->pszObjId, 0);
    LPWSTR VAR_6 = FUNC_5(VAR_4, 0);

    if (VAR_5)
        FUNC_4(VAR_2, VAR_3, (LPWSTR)VAR_5->pwszName,
         VAR_6, VAR_1, VAR_4);
    else
    {
        DWORD VAR_7 = FUNC_6(VAR_4->pszObjId);
        LPWSTR VAR_8 = FUNC_2(FUNC_1(), 0, (VAR_7 + 1) * sizeof(WCHAR));

        if (VAR_8)
        {
            DWORD VAR_9;

            for (VAR_9 = 0; VAR_9 <= VAR_7; VAR_9++)
                VAR_8[VAR_9] = VAR_4->pszObjId[VAR_9];
            FUNC_4(VAR_2, VAR_3, VAR_8, VAR_6,
             VAR_1, VAR_4);
            FUNC_3(FUNC_1(), 0, VAR_8);
        }
    }
    FUNC_3(FUNC_1(), 0, VAR_6);
}
