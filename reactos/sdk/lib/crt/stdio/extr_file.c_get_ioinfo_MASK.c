
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int crit; } ;
typedef TYPE_1__ ioinfo ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

ioinfo* FUNC_3(int VAR_1)
{
    ioinfo *VAR_2 = FUNC_1(VAR_1);
    if(VAR_2 == &VAR_0)
        return VAR_2;
    FUNC_2(VAR_2);
    FUNC_0(&VAR_2->crit);
    return VAR_2;
}
