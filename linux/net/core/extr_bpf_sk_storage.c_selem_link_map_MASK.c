
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bucket {int lock; int list; } ;
struct bpf_sk_storage_map {int dummy; } ;
struct bpf_sk_storage_elem {int map_node; } ;
struct TYPE_2__ {int smap; } ;


 int FUNC_0 (int ,struct bpf_sk_storage_map*) ;
 TYPE_1__* FUNC_1 (struct bpf_sk_storage_elem*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct bucket* FUNC_5 (struct bpf_sk_storage_map*,struct bpf_sk_storage_elem*) ;

__attribute__((used)) static void FUNC_6(struct bpf_sk_storage_map *VAR_0,
      struct bpf_sk_storage_elem *VAR_1)
{
 struct bucket *VAR_2 = FUNC_5(VAR_0, VAR_1);

 FUNC_3(&VAR_2->lock);
 FUNC_0(FUNC_1(VAR_1)->smap, VAR_0);
 FUNC_2(&VAR_1->map_node, &VAR_2->list);
 FUNC_4(&VAR_2->lock);
}
