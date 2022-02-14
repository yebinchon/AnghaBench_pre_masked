
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

void FUNC_1(void)
{
  FUNC_0(VAR_0, "usage: dgfirmware [<opts>] <img>\n");
  FUNC_0(VAR_0, "  <img>               firmware image filename\n");
  FUNC_0(VAR_0, "  <opts>  -h          print this message\n");
  FUNC_0(VAR_0, "          -f          fix the checksum\n");
  FUNC_0(VAR_0, "          -x  <file>  extract the rootfs file to <file>\n");
  FUNC_0(VAR_0, "          -xk <file>  extract the kernel to <file>\n");
  FUNC_0(VAR_0, "          -m  <file>  merge in rootfs fil\e from <file>\n");
  FUNC_0(VAR_0, "          -k  <file>  merge in kernel from <file>\n");
  FUNC_0(VAR_0, "          -w  <file>  write back the modified firmware\n");
}
