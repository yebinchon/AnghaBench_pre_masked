
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_bpf_storage; } ;
struct bpf_sk_storage_map {int dummy; } ;
struct bpf_sk_storage_data {int dummy; } ;
struct bpf_sk_storage {int dummy; } ;
struct bpf_map {int dummy; } ;


 struct bpf_sk_storage_data* FUNC_0 (struct bpf_sk_storage*,struct bpf_sk_storage_map*,int) ;
 struct bpf_sk_storage* FUNC_1 (int ) ;

__attribute__((used)) static struct bpf_sk_storage_data *
FUNC_2(struct sock *VAR_0, struct bpf_map *VAR_1, bool VAR_2)
{
 struct bpf_sk_storage *VAR_3;
 struct bpf_sk_storage_map *VAR_4;

 VAR_3 = FUNC_1(VAR_0->sk_bpf_storage);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = (struct bpf_sk_storage_map *)VAR_1;
 return FUNC_0(VAR_3, VAR_4, VAR_2);
}
