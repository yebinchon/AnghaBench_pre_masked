
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint64
FUNC_0(unsigned short VAR_2[3])
{



 uint64 VAR_3;
 uint64 VAR_4;

 VAR_3 = (uint64) VAR_2[2] << 32 | (uint64) VAR_2[1] << 16 | (uint64) VAR_2[0];

 VAR_4 = VAR_3 * VAR_1 + VAR_0;

 VAR_2[0] = VAR_4 & 0xFFFF;
 VAR_2[1] = (VAR_4 >> 16) & 0xFFFF;
 VAR_2[2] = (VAR_4 >> 32) & 0xFFFF;

 return VAR_4;
}
