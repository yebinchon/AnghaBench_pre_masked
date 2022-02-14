
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_3__ {int * certs; } ;
typedef TYPE_1__ OCSP_BASICRESP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(OCSP_BASICRESP *VAR_0, X509 *VAR_1)
{
    if (VAR_0->certs == ((void*)0)
        && (VAR_0->certs = FUNC_1()) == ((void*)0))
        return 0;

    if (!FUNC_2(VAR_0->certs, VAR_1))
        return 0;
    FUNC_0(VAR_1);
    return 1;
}
