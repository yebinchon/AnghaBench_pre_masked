
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union bpf_attr {scalar_t__ max_entries; scalar_t__ key_size; int value_size; int map_flags; } ;
typedef int u64 ;
struct bpf_map {int max_entries; int numa_node; int key_size; } ;
struct bpf_htab_elem {int dummy; } ;
struct bpf_htab_bucket {int dummy; } ;
struct bpf_htab {int buckets_num; struct bpf_map map; TYPE_1__* buckets; scalar_t__ elem_size; } ;
struct TYPE_2__ {int lock; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bpf_map* FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (struct bpf_map*,union bpf_attr*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bpf_htab*) ;
 struct bpf_htab* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static struct bpf_map *FUNC_10(union bpf_attr *VAR_10)
{
 struct bpf_htab *VAR_11;
 int VAR_12, VAR_13;
 u64 VAR_14;

 if (!FUNC_4(VAR_0))
  return FUNC_0(-VAR_4);
 if (VAR_10->max_entries == 0 ||
     VAR_10->key_size == 0 ||
     VAR_10->value_size != 4 ||
     VAR_10->map_flags & ~VAR_8)
  return FUNC_0(-VAR_2);
 if (VAR_10->key_size > VAR_6)
  return FUNC_0(-VAR_1);

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_5);
 if (!VAR_11)
  return FUNC_0(-VAR_3);

 FUNC_3(&VAR_11->map, VAR_10);

 VAR_11->buckets_num = FUNC_9(VAR_11->map.max_entries);
 VAR_11->elem_size = sizeof(struct bpf_htab_elem) +
     FUNC_8(VAR_11->map.key_size, 8);
 if (VAR_11->buckets_num == 0 ||
     VAR_11->buckets_num > VAR_9 / sizeof(struct bpf_htab_bucket)) {
  VAR_13 = -VAR_2;
  goto free_htab;
 }

 VAR_14 = (u64) VAR_11->buckets_num * sizeof(struct bpf_htab_bucket) +
        (u64) VAR_11->elem_size * VAR_11->map.max_entries;
 if (VAR_14 >= VAR_9 - VAR_7) {
  VAR_13 = -VAR_2;
  goto free_htab;
 }

 VAR_11->buckets = FUNC_2(VAR_11->buckets_num *
        sizeof(struct bpf_htab_bucket),
        VAR_11->map.numa_node);
 if (!VAR_11->buckets) {
  VAR_13 = -VAR_3;
  goto free_htab;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11->buckets_num; VAR_12++) {
  FUNC_1(&VAR_11->buckets[VAR_12].head);
  FUNC_7(&VAR_11->buckets[VAR_12].lock);
 }

 return &VAR_11->map;
free_htab:
 FUNC_5(VAR_11);
 return FUNC_0(VAR_13);
}
