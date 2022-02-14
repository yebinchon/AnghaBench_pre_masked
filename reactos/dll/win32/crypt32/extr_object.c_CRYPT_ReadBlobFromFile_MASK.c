
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cbData; int pbData; } ;
typedef TYPE_1__* PCERT_BLOB ;
typedef int LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__,int ,scalar_t__,scalar_t__*,int *) ;
 int FUNC_6 (char*,int) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static BOOL FUNC_8(LPCWSTR VAR_6, PCERT_BLOB VAR_7)
{
    BOOL VAR_8 = VAR_0;
    HANDLE VAR_9;

    FUNC_6("%s\n", FUNC_7(VAR_6));

    VAR_9 = FUNC_1(VAR_6, VAR_2, VAR_1, ((void*)0),
     VAR_4, 0, ((void*)0));
    if (VAR_9 != VAR_3)
    {
        VAR_8 = VAR_5;
        VAR_7->cbData = FUNC_4(VAR_9, ((void*)0));
        if (VAR_7->cbData)
        {
            VAR_7->pbData = FUNC_2(VAR_7->cbData);
            if (VAR_7->pbData)
            {
                DWORD VAR_10;

                VAR_8 = FUNC_5(VAR_9, VAR_7->pbData, VAR_7->cbData, &VAR_10, ((void*)0)) && VAR_10 == VAR_7->cbData;
                if (!VAR_8) FUNC_3(VAR_7->pbData);
            }
            else
                VAR_8 = VAR_0;
        }
        FUNC_0(VAR_9);
    }
    FUNC_6("returning %d\n", VAR_8);
    return VAR_8;
}
