
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exflag; int crit; } ;
typedef TYPE_1__ ioinfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;

void FUNC_1(ioinfo *VAR_2)
{
    if(VAR_2!=&VAR_1 && VAR_2->exflag & VAR_0)
        FUNC_0(&VAR_2->crit);
}
