
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bucket {int lock; } ;
struct bpf_sk_storage_map {int dummy; } ;
struct bpf_sk_storage_elem {int map_node; } ;
struct TYPE_2__ {int smap; } ;


 TYPE_1__* FUNC_0 (struct bpf_sk_storage_elem*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct bpf_sk_storage_map* FUNC_5 (int ) ;
 struct bucket* FUNC_6 (struct bpf_sk_storage_map*,struct bpf_sk_storage_elem*) ;
 int FUNC_7 (struct bpf_sk_storage_elem*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct bpf_sk_storage_elem *VAR_0)
{
 struct bpf_sk_storage_map *VAR_1;
 struct bucket *VAR_2;

 if (FUNC_8(!FUNC_7(VAR_0)))

  return;

 VAR_1 = FUNC_5(FUNC_0(VAR_0)->smap);
 VAR_2 = FUNC_6(VAR_1, VAR_0);
 FUNC_3(&VAR_2->lock);
 if (FUNC_2(FUNC_7(VAR_0)))
  FUNC_1(&VAR_0->map_node);
 FUNC_4(&VAR_2->lock);
}
