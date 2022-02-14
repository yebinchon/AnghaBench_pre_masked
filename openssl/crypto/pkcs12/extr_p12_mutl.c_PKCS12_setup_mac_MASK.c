
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_8__ {int dinfo; TYPE_1__* salt; int * iter; } ;
struct TYPE_7__ {TYPE_4__* mac; } ;
struct TYPE_6__ {int length; int * data; } ;
typedef TYPE_2__ PKCS12 ;
typedef int EVP_MD ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int VAR_4 ;
 int FUNC_9 (int *,int ,int ,int *) ;
 int FUNC_10 (int ,int **,int *) ;
 int FUNC_11 (int *,unsigned char*,int) ;

int FUNC_12(PKCS12 *VAR_5, int VAR_6, unsigned char *VAR_7, int VAR_8,
                     const EVP_MD *VAR_9)
{
    X509_ALGOR *VAR_10;

    FUNC_5(VAR_5->mac);
    VAR_5->mac = ((void*)0);

    if ((VAR_5->mac = FUNC_6()) == ((void*)0))
        return VAR_1;
    if (VAR_6 > 1) {
        if ((VAR_5->mac->iter = FUNC_0()) == ((void*)0)) {
            FUNC_7(VAR_2, VAR_0);
            return 0;
        }
        if (!FUNC_1(VAR_5->mac->iter, VAR_6)) {
            FUNC_7(VAR_2, VAR_0);
            return 0;
        }
    }
    if (!VAR_8)
        VAR_8 = VAR_3;
    if ((VAR_5->mac->salt->data = FUNC_4(VAR_8)) == ((void*)0)) {
        FUNC_7(VAR_2, VAR_0);
        return 0;
    }
    VAR_5->mac->salt->length = VAR_8;
    if (!VAR_7) {
        if (FUNC_8(VAR_5->mac->salt->data, VAR_8) <= 0)
            return 0;
    } else
        FUNC_11(VAR_5->mac->salt->data, VAR_7, VAR_8);
    FUNC_10(VAR_5->mac->dinfo, &VAR_10, ((void*)0));
    if (!FUNC_9(VAR_10, FUNC_3(FUNC_2(VAR_9)),
                         VAR_4, ((void*)0))) {
        FUNC_7(VAR_2, VAR_0);
        return 0;
    }

    return 1;
}
