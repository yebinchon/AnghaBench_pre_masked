
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int pbData; int cbData; } ;
struct TYPE_14__ {size_t cbData; int * pbData; } ;
struct TYPE_13__ {int cCertEncoded; int cCrlEncoded; TYPE_5__* rgCrlEncoded; TYPE_5__* rgCertEncoded; int member_0; } ;
struct TYPE_12__ {int pbCertEncoded; int cbCertEncoded; } ;
struct TYPE_11__ {int pbCrlEncoded; int cbCrlEncoded; } ;
typedef TYPE_1__* PCCRL_CONTEXT ;
typedef TYPE_2__* PCCERT_CONTEXT ;
typedef int HCERTSTORE ;
typedef size_t DWORD ;
typedef TYPE_3__ CRYPT_SIGNED_INFO ;
typedef TYPE_4__ CERT_BLOB ;
typedef int BOOL ;


 int FUNC_0 (TYPE_3__*,int *,size_t*) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,...) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_7(HCERTSTORE VAR_4,
 DWORD VAR_5, void *VAR_6)
{
    CERT_BLOB *VAR_7 = VAR_6;
    CRYPT_SIGNED_INFO VAR_8 = { 0 };
    PCCERT_CONTEXT VAR_9 = ((void*)0);
    PCCRL_CONTEXT VAR_10 = ((void*)0);
    DWORD VAR_11;
    BOOL VAR_12 = VAR_3;

    FUNC_6("(%d, %p)\n", VAR_7->pbData ? VAR_7->cbData : 0, VAR_7->pbData);

    do {
        VAR_9 = FUNC_2(VAR_4, VAR_9);
        if (VAR_9)
            VAR_8.cCertEncoded++;
    } while (VAR_9);
    if (VAR_8.cCertEncoded)
    {
        VAR_8.rgCertEncoded = FUNC_3(
         VAR_8.cCertEncoded * sizeof(CERT_BLOB));
        if (!VAR_8.rgCertEncoded)
        {
            FUNC_5(VAR_1);
            VAR_12 = VAR_2;
        }
        else
        {
            DWORD VAR_13 = 0;

            do {
                VAR_9 = FUNC_2(VAR_4, VAR_9);
                if (VAR_9)
                {
                    VAR_8.rgCertEncoded[VAR_13].cbData = VAR_9->cbCertEncoded;
                    VAR_8.rgCertEncoded[VAR_13].pbData = VAR_9->pbCertEncoded;
                    VAR_13++;
                }
            } while (VAR_9);
        }
    }

    do {
        VAR_10 = FUNC_1(VAR_4, VAR_10);
        if (VAR_10)
            VAR_8.cCrlEncoded++;
    } while (VAR_10);
    if (VAR_8.cCrlEncoded)
    {
        VAR_8.rgCrlEncoded = FUNC_3(
         VAR_8.cCrlEncoded * sizeof(CERT_BLOB));
        if (!VAR_8.rgCrlEncoded)
        {
            FUNC_5(VAR_1);
            VAR_12 = VAR_2;
        }
        else
        {
            DWORD VAR_14 = 0;

            do {
                VAR_10 = FUNC_1(VAR_4, VAR_10);
                if (VAR_10)
                {
                    VAR_8.rgCrlEncoded[VAR_14].cbData = VAR_10->cbCrlEncoded;
                    VAR_8.rgCrlEncoded[VAR_14].pbData = VAR_10->pbCrlEncoded;
                    VAR_14++;
                }
            } while (VAR_10);
        }
    }
    if (VAR_12)
    {
        VAR_12 = FUNC_0(&VAR_8, ((void*)0), &VAR_11);
        if (VAR_12)
        {
            if (!VAR_7->pbData)
                VAR_7->cbData = VAR_11;
            else if (VAR_7->cbData < VAR_11)
            {
                VAR_7->cbData = VAR_11;
                FUNC_5(VAR_0);
                VAR_12 = VAR_2;
            }
            else
            {
                VAR_7->cbData = VAR_11;
                VAR_12 = FUNC_0(&VAR_8, VAR_7->pbData,
                 &VAR_7->cbData);
            }
        }
    }
    FUNC_4(VAR_8.rgCertEncoded);
    FUNC_4(VAR_8.rgCrlEncoded);
    FUNC_6("returning %d\n", VAR_12);
    return VAR_12;
}
