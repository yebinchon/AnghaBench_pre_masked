
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* bignum_data; int mt_blinding; int blinding; int prime_infos; int pss; int iqmp; int dmq1; int dmp1; int q; int p; int d; int e; int n; int lock; int ex_data; int engine; TYPE_1__* meth; int references; } ;
struct TYPE_8__ {int (* finish ) (TYPE_2__*) ;} ;
typedef TYPE_2__ RSA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int VAR_1 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_2__*) ;

void FUNC_13(RSA *VAR_2)
{
    int VAR_3;

    if (VAR_2 == ((void*)0))
        return;

    FUNC_3(&VAR_2->references, &VAR_3, VAR_2->lock);
    FUNC_9("RSA", VAR_2);
    if (VAR_3 > 0)
        return;
    FUNC_8(VAR_3 < 0);

    if (VAR_2->meth != ((void*)0) && VAR_2->meth->finish != ((void*)0))
        VAR_2->meth->finish(VAR_2);

    FUNC_6(VAR_2->engine);


    FUNC_5(VAR_0, VAR_2, &VAR_2->ex_data);

    FUNC_4(VAR_2->lock);

    FUNC_2(VAR_2->n);
    FUNC_2(VAR_2->e);
    FUNC_1(VAR_2->d);
    FUNC_1(VAR_2->p);
    FUNC_1(VAR_2->q);
    FUNC_1(VAR_2->dmp1);
    FUNC_1(VAR_2->dmq1);
    FUNC_1(VAR_2->iqmp);
    FUNC_10(VAR_2->pss);
    FUNC_11(VAR_2->prime_infos, VAR_1);
    FUNC_0(VAR_2->blinding);
    FUNC_0(VAR_2->mt_blinding);
    FUNC_7(VAR_2->bignum_data);
    FUNC_7(VAR_2);
}
