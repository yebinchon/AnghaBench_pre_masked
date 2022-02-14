
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {scalar_t__ host_bigendian; scalar_t__ file_bigendian; } ;



unsigned long long
FUNC_0(struct tep_handle *VAR_0, unsigned long long VAR_1)
{
 unsigned long long VAR_2;

 if (!VAR_0 || VAR_0->host_bigendian == VAR_0->file_bigendian)
  return VAR_1;

 VAR_2 = ((VAR_1 & 0xffULL) << 56) |
  ((VAR_1 & (0xffULL << 8)) << 40) |
  ((VAR_1 & (0xffULL << 16)) << 24) |
  ((VAR_1 & (0xffULL << 24)) << 8) |
  ((VAR_1 & (0xffULL << 32)) >> 8) |
  ((VAR_1 & (0xffULL << 40)) >> 24) |
  ((VAR_1 & (0xffULL << 48)) >> 40) |
  ((VAR_1 & (0xffULL << 56)) >> 56);

 return VAR_2;
}
