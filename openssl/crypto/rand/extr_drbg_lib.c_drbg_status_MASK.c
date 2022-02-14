
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_1__ RAND_DRBG ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(void)
{
    int VAR_1;
    RAND_DRBG *VAR_2 = FUNC_0();

    if (VAR_2 == ((void*)0))
        return 0;

    FUNC_1(VAR_2);
    VAR_1 = VAR_2->state == VAR_0 ? 1 : 0;
    FUNC_2(VAR_2);
    return VAR_1;
}
