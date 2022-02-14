
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * si_addr; } ;
typedef TYPE_1__ siginfo_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(int VAR_2, siginfo_t *VAR_3, void *VAR_4)
{
 (void)VAR_2;
 (void)VAR_4;
 VAR_0 = VAR_3 ? VAR_3->si_addr : ((void*)0);
 FUNC_0(VAR_1, 1);
}
