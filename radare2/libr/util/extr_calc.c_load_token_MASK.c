
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* calc_buf; int * calc_err; int calc_len; scalar_t__ calc_i; } ;
typedef TYPE_1__ RNumCalc ;
typedef int RNum ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static void FUNC_1(RNum *VAR_0, RNumCalc *VAR_1, const char *VAR_2) {
 VAR_1->calc_i = 0;
 VAR_1->calc_len = FUNC_0 (VAR_2);
 VAR_1->calc_buf = VAR_2;
 VAR_1->calc_err = ((void*)0);
}
