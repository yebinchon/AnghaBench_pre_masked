
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int exflag; int crit; } ;
typedef TYPE_1__ ioinfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(ioinfo *VAR_1)
{
    if(!(VAR_1->exflag & VAR_0)) {
        FUNC_1();
        if(!(VAR_1->exflag & VAR_0)) {
            FUNC_0(&VAR_1->crit);
            VAR_1->exflag |= VAR_0;
        }
        FUNC_2();
    }
}
