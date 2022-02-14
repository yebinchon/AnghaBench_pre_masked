
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int (* clear_priv ) (struct bpf_program*,void*) ;void* priv; } ;
typedef int (* bpf_program_clear_priv_t ) (struct bpf_program*,void*) ;


 int FUNC_0 (struct bpf_program*,void*) ;

int FUNC_1(struct bpf_program *VAR_0, void *VAR_1,
     bpf_program_clear_priv_t VAR_2)
{
 if (VAR_0->priv && VAR_0->clear_priv)
  VAR_0->clear_priv(VAR_0, VAR_0->priv);

 VAR_0->priv = VAR_1;
 VAR_0->clear_priv = VAR_2;
 return 0;
}
