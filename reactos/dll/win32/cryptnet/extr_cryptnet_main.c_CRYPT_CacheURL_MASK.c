
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ft ;
typedef int WCHAR ;
struct TYPE_11__ {TYPE_1__* rgBlob; } ;
struct TYPE_10__ {int ExpireTime; int lpszLocalFileName; } ;
struct TYPE_9__ {int cbData; int pbData; } ;
typedef int LPCWSTR ;
typedef TYPE_2__ INTERNET_CACHE_ENTRY_INFOW ;
typedef scalar_t__ HANDLE ;
typedef int FILETIME ;
typedef int DWORD ;
typedef TYPE_3__ CRYPT_BLOB_ARRAY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int ,int ,int,int *,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int *,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *,int *,int ) ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,TYPE_2__*,int*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int ,TYPE_2__*,int ) ;
 int FUNC_13 (scalar_t__,int ,int ,int*,int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ,int) ;

__attribute__((used)) static void FUNC_16(LPCWSTR VAR_10, const CRYPT_BLOB_ARRAY *VAR_11,
 DWORD VAR_12, FILETIME VAR_13)
{
    WCHAR VAR_14[VAR_6];
    HANDLE VAR_15;
    DWORD VAR_16 = 0, VAR_17;
    FILETIME VAR_18;

    FUNC_11(VAR_10, ((void*)0), &VAR_16);
    if (FUNC_9() == VAR_2)
    {
        INTERNET_CACHE_ENTRY_INFOW *VAR_19 = FUNC_5(VAR_16);

        if (!VAR_19)
        {
            FUNC_8("out of memory\n");
            return;
        }

        if (FUNC_11(VAR_10, VAR_19, &VAR_16))
        {
            FUNC_14(VAR_14, VAR_19->lpszLocalFileName);




            FUNC_10(&VAR_18);
            if (FUNC_2(&VAR_19->ExpireTime, &VAR_18) < 0)
            {
                FUNC_7(VAR_10);
            }
            else
            {
                VAR_19->ExpireTime = VAR_13;
                FUNC_12(VAR_10, VAR_19, VAR_0);
                FUNC_6(VAR_19);
                return;
            }
        }
        FUNC_6(VAR_19);
    }

    if (!FUNC_4(VAR_10, VAR_11->rgBlob[0].cbData, ((void*)0), VAR_14, 0))
        return;

    VAR_15 = FUNC_3(VAR_14, VAR_4, 0,
            ((void*)0), VAR_8, VAR_3, ((void*)0));
    if(VAR_15 == VAR_5)
        return;

    FUNC_13(VAR_15, VAR_11->rgBlob[0].pbData,
            VAR_11->rgBlob[0].cbData, &VAR_16, ((void*)0));
    FUNC_0(VAR_15);

    if (!(VAR_12 & VAR_1))
        VAR_17 = VAR_7;
    else
        VAR_17 = VAR_9;
    FUNC_15(&VAR_18, 0, sizeof(VAR_18));
    FUNC_1(VAR_10, VAR_14, VAR_13, VAR_18, VAR_17,
            ((void*)0), 0, ((void*)0), ((void*)0));
}
