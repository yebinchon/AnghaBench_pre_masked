
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(uint8_t *VAR_0, unsigned int VAR_1)
{
    uint16_t VAR_2 =0xFFFF;
    uint8_t VAR_3;

    while(VAR_1--) {
 VAR_2 ^= *VAR_0++;
 for(VAR_3=0;VAR_3<8;VAR_3++) {
     if(VAR_2 & 0x01) {
  VAR_2 >>= 1;
  VAR_2 ^= 0xA001;
     } else {
  VAR_2 >>= 1;
     }
 }
    }
    return VAR_2;
}
