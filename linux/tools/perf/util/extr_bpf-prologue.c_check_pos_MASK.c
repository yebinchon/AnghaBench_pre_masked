
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn_pos {scalar_t__ pos; scalar_t__ end; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct bpf_insn_pos *VAR_1)
{
 if (!VAR_1->pos || VAR_1->pos >= VAR_1->end)
  return -VAR_0;
 return 0;
}
