
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; scalar_t__ skip; int * err; int * reason; int * expected_err; int * data; int s; } ;
struct TYPE_5__ {int (* cleanup ) (TYPE_2__*) ;} ;
typedef TYPE_2__ EVP_TEST ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(EVP_TEST *VAR_0)
{
    FUNC_3(&VAR_0->s);
    FUNC_0();
    if (VAR_0->data != ((void*)0)) {
        if (VAR_0->meth != ((void*)0))
            VAR_0->meth->cleanup(VAR_0);
        FUNC_1(VAR_0->data);
        VAR_0->data = ((void*)0);
    }
    FUNC_1(VAR_0->expected_err);
    VAR_0->expected_err = ((void*)0);
    FUNC_1(VAR_0->reason);
    VAR_0->reason = ((void*)0);


    VAR_0->err = ((void*)0);
    VAR_0->skip = 0;
    VAR_0->meth = ((void*)0);
}
