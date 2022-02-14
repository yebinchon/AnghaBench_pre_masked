
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct algorithm_data_st {int operation_id; int data; int (* fn ) (int *,TYPE_1__ const*,int,int ) ;} ;
struct TYPE_4__ {int * algorithm_names; } ;
typedef int OSSL_PROVIDER ;
typedef TYPE_1__ OSSL_ALGORITHM ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,TYPE_1__ const*,int,int ) ;

__attribute__((used)) static int FUNC_2(OSSL_PROVIDER *VAR_1, void *VAR_2)
{
    struct algorithm_data_st *VAR_3 = VAR_2;
    int VAR_4 = 0;
    int VAR_5 = 1;
    int VAR_6 = VAR_0;
    int VAR_7;
    int VAR_8 = 0;

    if (VAR_3->operation_id != 0)
        VAR_5 = VAR_6 = VAR_3->operation_id;

    for (VAR_7 = VAR_5;
         VAR_7 <= VAR_6;
         VAR_7++) {
        const OSSL_ALGORITHM *VAR_9 =
            FUNC_0(VAR_1, VAR_3->operation_id,
                                          &VAR_4);

        if (VAR_9 == ((void*)0))
            break;

        VAR_8 = 1;
        while (VAR_9->algorithm_names != ((void*)0)) {
            const OSSL_ALGORITHM *VAR_10 = VAR_9++;

            VAR_3->fn(VAR_1, VAR_10, VAR_4, VAR_3->data);
        }
    }

    return VAR_8;
}
