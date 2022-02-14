
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* init ) (TYPE_1__*) ;} ;
struct TYPE_9__ {int references; TYPE_3__* meth; int * meth_data; int * lock; } ;
typedef int DSO_METHOD ;
typedef TYPE_1__ DSO ;


 int * FUNC_0 () ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static DSO *FUNC_9(DSO_METHOD *VAR_3)
{
    DSO *VAR_4;

    if (VAR_2 == ((void*)0)) {





        VAR_2 = FUNC_1();
    }
    VAR_4 = FUNC_5(sizeof(*VAR_4));
    if (VAR_4 == ((void*)0)) {
        FUNC_3(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_4->meth_data = FUNC_7();
    if (VAR_4->meth_data == ((void*)0)) {

        FUNC_3(VAR_0, VAR_1);
        FUNC_4(VAR_4);
        return ((void*)0);
    }
    VAR_4->meth = VAR_2;
    VAR_4->references = 1;
    VAR_4->lock = FUNC_0();
    if (VAR_4->lock == ((void*)0)) {
        FUNC_3(VAR_0, VAR_1);
        FUNC_6(VAR_4->meth_data);
        FUNC_4(VAR_4);
        return ((void*)0);
    }

    if ((VAR_4->meth->init != ((void*)0)) && !VAR_4->meth->init(VAR_4)) {
        FUNC_2(VAR_4);
        VAR_4 = ((void*)0);
    }

    return VAR_4;
}
