
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bucket {int dummy; } ;
struct bpf_sk_storage_map {int bucket_log; struct bucket* buckets; } ;
struct bpf_sk_storage_elem {int dummy; } ;


 size_t FUNC_0 (struct bpf_sk_storage_elem*,int ) ;

__attribute__((used)) static struct bucket *FUNC_1(struct bpf_sk_storage_map *VAR_0,
        struct bpf_sk_storage_elem *VAR_1)
{
 return &VAR_0->buckets[FUNC_0(VAR_1, VAR_0->bucket_log)];
}
