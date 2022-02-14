
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UI_METHOD ;
struct TYPE_6__ {int ex_data; int const* meth; int * lock; } ;
typedef TYPE_1__ UI ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_2 ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (int ,int ) ;

UI *FUNC_7(const UI_METHOD *VAR_3)
{
    UI *VAR_4 = FUNC_3(sizeof(*VAR_4));

    if (VAR_4 == ((void*)0)) {
        FUNC_6(VAR_2, VAR_1);
        return ((void*)0);
    }

    VAR_4->lock = FUNC_0();
    if (VAR_4->lock == ((void*)0)) {
        FUNC_6(VAR_2, VAR_1);
        FUNC_2(VAR_4);
        return ((void*)0);
    }

    if (VAR_3 == ((void*)0))
        VAR_3 = FUNC_4();
    if (VAR_3 == ((void*)0))
        VAR_3 = FUNC_5();
    VAR_4->meth = VAR_3;

    if (!FUNC_1(VAR_0, VAR_4, &VAR_4->ex_data)) {
        FUNC_2(VAR_4);
        return ((void*)0);
    }
    return VAR_4;
}
