
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data_type; size_t data_size; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int BIGNUM ;


 int FUNC_0 (int **,char const*) ;
 int FUNC_1 (int **,char const*) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;




 TYPE_1__* FUNC_6 (TYPE_1__ const*,char const*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_9(const OSSL_PARAM *VAR_2, const char *VAR_3,
                             const char *VAR_4, size_t VAR_5,

                             const OSSL_PARAM **VAR_6, int *VAR_7,
                             size_t *VAR_8, BIGNUM **VAR_9)
{
    const OSSL_PARAM *VAR_10;





    *VAR_7 = FUNC_8(VAR_3, "hex", 3) == 0;

    if (*VAR_7)
        VAR_3 += 3;

    VAR_10 = *VAR_6 = FUNC_6(VAR_2, VAR_3);
    if (VAR_10 == ((void*)0))
        return 0;

    switch (VAR_10->data_type) {
    case 131:
    case 129:
        if (*VAR_7)
            FUNC_1(VAR_9, VAR_4);
        else
            FUNC_0(VAR_9, VAR_4);

        if (*VAR_9 == ((void*)0))
            return 0;
        if (VAR_10->data_type == 131 && FUNC_2(*VAR_9)
            && !FUNC_4(*VAR_9, 1)) {
            return 0;
        }

        *VAR_8 = FUNC_3(*VAR_9);





        if (VAR_10->data_size > 0) {
            if (*VAR_8 >= VAR_10->data_size) {
                FUNC_5(0, VAR_0);

                return 0;
            }

            *VAR_8 = VAR_10->data_size;
        }
        break;
    case 128:
        if (*VAR_7) {
            FUNC_5(0, VAR_1);
            return 0;
        }
        *VAR_8 = FUNC_7(VAR_4) + 1;
        break;
    case 130:
        if (*VAR_7) {
            *VAR_8 = FUNC_7(VAR_4) >> 1;
        } else {
            *VAR_8 = VAR_5;
        }
        break;
    }

    return 1;
}
