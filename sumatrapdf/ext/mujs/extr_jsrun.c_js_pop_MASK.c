
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;

void FUNC_1(js_State *VAR_2, int VAR_3)
{
 VAR_1 -= VAR_3;
 if (VAR_1 < VAR_0) {
  VAR_1 = VAR_0;
  FUNC_0(VAR_2, "stack underflow!");
 }
}
