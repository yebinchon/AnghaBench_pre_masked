
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lzma_ret ;
__attribute__((used)) static const char *FUNC_0(lzma_ret VAR_0)
{
 switch ((int) VAR_0) {
 case 129:
  return "Memory allocation failed";
 case 128:
  return "Unsupported decompressor flags";
 case 130:
  return "The input is not in the .xz format";
 case 131:
  return "Compressed file is corrupt";
 case 132:
  return "Compressed file is truncated or otherwise corrupt";
 default:
  return "Unknown error, possibly a bug";
 }
}
