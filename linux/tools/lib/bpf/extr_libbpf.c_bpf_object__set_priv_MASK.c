
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int (* clear_priv ) (struct bpf_object*,void*) ;void* priv; } ;
typedef int (* bpf_object_clear_priv_t ) (struct bpf_object*,void*) ;


 int FUNC_0 (struct bpf_object*,void*) ;

int FUNC_1(struct bpf_object *VAR_0, void *VAR_1,
    bpf_object_clear_priv_t VAR_2)
{
 if (VAR_0->priv && VAR_0->clear_priv)
  VAR_0->clear_priv(VAR_0, VAR_0->priv);

 VAR_0->priv = VAR_1;
 VAR_0->clear_priv = VAR_2;
 return 0;
}
