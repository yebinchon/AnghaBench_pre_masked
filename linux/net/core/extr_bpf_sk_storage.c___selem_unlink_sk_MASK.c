
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_bpf_storage; int sk_omem_alloc; } ;
struct bpf_sk_storage_map {int elem_size; size_t cache_idx; } ;
struct bpf_sk_storage_elem {int snode; } ;
struct bpf_sk_storage {int * cache; struct sock* sk; int list; } ;
struct TYPE_3__ {int smap; } ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (struct bpf_sk_storage_elem*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct bpf_sk_storage_elem*,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_6 (int ) ;
 struct bpf_sk_storage_map* FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(struct bpf_sk_storage *VAR_1,
         struct bpf_sk_storage_elem *VAR_2,
         bool VAR_3)
{
 struct bpf_sk_storage_map *VAR_4;
 bool VAR_5;
 struct sock *VAR_6;

 VAR_4 = FUNC_7(FUNC_1(VAR_2)->smap);
 VAR_6 = VAR_1->sk;




 if (VAR_3)
  FUNC_2(VAR_4->elem_size, &VAR_6->sk_omem_alloc);

 VAR_5 = FUNC_4(&VAR_2->snode,
       &VAR_1->list);
 if (VAR_5) {
  FUNC_2(sizeof(struct bpf_sk_storage), &VAR_6->sk_omem_alloc);
  VAR_1->sk = ((void*)0);

  FUNC_0(VAR_6->sk_bpf_storage, ((void*)0));
 }
 FUNC_3(&VAR_2->snode);
 if (FUNC_6(VAR_1->cache[VAR_4->cache_idx]) ==
     FUNC_1(VAR_2))
  FUNC_0(VAR_1->cache[VAR_4->cache_idx], ((void*)0));

 FUNC_5(VAR_2, VAR_0);

 return VAR_5;
}
