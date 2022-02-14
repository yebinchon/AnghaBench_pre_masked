
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t renegotiate_count; size_t byte_count; unsigned long renegotiate_timeout; unsigned long last_time; int num_renegotiates; int * ssl; } ;
typedef int SSL ;
typedef TYPE_1__ BIO_SSL ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,size_t,size_t*) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(BIO *VAR_3, char *VAR_4, size_t VAR_5, size_t *VAR_6)
{
    int VAR_7 = 1;
    BIO_SSL *VAR_8;
    SSL *VAR_9;
    int VAR_10 = 0;
    int VAR_11 = 0;

    if (VAR_4 == ((void*)0))
        return 0;
    VAR_8 = FUNC_1(VAR_3);
    VAR_9 = VAR_8->ssl;

    FUNC_0(VAR_3);

    VAR_7 = FUNC_8(VAR_9, VAR_4, VAR_5, VAR_6);

    switch (FUNC_6(VAR_9, VAR_7)) {
    case 136:
        if (VAR_8->renegotiate_count > 0) {
            VAR_8->byte_count += *VAR_6;
            if (VAR_8->byte_count > VAR_8->renegotiate_count) {
                VAR_8->byte_count = 0;
                VAR_8->num_renegotiates++;
                FUNC_7(VAR_9);
                VAR_11 = 1;
            }
        }
        if ((VAR_8->renegotiate_timeout > 0) && (!VAR_11)) {
            unsigned long VAR_12;

            VAR_12 = (unsigned long)FUNC_9(((void*)0));
            if (VAR_12 > VAR_8->last_time + VAR_8->renegotiate_timeout) {
                VAR_8->last_time = VAR_12;
                VAR_8->num_renegotiates++;
                FUNC_7(VAR_9);
            }
        }

        break;
    case 131:
        FUNC_2(VAR_3);
        break;
    case 130:
        FUNC_5(VAR_3);
        break;
    case 129:
        FUNC_4(VAR_3);
        VAR_10 = VAR_2;
        break;
    case 133:
        FUNC_4(VAR_3);
        VAR_10 = VAR_0;
        break;
    case 132:
        FUNC_4(VAR_3);
        VAR_10 = VAR_1;
        break;
    case 134:
    case 135:
    case 128:
    default:
        break;
    }

    FUNC_3(VAR_3, VAR_10);

    return VAR_7;
}
