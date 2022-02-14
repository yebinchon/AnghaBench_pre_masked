
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * alias; } ;
typedef TYPE_2__ X509_CERT_AUX ;
struct TYPE_9__ {TYPE_1__* aux; } ;
typedef TYPE_3__ X509 ;
struct TYPE_7__ {int * alias; } ;


 int FUNC_0 (int *,unsigned char const*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;

int FUNC_4(X509 *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
    X509_CERT_AUX *VAR_3;
    if (!VAR_1) {
        if (!VAR_0 || !VAR_0->aux || !VAR_0->aux->alias)
            return 1;
        FUNC_1(VAR_0->aux->alias);
        VAR_0->aux->alias = ((void*)0);
        return 1;
    }
    if ((VAR_3 = FUNC_3(VAR_0)) == ((void*)0))
        return 0;
    if (VAR_3->alias == ((void*)0) && (VAR_3->alias = FUNC_2()) == ((void*)0))
        return 0;
    return FUNC_0(VAR_3->alias, VAR_1, VAR_2);
}
