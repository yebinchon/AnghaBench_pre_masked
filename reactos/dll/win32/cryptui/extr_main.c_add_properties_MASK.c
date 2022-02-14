
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct detail_data {TYPE_1__* pCertViewInfo; } ;
typedef int WCHAR ;
struct TYPE_5__ {int id; int * (* prop_to_value ) (int *,size_t) ;scalar_t__ prop_is_string; int prop; } ;
struct TYPE_4__ {int pCertContext; } ;
typedef int PCCERT_CONTEXT ;
typedef int * LPWSTR ;
typedef int HWND ;
typedef size_t DWORD ;
typedef int BYTE ;


 size_t FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ,int *,size_t*) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,struct detail_data*,int ,int *,int *,int *) ;
 TYPE_2__* VAR_0 ;
 int * FUNC_6 (int *,size_t) ;

__attribute__((used)) static void FUNC_7(HWND VAR_1, struct detail_data *VAR_2)
{
    DWORD VAR_3;
    PCCERT_CONTEXT VAR_4 = VAR_2->pCertViewInfo->pCertContext;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
    {
        DWORD VAR_5;

        if (FUNC_1(VAR_4, VAR_0[VAR_3].prop, ((void*)0),
         &VAR_5))
        {
            BYTE *VAR_6;
            WCHAR *VAR_7 = ((void*)0);




            VAR_6 = FUNC_3(FUNC_2(), 0, VAR_5);
            if (VAR_6)
            {
                if (FUNC_1(VAR_4,
                 VAR_0[VAR_3].prop, VAR_6, &VAR_5))
                {
                    if (VAR_0[VAR_3].prop_is_string)
                    {
                        VAR_7 = (LPWSTR)VAR_6;

                        VAR_6 = ((void*)0);
                    }
                    else
                        VAR_7 = VAR_0[VAR_3].prop_to_value(VAR_6, VAR_5);
                }
                FUNC_4(FUNC_2(), 0, VAR_6);
            }
            FUNC_5(VAR_1, VAR_2, VAR_0[VAR_3].id, VAR_7,
             ((void*)0), ((void*)0));
        }
    }
}
