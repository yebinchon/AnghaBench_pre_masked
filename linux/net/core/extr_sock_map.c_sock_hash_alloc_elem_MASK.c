
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct bpf_htab_elem {int hash; struct sock* sk; int key; } ;
struct TYPE_2__ {scalar_t__ max_entries; int numa_node; } ;
struct bpf_htab {int count; TYPE_1__ map; int elem_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_htab_elem* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct bpf_htab_elem* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,void*,int ) ;

__attribute__((used)) static struct bpf_htab_elem *FUNC_5(struct bpf_htab *VAR_4,
        void *VAR_5, u32 VAR_6,
        u32 VAR_7, struct sock *VAR_8,
        struct bpf_htab_elem *VAR_9)
{
 struct bpf_htab_elem *VAR_10;

 if (FUNC_2(&VAR_4->count) > VAR_4->map.max_entries) {
  if (!VAR_9) {
   FUNC_1(&VAR_4->count);
   return FUNC_0(-VAR_0);
  }
 }

 VAR_10 = FUNC_3(VAR_4->elem_size, VAR_2 | VAR_3,
      VAR_4->map.numa_node);
 if (!VAR_10) {
  FUNC_1(&VAR_4->count);
  return FUNC_0(-VAR_1);
 }
 FUNC_4(VAR_10->key, VAR_5, VAR_6);
 VAR_10->sk = VAR_8;
 VAR_10->hash = VAR_7;
 return VAR_10;
}
