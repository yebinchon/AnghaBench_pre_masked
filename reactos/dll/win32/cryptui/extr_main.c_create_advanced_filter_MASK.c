
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {size_t cUsageIdentifier; struct TYPE_16__* rgpszUsageIdentifier; } ;
struct TYPE_15__ {scalar_t__ pszOID; } ;
typedef TYPE_1__* PCCRYPT_OID_INFO ;
typedef TYPE_2__* LPSTR ;
typedef size_t DWORD ;
typedef TYPE_2__ CERT_ENHKEY_USAGE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int,TYPE_1__***) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 (TYPE_2__,scalar_t__) ;

__attribute__((used)) static CERT_ENHKEY_USAGE *FUNC_8(void)
{
    CERT_ENHKEY_USAGE *VAR_3 = FUNC_1(FUNC_0(),
     VAR_1, sizeof(CERT_ENHKEY_USAGE));

    if (VAR_3)
    {
        PCCRYPT_OID_INFO *VAR_4;

        if (FUNC_3(1, &VAR_4))
        {
            LPSTR VAR_5;

            if ((VAR_5 = FUNC_6()))
            {
                CERT_ENHKEY_USAGE *VAR_6 =
                 FUNC_5(VAR_5);

                if (VAR_6)
                {
                    PCCRYPT_OID_INFO *VAR_7;

                    for (VAR_7 = VAR_4; VAR_3 && *VAR_7; VAR_7++)
                    {
                        DWORD VAR_8;
                        BOOL VAR_9 = VAR_0;

                        for (VAR_8 = 0; !VAR_9 &&
                         VAR_8 < VAR_6->cUsageIdentifier; VAR_8++)
                            if (!FUNC_7(VAR_6->rgpszUsageIdentifier[VAR_8],
                             (*VAR_7)->pszOID))
                                VAR_9 = VAR_2;
                        if (!VAR_9)
                            VAR_3 = FUNC_4(VAR_3,
                             (LPSTR)(*VAR_7)->pszOID);
                    }



                    FUNC_2(FUNC_0(), 0,
                     VAR_6->rgpszUsageIdentifier);
                    FUNC_2(FUNC_0(), 0, VAR_6);
                }
                FUNC_2(FUNC_0(), 0, VAR_5);
            }
            FUNC_3(2, &VAR_4);
        }
    }
    return VAR_3;
}
