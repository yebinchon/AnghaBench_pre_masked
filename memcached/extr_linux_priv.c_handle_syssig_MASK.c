
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sival_int; } ;
struct TYPE_5__ {int si_syscall; TYPE_1__ si_value; } ;
typedef TYPE_2__ siginfo_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int* VAR_1 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,int*,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_2, siginfo_t *VAR_3, void *VAR_4) {





    int VAR_5 = VAR_3->si_value.sival_int;






    VAR_1[39] = (VAR_5 / 100) % 10 + '0';
    VAR_1[40] = (VAR_5 / 10) % 10 + '0';
    VAR_1[41] = VAR_5 % 10 + '0';
    if (FUNC_2(2, VAR_1, FUNC_1(VAR_1)) == -1) {



    }




    FUNC_0(VAR_0);
}
