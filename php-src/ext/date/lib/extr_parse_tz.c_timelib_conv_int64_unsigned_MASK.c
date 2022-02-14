
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t FUNC_0(uint64_t VAR_0)
{
 return
  ((VAR_0 & 0x00000000000000ff) << 56) +
  ((VAR_0 & 0x000000000000ff00) << 40) +
  ((VAR_0 & 0x0000000000ff0000) << 24) +
  ((VAR_0 & 0x00000000ff000000) << 8) +
  ((VAR_0 & 0x000000ff00000000) >> 8) +
  ((VAR_0 & 0x0000ff0000000000) >> 24) +
  ((VAR_0 & 0x00ff000000000000) >> 40) +
  ((VAR_0 & 0xff00000000000000) >> 56);
}
