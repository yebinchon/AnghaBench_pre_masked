
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rk_state ;
typedef scalar_t__ rk_error ;


 scalar_t__ FUNC_0 (void*,size_t,int) ;
 int FUNC_1 (void*,size_t,int *) ;

rk_error FUNC_2(void *VAR_0, size_t VAR_1, int VAR_2, rk_state *VAR_3) {
  rk_error VAR_4;

  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_4) {
    FUNC_1(VAR_0, VAR_1, VAR_3);
  }
  return VAR_4;
}
