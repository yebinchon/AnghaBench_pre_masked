
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t len; int value; } ;
struct TYPE_6__ {unsigned char* data; size_t data_size; size_t return_size; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int,int *) ;
 int VAR_0 ;
 TYPE_1__ FUNC_2 (char*,int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int **) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (unsigned char*,size_t,unsigned char*,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned char*,int ,size_t const) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_10(int VAR_3)
{
    unsigned char VAR_4[VAR_0], VAR_5[VAR_0];
    const size_t VAR_6 = VAR_2[VAR_3].len;
    BIGNUM *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    OSSL_PARAM VAR_9 = FUNC_2("bn", VAR_1,
                                       ((void*)0), 0);
    int VAR_10 = 0;

    VAR_9.data = VAR_5;
    VAR_9.data_size = VAR_6;

    FUNC_9(VAR_4, VAR_2[VAR_3].value, VAR_6);
    if (!FUNC_7(VAR_7 = FUNC_1(VAR_2[VAR_3].value, (int)VAR_6, ((void*)0))))
        goto err;

    if (!FUNC_8(FUNC_4(&VAR_9, VAR_7))
        || !FUNC_6(VAR_5, VAR_9.return_size, VAR_4, VAR_9.return_size))
        goto err;
    VAR_9.data_size = VAR_9.return_size;
    if (!FUNC_8(FUNC_3(&VAR_9, &VAR_8))
        || !FUNC_5(VAR_7, VAR_8))
        goto err;

    VAR_10 = 1;
err:
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    return VAR_10;
}
