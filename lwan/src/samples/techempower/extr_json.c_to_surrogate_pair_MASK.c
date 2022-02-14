
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int uchar_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uchar_t VAR_0, uint16_t *VAR_1, uint16_t *VAR_2)
{
 uchar_t VAR_3;

 FUNC_0(VAR_0 >= 0x10000 && VAR_0 <= 0x10FFFF);

 VAR_3 = VAR_0 - 0x10000;
 *VAR_1 = (uint16_t)(((VAR_3 >> 10) & 0x3FF) | 0xD800);
 *VAR_2 = (uint16_t)((VAR_3 & 0x3FF) | 0xDC00);
}
