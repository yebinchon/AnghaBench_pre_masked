
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pwm2_module_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(pwm2_module_data_t *VAR_3) {
  for (int VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
    if (FUNC_2(VAR_3, VAR_4)) {
      FUNC_0(VAR_2[VAR_4], VAR_1[VAR_4]);
      FUNC_1(VAR_2[VAR_4]);
    }
  }
}
