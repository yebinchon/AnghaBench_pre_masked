
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ valid; int len; int der; } ;
typedef int EC_KEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_6(int VAR_1)
{
    int VAR_2 = 0;
    BIO *VAR_3 = ((void*)0);
    EC_KEY *VAR_4 = ((void*)0);

    if (!FUNC_3(VAR_3 = FUNC_1(VAR_0[VAR_1].der,
                                        VAR_0[VAR_1].len)))
        goto err;
    VAR_4 = FUNC_5(VAR_3, ((void*)0));
    VAR_2 = (VAR_0[VAR_1].valid && FUNC_3(VAR_4))
          || FUNC_4(VAR_4);
err:
    FUNC_2(VAR_4);
    FUNC_0(VAR_3);
    return VAR_2;
}
