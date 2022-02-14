
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int int32_t ;


 double const FUNC_0 (double) ;
 double FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(lua_State* VAR_0) {
 if (!FUNC_3(VAR_0, 2)) {
  return FUNC_2(VAR_0, "wrong arg range");
 }
 double VAR_1 = FUNC_1(VAR_0, 1)/100000.0;
 double VAR_2 = FUNC_1(VAR_0, 2)/100.0;

 const double VAR_3 = 243.5;
 const double VAR_4 = 17.67;
 double VAR_5 = FUNC_0(VAR_1) + ((VAR_4 * VAR_2) / (VAR_3 + VAR_2));
 double VAR_6 = (VAR_3 * VAR_5)/(VAR_4 - VAR_5) * 100.0;

 FUNC_4(VAR_0, (int32_t)(VAR_6 + (((VAR_6<0)?-1:(VAR_6>0)) * 0.5)));
 return 1;
}
