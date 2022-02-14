
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int battery_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

battery_status_t FUNC_2(void)
{
    if (VAR_4&(1<<VAR_5)) {

        return FUNC_0() ? VAR_0 : VAR_2;
    } else {

        return FUNC_1() ? VAR_3 : VAR_1;
    }
}
