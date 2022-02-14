
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int type; int * engine; int * pmeth_engine; } ;
struct TYPE_13__ {char const* algorithm; char const* propquery; TYPE_1__ const* pmeth; TYPE_3__* pkey; int operation; int * engine; int * libctx; } ;
struct TYPE_12__ {scalar_t__ (* init ) (TYPE_2__*) ;} ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ EVP_PKEY_METHOD ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef TYPE_3__ EVP_PKEY ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 char* FUNC_8 (int) ;
 TYPE_2__* FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static EVP_PKEY_CTX *FUNC_12(OPENSSL_CTX *VAR_5,
                                 EVP_PKEY *VAR_6, ENGINE *VAR_7,
                                 const char *VAR_8, const char *VAR_9,
                                 int VAR_10)
{
    EVP_PKEY_CTX *VAR_11;
    const EVP_PKEY_METHOD *VAR_12 = ((void*)0);





    if (VAR_6 == ((void*)0) && VAR_7 == ((void*)0) && VAR_10 == -1)
        goto common;



    if (VAR_10 == -1) {
        if (VAR_6 == ((void*)0))
            return 0;
        VAR_10 = VAR_6->type;
    }
    if (!FUNC_10(VAR_7 == ((void*)0) || VAR_8 == ((void*)0)))
        return ((void*)0);
    if (VAR_7 == ((void*)0))
        VAR_8 = FUNC_8(VAR_10);
    VAR_9 = ((void*)0);
    VAR_5 = ((void*)0);


    if (VAR_7 == ((void*)0) && VAR_6 != ((void*)0))
        VAR_7 = VAR_6->pmeth_engine != ((void*)0) ? VAR_6->pmeth_engine : VAR_6->engine;

    if (VAR_7) {
        if (!FUNC_3(VAR_7)) {
            FUNC_7(VAR_2, VAR_0);
            return ((void*)0);
        }
    } else {
        VAR_7 = FUNC_2(VAR_10);
    }





    if (VAR_7)
        VAR_12 = FUNC_1(VAR_7, VAR_10);
    else

        VAR_12 = FUNC_5(VAR_10);

    if (VAR_12 == ((void*)0)) {

        FUNC_0(VAR_7);

        FUNC_7(VAR_2, VAR_4);
        return ((void*)0);
    }


 common:
    VAR_11 = FUNC_9(sizeof(*VAR_11));
    if (VAR_11 == ((void*)0)) {

        FUNC_0(VAR_7);

        FUNC_7(VAR_2, VAR_1);
        return ((void*)0);
    }
    VAR_11->libctx = VAR_5;
    VAR_11->algorithm = VAR_8;
    VAR_11->propquery = VAR_9;
    VAR_11->engine = VAR_7;
    VAR_11->pmeth = VAR_12;
    VAR_11->operation = VAR_3;
    VAR_11->pkey = VAR_6;
    if (VAR_6 != ((void*)0))
        FUNC_6(VAR_6);

    if (VAR_12 != ((void*)0) && VAR_12->init != ((void*)0)) {
        if (VAR_12->init(VAR_11) <= 0) {
            VAR_11->pmeth = ((void*)0);
            FUNC_4(VAR_11);
            return ((void*)0);
        }
    }

    return VAR_11;
}
