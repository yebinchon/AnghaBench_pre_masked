
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_omem_alloc; int sk_bpf_storage; } ;
struct bpf_sk_storage_map {int dummy; } ;
struct bpf_sk_storage_elem {int dummy; } ;
struct bpf_sk_storage {struct sock* sk; int lock; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct bpf_sk_storage*,struct bpf_sk_storage_elem*) ;
 int FUNC_2 (int,int *) ;
 struct bpf_sk_storage* FUNC_3 (struct bpf_sk_storage**,int *,struct bpf_sk_storage*) ;
 int FUNC_4 (struct bpf_sk_storage*) ;
 struct bpf_sk_storage* FUNC_5 (int,int) ;
 int FUNC_6 (struct sock*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct bpf_sk_storage_map*,struct bpf_sk_storage_elem*) ;
 int FUNC_9 (struct bpf_sk_storage_elem*) ;
 scalar_t__ FUNC_10 (struct bpf_sk_storage*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_4,
       struct bpf_sk_storage_map *VAR_5,
       struct bpf_sk_storage_elem *VAR_6)
{
 struct bpf_sk_storage *VAR_7, *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_6(VAR_4, sizeof(*VAR_8));
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2 | VAR_3);
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto uncharge;
 }
 FUNC_0(&VAR_8->list);
 FUNC_7(&VAR_8->lock);
 VAR_8->sk = VAR_4;

 FUNC_1(VAR_8, VAR_6);
 FUNC_8(VAR_5, VAR_6);
 VAR_7 = FUNC_3((struct bpf_sk_storage **)&VAR_4->sk_bpf_storage,
      ((void*)0), VAR_8);
 if (FUNC_10(VAR_7)) {
  FUNC_9(VAR_6);
  VAR_9 = -VAR_0;
  goto uncharge;
 }

 return 0;

uncharge:
 FUNC_4(VAR_8);
 FUNC_2(sizeof(*VAR_8), &VAR_4->sk_omem_alloc);
 return VAR_9;
}
