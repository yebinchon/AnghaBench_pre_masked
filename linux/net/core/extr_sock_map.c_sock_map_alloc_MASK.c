
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {scalar_t__ max_entries; int key_size; int value_size; int map_flags; } ;
typedef int u64 ;
struct sock {int dummy; } ;
struct bpf_map {int max_entries; int memory; int numa_node; } ;
struct bpf_stab {struct bpf_map map; scalar_t__ sks; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bpf_map* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct bpf_map*,union bpf_attr*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bpf_stab*) ;
 struct bpf_stab* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct bpf_map *FUNC_9(union bpf_attr *VAR_6)
{
 struct bpf_stab *VAR_7;
 u64 VAR_8;
 int VAR_9;

 if (!FUNC_5(VAR_0))
  return FUNC_0(-VAR_3);
 if (VAR_6->max_entries == 0 ||
     VAR_6->key_size != 4 ||
     VAR_6->value_size != 4 ||
     VAR_6->map_flags & ~VAR_5)
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_4);
 if (!VAR_7)
  return FUNC_0(-VAR_2);

 FUNC_4(&VAR_7->map, VAR_6);
 FUNC_8(&VAR_7->lock);


 VAR_8 = (u64) VAR_7->map.max_entries * sizeof(struct sock *);
 VAR_9 = FUNC_3(&VAR_7->map.memory, VAR_8);
 if (VAR_9)
  goto free_stab;

 VAR_7->sks = FUNC_1(VAR_7->map.max_entries *
           sizeof(struct sock *),
           VAR_7->map.numa_node);
 if (VAR_7->sks)
  return &VAR_7->map;
 VAR_9 = -VAR_2;
 FUNC_2(&VAR_7->map.memory);
free_stab:
 FUNC_6(VAR_7);
 return FUNC_0(VAR_9);
}
