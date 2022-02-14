
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int idx; scalar_t__ insns_cnt; scalar_t__ nr_reloc; int reloc_desc; int insns; int pin_name; int section_name; int name; int (* clear_priv ) (struct bpf_program*,int *) ;int * priv; } ;


 int FUNC_0 (struct bpf_program*) ;
 int FUNC_1 (struct bpf_program*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct bpf_program *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->clear_priv)
  VAR_0->clear_priv(VAR_0, VAR_0->priv);

 VAR_0->priv = ((void*)0);
 VAR_0->clear_priv = ((void*)0);

 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->name);
 FUNC_2(&VAR_0->section_name);
 FUNC_2(&VAR_0->pin_name);
 FUNC_2(&VAR_0->insns);
 FUNC_2(&VAR_0->reloc_desc);

 VAR_0->nr_reloc = 0;
 VAR_0->insns_cnt = 0;
 VAR_0->idx = -1;
}
