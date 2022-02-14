
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8 ;


 void** VAR_0 ;

__attribute__((used)) static int
FUNC_0(uint8 *VAR_1, char *VAR_2)
{
 int VAR_3;
 unsigned VAR_4;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
 {
  VAR_4 = VAR_1[VAR_3];
  *VAR_2++ = VAR_0[(VAR_4 >> 4) & 0x0F];
  *VAR_2++ = VAR_0[VAR_4 & 0x0F];
 }
 *VAR_2 = 0;
 return 8 * 2;
}
