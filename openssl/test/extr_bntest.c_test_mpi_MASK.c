
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int scratch ;
struct TYPE_3__ {int mpi_len; int mpi; int base10; } ;
typedef TYPE_1__ MPITEST ;
typedef int BIGNUM ;


 int FUNC_0 (int **,int ) ;
 size_t FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,size_t,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int *,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (size_t,size_t) ;
 int FUNC_9 (size_t,int) ;
 int FUNC_10 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_11(int VAR_1)
{
    uint8_t VAR_2[8];
    const MPITEST *VAR_3 = &VAR_0[VAR_1];
    size_t VAR_4, VAR_5;
    BIGNUM *VAR_6 = ((void*)0);
    BIGNUM *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (!FUNC_7(VAR_6 = FUNC_4())
            || !FUNC_10(FUNC_0(&VAR_6, VAR_3->base10)))
        goto err;
    VAR_4 = FUNC_1(VAR_6, ((void*)0));
    if (!FUNC_9(VAR_4, sizeof(VAR_2)))
        goto err;

    if (!FUNC_8(VAR_5 = FUNC_1(VAR_6, VAR_2), VAR_4)
            || !FUNC_6(VAR_3->mpi, VAR_3->mpi_len, VAR_2, VAR_4))
        goto err;

    if (!FUNC_7(VAR_7 = FUNC_3(VAR_2, VAR_4, ((void*)0))))
        goto err;

    if (!FUNC_5(VAR_6, VAR_7)) {
        FUNC_2(VAR_7);
        goto err;
    }
    FUNC_2(VAR_7);

    VAR_8 = 1;
 err:
    FUNC_2(VAR_6);
    return VAR_8;
}
