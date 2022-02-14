
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cRDN; int * rgRDN; } ;
typedef size_t DWORD ;
typedef TYPE_1__ CERT_NAME_INFO ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(const CERT_NAME_INFO *VAR_0,
 const CERT_NAME_INFO *VAR_1)
{
    FUNC_1(VAR_1->cRDN == VAR_0->cRDN, "Expected %d RDNs, got %d\n",
     VAR_0->cRDN, VAR_1->cRDN);
    if (VAR_1->cRDN)
    {
        DWORD VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_1->cRDN; VAR_2++)
            FUNC_0(&VAR_0->rgRDN[VAR_2], &VAR_1->rgRDN[VAR_2]);
    }
}
