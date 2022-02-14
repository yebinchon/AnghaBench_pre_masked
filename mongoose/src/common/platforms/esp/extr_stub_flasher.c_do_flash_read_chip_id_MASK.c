
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int chip_id ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(void) {
  uint32_t VAR_1 = 0;
  FUNC_3(FUNC_1(0), VAR_0);
  while (FUNC_0(FUNC_1(0)) & VAR_0) {
  }
  VAR_1 = FUNC_0(FUNC_2(0)) & 0xFFFFFF;
  FUNC_4((uint8_t *) &VAR_1, sizeof(VAR_1));
  return 0;
}
