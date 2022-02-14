
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ handle; int crit; } ;
typedef TYPE_1__ ioinfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_3 ;
 int * FUNC_3 () ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static inline ioinfo* FUNC_7(int *VAR_4)
{
    int VAR_5;

    *VAR_4 = -1;
    for(VAR_5=0; VAR_5<VAR_2; VAR_5++)
    {
        ioinfo *VAR_6 = FUNC_5(VAR_5);

        if(VAR_6 == &VAR_3)
        {
            if(!FUNC_4(VAR_5))
                return &VAR_3;
            VAR_6 = FUNC_5(VAR_5);
        }

        FUNC_6(VAR_6);
        if(FUNC_1(&VAR_6->crit))
        {
            if(VAR_6->handle == VAR_1)
            {
                *VAR_4 = VAR_5;
                return VAR_6;
            }
            FUNC_0(&VAR_6->crit);
        }
    }

    FUNC_2(":files exhausted!\n");
    *FUNC_3() = VAR_0;
    return &VAR_3;
}
