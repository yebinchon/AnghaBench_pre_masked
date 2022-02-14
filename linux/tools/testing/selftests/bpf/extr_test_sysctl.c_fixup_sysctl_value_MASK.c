
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
struct bpf_insn {int code; void* imm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char const*,size_t) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, size_t VAR_4,
         struct bpf_insn *VAR_5, size_t VAR_6)
{
 union {
  uint8_t raw[sizeof(uint64_t)];
  uint64_t num;
 } VAR_7 = {};

 if (VAR_4 > sizeof(VAR_7)) {
  FUNC_0("Value is too big (%zd) to use in fixup", VAR_4);
  return -1;
 }
 if (VAR_5[VAR_6].code != (VAR_2 | VAR_0 | VAR_1)) {
  FUNC_0("Can fixup only BPF_LD_IMM64 insns");
  return -1;
 }

 FUNC_1(VAR_7.raw, VAR_3, VAR_4);
 VAR_5[VAR_6].imm = (uint32_t)VAR_7.num;
 VAR_5[VAR_6 + 1].imm = (uint32_t)(VAR_7.num >> 32);

 return 0;
}
