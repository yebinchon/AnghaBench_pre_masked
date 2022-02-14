
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {scalar_t__ host_bigendian; scalar_t__ file_bigendian; } ;



unsigned short FUNC_0(struct tep_handle *VAR_0, unsigned short VAR_1)
{
 unsigned short VAR_2;

 if (!VAR_0 || VAR_0->host_bigendian == VAR_0->file_bigendian)
  return VAR_1;

 VAR_2 = ((VAR_1 & 0xffULL) << 8) |
  ((VAR_1 & (0xffULL << 8)) >> 8);

 return VAR_2;
}
