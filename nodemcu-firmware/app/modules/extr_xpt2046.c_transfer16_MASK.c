
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;


 void* FUNC_0 (int,int,void*) ;

__attribute__((used)) static uint16_t FUNC_1(uint16_t VAR_0) {
  union { uint16_t val; struct { uint8_t lsb; uint8_t msb; }; } VAR_1;
  VAR_1.val = VAR_0;
  VAR_1.msb = FUNC_0(1, 8, VAR_1.msb);
  VAR_1.lsb = FUNC_0(1, 8, VAR_1.lsb);
  return VAR_1.val;
}
