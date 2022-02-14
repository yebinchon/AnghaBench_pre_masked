
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int crc16_t ;


 int* VAR_0 ;

crc16_t FUNC_0(crc16_t VAR_1, const void *VAR_2, unsigned int VAR_3)
{
 const unsigned char *VAR_4 = VAR_2;

 while (VAR_3--)






  VAR_1 = (((VAR_1 >> 8) & 0xffU) ^
         VAR_0[(VAR_1 ^ *VAR_4++) & 0xffU]) & 0x0000ffffU;
 return VAR_1;
}
