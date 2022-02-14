
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int state; int suffix_free; int suffix; void* ex_arg; int prefix_free; int prefix; } ;
struct TYPE_6__ {int ex_free_func; int ex_func; } ;
typedef TYPE_1__ BIO_ASN1_EX_FUNCS ;
typedef TYPE_2__ BIO_ASN1_BUF_CTX ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (int *) ;
 long FUNC_1 (int *,int,long,void*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 long FUNC_4 (int *,TYPE_2__*,int ,int ) ;
 int FUNC_5 (int *,TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static long FUNC_6(BIO *VAR_3, int VAR_4, long VAR_5, void *VAR_6)
{
    BIO_ASN1_BUF_CTX *VAR_7;
    BIO_ASN1_EX_FUNCS *VAR_8;
    long VAR_9 = 1;
    BIO *VAR_10;

    VAR_7 = FUNC_2(VAR_3);
    if (VAR_7 == ((void*)0))
        return 0;
    VAR_10 = FUNC_3(VAR_3);
    switch (VAR_4) {

    case 129:
        VAR_8 = VAR_6;
        VAR_7->prefix = VAR_8->ex_func;
        VAR_7->prefix_free = VAR_8->ex_free_func;
        break;

    case 132:
        VAR_8 = VAR_6;
        VAR_8->ex_func = VAR_7->prefix;
        VAR_8->ex_free_func = VAR_7->prefix_free;
        break;

    case 128:
        VAR_8 = VAR_6;
        VAR_7->suffix = VAR_8->ex_func;
        VAR_7->suffix_free = VAR_8->ex_free_func;
        break;

    case 131:
        VAR_8 = VAR_6;
        VAR_8->ex_func = VAR_7->suffix;
        VAR_8->ex_free_func = VAR_7->suffix_free;
        break;

    case 130:
        VAR_7->ex_arg = VAR_6;
        break;

    case 133:
        *(void **)VAR_6 = VAR_7->ex_arg;
        break;

    case 134:
        if (VAR_10 == ((void*)0))
            return 0;


        if (VAR_7->state == VAR_1) {
            if (!FUNC_5(VAR_3, VAR_7, VAR_7->suffix,
                                   VAR_2, VAR_0))
                return 0;
        }

        if (VAR_7->state == VAR_2) {
            VAR_9 = FUNC_4(VAR_3, VAR_7, VAR_7->suffix_free,
                                    VAR_0);
            if (VAR_9 <= 0)
                return VAR_9;
        }

        if (VAR_7->state == VAR_0)
            return FUNC_1(VAR_10, VAR_4, VAR_5, VAR_6);
        else {
            FUNC_0(VAR_3);
            return 0;
        }

    default:
        if (VAR_10 == ((void*)0))
            return 0;
        return FUNC_1(VAR_10, VAR_4, VAR_5, VAR_6);

    }

    return VAR_9;
}
