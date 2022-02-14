
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int cbSize; } ;
typedef TYPE_1__* PCERT_SIMPLE_CHAIN ;
typedef int PCCERT_CONTEXT ;
typedef int LPFILETIME ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef int CertificateChainEngine ;
typedef int CERT_SIMPLE_CHAIN ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (char*,int *,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_8(CertificateChainEngine *VAR_1,
 HCERTSTORE VAR_2, PCCERT_CONTEXT VAR_3, LPFILETIME VAR_4, DWORD VAR_5,
 PCERT_SIMPLE_CHAIN *VAR_6)
{
    BOOL VAR_7 = VAR_0;
    PCERT_SIMPLE_CHAIN VAR_8;

    FUNC_5("(%p, %p, %p, %s)\n", VAR_1, VAR_2, VAR_3, FUNC_6(VAR_4));

    VAR_8 = FUNC_4(sizeof(CERT_SIMPLE_CHAIN));
    if (VAR_8)
    {
        FUNC_7(VAR_8, 0, sizeof(CERT_SIMPLE_CHAIN));
        VAR_8->cbSize = sizeof(CERT_SIMPLE_CHAIN);
        VAR_7 = FUNC_0(VAR_1, VAR_8, VAR_3, 0);
        if (VAR_7)
        {
            VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_5, VAR_8);
            if (VAR_7)
                FUNC_2(VAR_1, VAR_8, VAR_4);
        }
        if (!VAR_7)
        {
            FUNC_3(VAR_8);
            VAR_8 = ((void*)0);
        }
        *VAR_6 = VAR_8;
    }
    return VAR_7;
}
