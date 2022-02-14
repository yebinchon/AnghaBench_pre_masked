
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t FUNC_0(uint64_t VAR_0)
{
 return ( (((VAR_0) << 56))
  | (((VAR_0) << 40) & 0x00FF000000000000ULL)
  | (((VAR_0) << 24) & 0x0000FF0000000000ULL)
  | (((VAR_0) << 8) & 0x000000FF00000000ULL)
  | (((VAR_0) >> 8) & 0x00000000FF000000ULL)
  | (((VAR_0) >> 24) & 0x0000000000FF0000ULL)
  | (((VAR_0) >> 40) & 0x000000000000FF00ULL)
  | (((VAR_0) >> 56)) );
}
