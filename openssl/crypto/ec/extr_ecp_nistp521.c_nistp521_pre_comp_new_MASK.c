
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int references; int * lock; } ;
typedef TYPE_1__ NISTP521_PRE_COMP ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static NISTP521_PRE_COMP *FUNC_4(void)
{
    NISTP521_PRE_COMP *VAR_2 = FUNC_3(sizeof(*VAR_2));

    if (VAR_2 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return VAR_2;
    }

    VAR_2->references = 1;

    VAR_2->lock = FUNC_0();
    if (VAR_2->lock == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        FUNC_2(VAR_2);
        return ((void*)0);
    }
    return VAR_2;
}
