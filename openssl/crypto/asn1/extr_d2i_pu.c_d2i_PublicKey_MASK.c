
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ec; int dsa; int * rsa; } ;
struct TYPE_10__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int *,unsigned char const**,long) ;
 int * FUNC_6 (int *,unsigned char const**,long) ;
 int FUNC_7 (int *,unsigned char const**,long) ;

EVP_PKEY *FUNC_8(int VAR_4, EVP_PKEY **VAR_5, const unsigned char **VAR_6,
                        long VAR_7)
{
    EVP_PKEY *VAR_8;

    if ((VAR_5 == ((void*)0)) || (*VAR_5 == ((void*)0))) {
        if ((VAR_8 = FUNC_3()) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_3);
            return ((void*)0);
        }
    } else
        VAR_8 = *VAR_5;

    if (VAR_4 != FUNC_2(VAR_8) && !FUNC_4(VAR_8, VAR_4)) {
        FUNC_0(VAR_0, VAR_3);
        goto err;
    }

    switch (FUNC_2(VAR_8)) {

    case 128:
        if ((VAR_8->pkey.rsa = FUNC_6(((void*)0), VAR_6, VAR_7)) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_2);
            goto err;
        }
        break;


    case 130:

        if (!FUNC_5(&VAR_8->pkey.dsa, VAR_6, VAR_7)) {
            FUNC_0(VAR_0, VAR_2);
            goto err;
        }
        break;


    case 129:
        if (!FUNC_7(&VAR_8->pkey.ec, VAR_6, VAR_7)) {
            FUNC_0(VAR_0, VAR_2);
            goto err;
        }
        break;

    default:
        FUNC_0(VAR_0, VAR_1);
        goto err;
    }
    if (VAR_5 != ((void*)0))
        (*VAR_5) = VAR_8;
    return VAR_8;
 err:
    if (VAR_5 == ((void*)0) || *VAR_5 != VAR_8)
        FUNC_1(VAR_8);
    return ((void*)0);
}
