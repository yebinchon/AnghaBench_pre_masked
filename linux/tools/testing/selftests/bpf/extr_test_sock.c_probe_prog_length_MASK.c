
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn {scalar_t__ code; scalar_t__ imm; } ;


 int VAR_0 ;

__attribute__((used)) static size_t FUNC_0(const struct bpf_insn *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = VAR_0 - 1; VAR_2 > 0; --VAR_2)
  if (VAR_1[VAR_2].code != 0 || VAR_1[VAR_2].imm != 0)
   break;
 return VAR_2 + 1;
}
