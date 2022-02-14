
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int (* clear_priv ) (struct bpf_map*,void*) ;void* priv; } ;
typedef int (* bpf_map_clear_priv_t ) (struct bpf_map*,void*) ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_map*,void*) ;

int FUNC_1(struct bpf_map *VAR_1, void *VAR_2,
       bpf_map_clear_priv_t VAR_3)
{
 if (!VAR_1)
  return -VAR_0;

 if (VAR_1->priv) {
  if (VAR_1->clear_priv)
   VAR_1->clear_priv(VAR_1, VAR_1->priv);
 }

 VAR_1->priv = VAR_2;
 VAR_1->clear_priv = VAR_3;
 return 0;
}
