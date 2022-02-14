
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_type; size_t data_size; scalar_t__ return_size; void* data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int BIGNUM ;


 int FUNC_0 (int *,void*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,size_t,size_t*,char const*) ;




 int FUNC_3 (void*,char const*,size_t) ;
 int FUNC_4 (void*,char const*,size_t) ;

__attribute__((used)) static int FUNC_5(OSSL_PARAM *VAR_0, const OSSL_PARAM *VAR_1,
                               const char *VAR_2, size_t VAR_3, int VAR_4,
                               void *VAR_5, size_t VAR_6, BIGNUM *VAR_7)
{
    if (VAR_5 == ((void*)0))
        return 0;

    if (VAR_6 > 0) {
        switch (VAR_1->data_type) {
        case 131:
        case 129:
            FUNC_0(VAR_7, VAR_5, VAR_6);







            if (VAR_1->data_type == 131
                && FUNC_1(VAR_7)) {
                unsigned char *VAR_8;
                size_t VAR_9 = VAR_6;

                for (VAR_8 = VAR_5; VAR_9-- > 0; VAR_8++)
                    *VAR_8 ^= 0xFF;
            }
            break;
        case 128:
            FUNC_4(VAR_5, VAR_2, VAR_6);
            break;
        case 130:
            if (VAR_4) {
                size_t VAR_10 = 0;

                if (!FUNC_2(VAR_5, VAR_6, &VAR_10, VAR_2))
                    return 0;
            } else {
                FUNC_3(VAR_5, VAR_2, VAR_6);
            }
            break;
        }
    }

    *VAR_0 = *VAR_1;
    VAR_0->data = VAR_5;
    VAR_0->data_size = VAR_6;
    VAR_0->return_size = 0;

    return 1;
}
