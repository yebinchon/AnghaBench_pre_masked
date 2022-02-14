
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wl_fixed_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static uint32_t FUNC_2(uint32_t VAR_5, wl_fixed_t VAR_6) {
 bool VAR_7 = FUNC_1(VAR_6) < 0;
 switch (VAR_5) {
 case 128:
  return VAR_7 ? VAR_4 : VAR_1;
 case 129:
  return VAR_7 ? VAR_2 : VAR_3;
 default:
  FUNC_0(VAR_0, "Unexpected axis value on mouse scroll");
  return 0;
 }
}
