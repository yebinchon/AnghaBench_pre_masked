
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * keyid; } ;
typedef TYPE_2__ X509_CERT_AUX ;
struct TYPE_9__ {TYPE_1__* aux; } ;
typedef TYPE_3__ X509 ;
struct TYPE_7__ {int * keyid; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;

int FUNC_4(X509 *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
    X509_CERT_AUX *VAR_3;
    if (!VAR_1) {
        if (!VAR_0 || !VAR_0->aux || !VAR_0->aux->keyid)
            return 1;
        FUNC_0(VAR_0->aux->keyid);
        VAR_0->aux->keyid = ((void*)0);
        return 1;
    }
    if ((VAR_3 = FUNC_3(VAR_0)) == ((void*)0))
        return 0;
    if (VAR_3->keyid == ((void*)0)
        && (VAR_3->keyid = FUNC_1()) == ((void*)0))
        return 0;
    return FUNC_2(VAR_3->keyid, VAR_1, VAR_2);
}
