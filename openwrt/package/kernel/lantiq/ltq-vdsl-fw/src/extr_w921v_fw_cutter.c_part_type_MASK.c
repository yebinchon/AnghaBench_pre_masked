
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int) ;

const char* FUNC_1(unsigned int VAR_0)
{
 switch(VAR_0) {
 case 129:
  return "/tmp/vr9_dsl_fw_annex_b.bin";
 case 128:
  return "/tmp/vr9_tapi_fw.bin";
 }
 FUNC_0("\tUnknown lzma type 0x%02X\n", VAR_0);
 return "/tmp/unknown.lzma";
}
