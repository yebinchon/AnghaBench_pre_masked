
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int const* VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_0(const uint32_t VAR_1, const uint8_t VAR_2)
{
 return VAR_0[(VAR_1 ^ VAR_2) & 0xff] ^ (VAR_1 >> 8);
}
