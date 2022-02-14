
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_htab_bucket {int dummy; } ;
struct bpf_htab {int buckets_num; struct bpf_htab_bucket* buckets; } ;



__attribute__((used)) static struct bpf_htab_bucket *FUNC_0(struct bpf_htab *VAR_0,
             u32 VAR_1)
{
 return &VAR_0->buckets[VAR_1 & (VAR_0->buckets_num - 1)];
}
