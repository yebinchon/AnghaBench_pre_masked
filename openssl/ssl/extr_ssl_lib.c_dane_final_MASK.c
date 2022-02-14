
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mdpth; int pdpth; int * mtlsa; int * mcert; int * certs; int * trecs; } ;
typedef TYPE_1__ SSL_DANE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int (*) (int *)) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(SSL_DANE *VAR_1)
{
    FUNC_2(VAR_1->trecs, VAR_0);
    VAR_1->trecs = ((void*)0);

    FUNC_1(VAR_1->certs, FUNC_0);
    VAR_1->certs = ((void*)0);

    FUNC_0(VAR_1->mcert);
    VAR_1->mcert = ((void*)0);
    VAR_1->mtlsa = ((void*)0);
    VAR_1->mdpth = -1;
    VAR_1->pdpth = -1;
}
