
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * hCertStore; } ;
typedef TYPE_1__* PCCERT_CONTEXT ;
typedef int BOOL ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static void FUNC_2(PCCERT_CONTEXT VAR_2)
{
    PCCERT_CONTEXT VAR_3 = ((void*)0);
    BOOL VAR_4 = VAR_0;
    unsigned VAR_5 = 0;

    FUNC_1(VAR_2->hCertStore != ((void*)0), "hCertStore == NULL\n");

    while((VAR_3 = FUNC_0(VAR_2->hCertStore, VAR_3))) {
        if(VAR_3 == VAR_2)
            VAR_4 = VAR_1;
        VAR_5++;
    }

    FUNC_1(VAR_5 == 4, "cert_cnt = %u\n", VAR_5);
    FUNC_1(VAR_4, "context does not contain cert itself\n");
}
