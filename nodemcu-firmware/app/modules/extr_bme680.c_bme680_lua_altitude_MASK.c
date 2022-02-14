
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 double FUNC_4 (double,double) ;

__attribute__((used)) static int FUNC_5(lua_State* VAR_0) {
 if (!FUNC_2(VAR_0, 2)) {
  return FUNC_1(VAR_0, "wrong arg range");
 }
 int32_t VAR_1 = FUNC_0(VAR_0, 1);
 int32_t VAR_2 = FUNC_0(VAR_0, 2);
 double VAR_3 = (1.0 - FUNC_4((double)VAR_1/(double)VAR_2, 1.0/5.25588)) / 2.25577e-5 * 100.0;

 FUNC_3(VAR_0, (int32_t)(VAR_3 + (((VAR_3<0)?-1:(VAR_3>0)) * 0.5)));
 return 1;
}
