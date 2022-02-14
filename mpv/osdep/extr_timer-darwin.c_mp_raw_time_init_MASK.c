
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mach_timebase_info {scalar_t__ denom; scalar_t__ numer; } ;


 int FUNC_0 (struct mach_timebase_info*) ;
 double VAR_0 ;

void FUNC_1(void)
{
    struct mach_timebase_info VAR_1;

    FUNC_0(&VAR_1);
    VAR_0 = (double)VAR_1.numer / (double)VAR_1.denom * 1e-9;
}
