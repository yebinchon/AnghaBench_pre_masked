
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* bytes ) (unsigned char*,int) ;} ;
typedef int BIGNUM ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int * VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_10 (unsigned char*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_11(unsigned char *VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    static int VAR_6 = 0;
    BIGNUM *VAR_7 = ((void*)0);

    if (VAR_2 == 0)
        return VAR_1->bytes(VAR_3, VAR_4);

    VAR_2 = 0;

    if (!FUNC_8(VAR_7 = FUNC_3())
        || !FUNC_7(VAR_6, FUNC_5(VAR_0))
        || !FUNC_9(FUNC_2(&VAR_7, VAR_0[VAR_6]))

        || !FUNC_6(FUNC_4(VAR_7), VAR_4)
        || !FUNC_9(FUNC_0(VAR_7, VAR_3, VAR_4)))
        goto err;

    VAR_6 = (VAR_6 + 1) % FUNC_5(VAR_0);
    VAR_5 = 1;
 err:
    FUNC_1(VAR_7);
    return VAR_5;
}
