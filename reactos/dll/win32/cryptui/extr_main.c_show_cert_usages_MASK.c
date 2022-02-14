
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct edit_cert_data {scalar_t__ imageList; int cert; } ;
struct TYPE_10__ {scalar_t__ cx; int mask; } ;
struct TYPE_9__ {size_t cUsageIdentifier; int * rgpszUsageIdentifier; } ;
struct TYPE_8__ {scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef scalar_t__ PurposeSelection ;
typedef TYPE_2__* PCERT_ENHKEY_USAGE ;
typedef scalar_t__ PCCRYPT_OID_INFO ;
typedef int PCCERT_CONTEXT ;
typedef TYPE_3__ LVCOLUMNW ;
typedef int LPARAM ;
typedef int HWND ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*,size_t*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_1__*) ;
 TYPE_2__* FUNC_5 (int ,int ,size_t) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,scalar_t__,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_12(HWND VAR_15, struct edit_cert_data *VAR_16)
{
    PCCERT_CONTEXT VAR_17 = VAR_16->cert;
    HWND VAR_18 = FUNC_2(VAR_15, VAR_6);
    PCERT_ENHKEY_USAGE VAR_19;
    DWORD VAR_20;
    RECT VAR_21;
    LVCOLUMNW VAR_22;
    PurposeSelection VAR_23 = VAR_13;

    FUNC_4(VAR_18, &VAR_21);
    VAR_22.mask = VAR_8;
    VAR_22.cx = VAR_21.right - VAR_21.left;
    FUNC_7(VAR_18, VAR_9, 0, (LPARAM)&VAR_22);
    FUNC_7(VAR_18, VAR_10, VAR_11, (LPARAM)VAR_16->imageList);






    if (FUNC_0(VAR_17, VAR_2,
     ((void*)0), &VAR_20))
    {
        VAR_19 = FUNC_5(FUNC_3(), 0, VAR_20);
        if (!FUNC_0(VAR_17,
         VAR_2, VAR_19, &VAR_20))
        {
            FUNC_6(FUNC_3(), 0, VAR_19);
            VAR_19 = ((void*)0);
        }
        else if (VAR_19->cUsageIdentifier)
            VAR_23 = VAR_14;
        else
            VAR_23 = VAR_12;
    }
    else if (FUNC_0(VAR_17, VAR_1,
     ((void*)0), &VAR_20))
    {
        VAR_19 = FUNC_5(FUNC_3(), 0, VAR_20);
        if (!FUNC_0(VAR_17,
         VAR_1, VAR_19, &VAR_20))
        {
            FUNC_6(FUNC_3(), 0, VAR_19);
            VAR_19 = ((void*)0);
        }
        else if (VAR_19->cUsageIdentifier)
            VAR_23 = VAR_13;
        else
            VAR_23 = VAR_12;
    }
    else
    {
        VAR_23 = VAR_13;
        VAR_19 = ((void*)0);
    }
    if (VAR_19)
    {
        DWORD VAR_24;

        for (VAR_24 = 0; VAR_24 < VAR_19->cUsageIdentifier; VAR_24++)
        {
            PCCRYPT_OID_INFO VAR_25 = FUNC_1(VAR_4,
             VAR_19->rgpszUsageIdentifier[VAR_24], VAR_3);

            if (VAR_25)
                FUNC_8(VAR_18, VAR_25, VAR_5);
            else
                FUNC_10(VAR_15, VAR_19->rgpszUsageIdentifier[VAR_24]);
        }
        FUNC_6(FUNC_3(), 0, VAR_19);
    }
    else
        FUNC_9(VAR_18, VAR_5);
    FUNC_11(VAR_15, VAR_23);
    FUNC_7(FUNC_2(VAR_15, VAR_7 + VAR_23),
     VAR_0, 0, 0);
}
