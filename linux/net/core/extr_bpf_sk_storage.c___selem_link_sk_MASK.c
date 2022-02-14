
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sk_storage_elem {int snode; int sk_storage; } ;
struct bpf_sk_storage {int list; } ;


 int FUNC_0 (int ,struct bpf_sk_storage*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct bpf_sk_storage *VAR_0,
       struct bpf_sk_storage_elem *VAR_1)
{
 FUNC_0(VAR_1->sk_storage, VAR_0);
 FUNC_1(&VAR_1->snode, &VAR_0->list);
}
