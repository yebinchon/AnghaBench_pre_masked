
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pidfile; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 () ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(void) {


    if (!VAR_1.pidfile) VAR_1.pidfile = FUNC_4(VAR_0);


    FILE *VAR_2 = FUNC_1(VAR_1.pidfile,"w");
    if (VAR_2) {
        FUNC_2(VAR_2,"%d\n",(int)FUNC_3());
        FUNC_0(VAR_2);
    }
}
