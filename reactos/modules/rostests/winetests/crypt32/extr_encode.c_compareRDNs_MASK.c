
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cRDNAttr; int * rgRDNAttr; } ;
typedef size_t DWORD ;
typedef TYPE_1__ CERT_RDN ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(const CERT_RDN *VAR_0, const CERT_RDN *VAR_1)
{
    FUNC_1(VAR_1->cRDNAttr == VAR_0->cRDNAttr,
     "Expected %d RDN attrs, got %d\n", VAR_0->cRDNAttr, VAR_1->cRDNAttr);
    if (VAR_1->cRDNAttr)
    {
        DWORD VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_1->cRDNAttr; VAR_2++)
            FUNC_0(&VAR_0->rgRDNAttr[VAR_2], &VAR_1->rgRDNAttr[VAR_2]);
    }
}
