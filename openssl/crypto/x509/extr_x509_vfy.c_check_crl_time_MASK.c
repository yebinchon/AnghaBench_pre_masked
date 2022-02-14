
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_6__ {int current_crl_score; int * current_crl; TYPE_1__* param; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509_CRL ;
struct TYPE_5__ {int flags; int check_time; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(X509_STORE_CTX *VAR_7, X509_CRL *VAR_8, int VAR_9)
{
    time_t *VAR_10;
    int VAR_11;

    if (VAR_9)
        VAR_7->current_crl = VAR_8;
    if (VAR_7->param->flags & VAR_6)
        VAR_10 = &VAR_7->param->check_time;
    else if (VAR_7->param->flags & VAR_5)
        return 1;
    else
        VAR_10 = ((void*)0);

    VAR_11 = FUNC_2(FUNC_0(VAR_8), VAR_10);
    if (VAR_11 == 0) {
        if (!VAR_9)
            return 0;
        if (!FUNC_3(VAR_7, VAR_3))
            return 0;
    }

    if (VAR_11 > 0) {
        if (!VAR_9)
            return 0;
        if (!FUNC_3(VAR_7, VAR_2))
            return 0;
    }

    if (FUNC_1(VAR_8)) {
        VAR_11 = FUNC_2(FUNC_1(VAR_8), VAR_10);

        if (VAR_11 == 0) {
            if (!VAR_9)
                return 0;
            if (!FUNC_3(VAR_7, VAR_4))
                return 0;
        }

        if ((VAR_11 < 0) && !(VAR_7->current_crl_score & VAR_0)) {
            if (!VAR_9)
                return 0;
            if (!FUNC_3(VAR_7, VAR_1))
                return 0;
        }
    }

    if (VAR_9)
        VAR_7->current_crl = ((void*)0);

    return 1;
}
