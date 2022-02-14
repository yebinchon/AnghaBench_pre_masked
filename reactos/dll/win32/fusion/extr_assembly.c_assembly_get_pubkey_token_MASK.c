
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hashdata ;
typedef int WORD ;
typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_7__ {int blobsz; TYPE_1__* tables; } ;
struct TYPE_6__ {int offset; } ;
typedef int * LPWSTR ;
typedef int LONG ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BCRYPT_ALG_HANDLE ;
typedef TYPE_2__ ASSEMBLY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *,int,int *,int) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_4 (int ) ;
 int * FUNC_5 (TYPE_2__*,int) ;
 int * FUNC_6 (TYPE_2__*,int ,int*) ;
 int * FUNC_7 (int) ;
 int VAR_10 ;
 int FUNC_8 (int *,int *) ;

HRESULT FUNC_9(ASSEMBLY *VAR_11, LPWSTR *VAR_12)
{
    ULONG VAR_13, VAR_14;
    LONG VAR_15;
    BYTE VAR_16[20], *VAR_17, *VAR_18;
    BCRYPT_ALG_HANDLE VAR_19;
    BYTE VAR_20[VAR_2];
    HRESULT VAR_21 = VAR_3;
    LPWSTR VAR_22;
    DWORD VAR_23;

    *VAR_12 = ((void*)0);

    VAR_15 = VAR_11->tables[FUNC_4(VAR_10)].offset;
    if (VAR_15 == -1)
        return VAR_3;

    VAR_18 = FUNC_5(VAR_11, VAR_15);
    if (!VAR_18)
        return VAR_3;

    VAR_18 += FUNC_3(VAR_0, VAR_6);
    if (VAR_11->blobsz == sizeof(DWORD))
        VAR_23 = *(DWORD *)VAR_18;
    else
        VAR_23 = *(WORD *)VAR_18;

    VAR_17 = FUNC_6(VAR_11, VAR_23, &VAR_14);

    if (FUNC_2(&VAR_19, VAR_1, VAR_5, 0) != VAR_7)
        return VAR_3;

    if (FUNC_1(VAR_19, ((void*)0), 0, VAR_17, VAR_14, VAR_16, sizeof(VAR_16)) != VAR_7)
    {
        VAR_21 = VAR_3;
        goto done;
    }

    VAR_14 = sizeof(VAR_16);
    for (VAR_13 = VAR_14 - 1; VAR_13 >= VAR_14 - 8; VAR_13--)
        VAR_20[VAR_14 - VAR_13 - 1] = VAR_16[VAR_13];

    if (!(VAR_22 = FUNC_7((VAR_9 + 1) * sizeof(WCHAR))))
    {
        VAR_21 = VAR_4;
        goto done;
    }

    FUNC_8(VAR_20, VAR_22);

    *VAR_12 = VAR_22;
    VAR_21 = VAR_8;

done:
    FUNC_0(VAR_19, 0);
    return VAR_21;
}
