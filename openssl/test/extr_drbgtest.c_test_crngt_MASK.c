
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct s_drgb_types {int flags; int nid; } ;
typedef int buff ;
struct TYPE_14__ {int min_entropylen; } ;
typedef TYPE_1__ RAND_DRBG ;
typedef TYPE_1__ OPENSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,int,int ,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int *,int *,int *,int *) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int,size_t,scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct s_drgb_types* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(int VAR_12)
{
    const struct s_drgb_types *VAR_13 = VAR_6 + VAR_12 / VAR_5;
    RAND_DRBG *VAR_14 = ((void*)0);
    unsigned char VAR_15[100];
    size_t VAR_16;
    int VAR_17 = 0;
    int VAR_18;
    OPENSSL_CTX *VAR_19 = FUNC_1();

    if (!FUNC_10(VAR_19))
        return 0;
    if (!FUNC_10(VAR_14 = FUNC_5(VAR_19, VAR_13->nid, VAR_13->flags, ((void*)0))))
        goto err;
    VAR_16 = (VAR_14->min_entropylen + VAR_0 - 1) / VAR_0;
    VAR_1 = VAR_12 % VAR_5;
    VAR_4 = 0;
    VAR_3 = &VAR_2;

    if (!FUNC_11(FUNC_7(VAR_14, &VAR_8,
                                           &VAR_7,
                                           &VAR_11,
                                           &VAR_10)))
        goto err;

    VAR_18 = VAR_1 == 0 || VAR_1 > VAR_16;
    if (!FUNC_8(FUNC_4(VAR_14, ((void*)0), 0), VAR_18))
        goto err;
    if (!VAR_18)
        goto fin;
    if (!FUNC_11(FUNC_3(VAR_14, VAR_15, sizeof(VAR_15), 0, ((void*)0), 0)))
        goto err;

    VAR_18 = VAR_1 == 0 || VAR_1 > 2 * VAR_16;
    if (!FUNC_8(FUNC_6(VAR_14, ((void*)0), 0, 0), VAR_18))
        goto err;
    if (!VAR_18)
        goto fin;
    if (!FUNC_11(FUNC_3(VAR_14, VAR_15, sizeof(VAR_15), 0, ((void*)0), 0)))
        goto err;

fin:
    VAR_17 = 1;
err:
    if (!VAR_17)
        FUNC_9("DRBG %zd case %zd block %zd", VAR_12 / VAR_5,
                  VAR_1, VAR_4);
    FUNC_12(VAR_14);
    FUNC_2(VAR_14);
    VAR_3 = &VAR_9;
    FUNC_0(VAR_19);
    return VAR_17;
}
