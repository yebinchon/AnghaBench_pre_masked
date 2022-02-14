
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_3__ {int * hash_algo; } ;
typedef TYPE_1__ TS_MSG_IMPRINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(TS_MSG_IMPRINT *VAR_2, X509_ALGOR *VAR_3)
{
    X509_ALGOR *VAR_4;

    if (VAR_2->hash_algo == VAR_3)
        return 1;
    VAR_4 = FUNC_1(VAR_3);
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return 0;
    }
    FUNC_2(VAR_2->hash_algo);
    VAR_2->hash_algo = VAR_4;
    return 1;
}
