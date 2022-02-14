
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINE_CONTEXT_INTERFACE ;
struct TYPE_3__ {int pbData; int cbData; } ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef TYPE_1__ const CERT_BLOB ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;



 int VAR_8 ;
 scalar_t__ FUNC_0 (void const*,TYPE_1__ const*) ;
 void* FUNC_1 (int ,int ,int ,int*) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,scalar_t__) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (void const*) ;
 int VAR_15 ;
 int FUNC_9 (int ,int ) ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;

__attribute__((used)) static BOOL FUNC_10(DWORD VAR_19,
 const void *VAR_20, DWORD VAR_21,
 DWORD *VAR_22, DWORD *VAR_23,
 HCERTSTORE *VAR_24, const void **VAR_25)
{
    CERT_BLOB VAR_26;
    const CERT_BLOB *VAR_27;
    const WINE_CONTEXT_INTERFACE *VAR_28 = ((void*)0);
    const void *VAR_29;
    DWORD VAR_30;
    BOOL VAR_31;

    switch (VAR_19)
    {
    case 131:



        VAR_31 = FUNC_0(VAR_20, &VAR_26);
        VAR_27 = &VAR_26;
        break;
    case 132:
        VAR_27 = VAR_20;
        VAR_31 = VAR_13;
        break;
    default:
        FUNC_6(VAR_11);
        VAR_31 = VAR_12;
    }
    if (!VAR_31)
        return VAR_12;

    VAR_31 = VAR_12;
    VAR_29 = FUNC_1(VAR_27->pbData, VAR_27->cbData,
     VAR_7, &VAR_30);
    if (VAR_29)
    {
        DWORD VAR_32, VAR_33;

        VAR_31 = VAR_13;
        switch (VAR_30)
        {
        case 130:
            VAR_28 = VAR_18;
            VAR_32 = VAR_4;
            VAR_33 = FUNC_9(VAR_0, VAR_15);
            if (!(VAR_21 &
             VAR_1))
            {
                FUNC_6(VAR_10);
                VAR_31 = VAR_12;
                goto end;
            }
            break;
        case 129:
            VAR_28 = VAR_16;
            VAR_32 = VAR_5;
            VAR_33 = FUNC_9(VAR_8, VAR_15);
            if (!(VAR_21 &
             VAR_2))
            {
                FUNC_6(VAR_10);
                VAR_31 = VAR_12;
                goto end;
            }
            break;
        case 128:
            VAR_28 = VAR_17;
            VAR_32 = VAR_6;
            VAR_33 = FUNC_9(VAR_9, VAR_15);
            if (!(VAR_21 &
             VAR_3))
            {
                FUNC_6(VAR_10);
                VAR_31 = VAR_12;
                goto end;
            }
            break;
        default:
            FUNC_6(VAR_10);
            VAR_31 = VAR_12;
            goto end;
        }
        if (VAR_22)
            *VAR_22 = VAR_14;
        if (VAR_23)
            *VAR_23 = VAR_32;
        if (VAR_24)
            *VAR_24 = FUNC_2(
             *(HCERTSTORE *)((const BYTE *)VAR_29 + VAR_33));
        if (VAR_25)
        {
            *VAR_25 = VAR_29;
            FUNC_3(FUNC_8(VAR_29));
        }
    }

end:
    if (VAR_28 && VAR_29)
        FUNC_4(FUNC_8(VAR_29));
    if (VAR_27 == &VAR_26)
        FUNC_5(VAR_27->pbData);
    FUNC_7("returning %d\n", VAR_31);
    return VAR_31;
}
