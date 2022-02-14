
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int map_flags; int key_size; int value_size; int btf_value_type_id; int btf_key_type_id; scalar_t__ max_entries; } ;
struct bpf_sk_storage_elem {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(union bpf_attr *VAR_9)
{
 if (VAR_9->map_flags & ~VAR_7 ||
     !(VAR_9->map_flags & VAR_0) ||
     VAR_9->max_entries ||
     VAR_9->key_size != sizeof(int) || !VAR_9->value_size ||

     !VAR_9->btf_key_type_id || !VAR_9->btf_value_type_id)
  return -VAR_3;

 if (!FUNC_0(VAR_1))
  return -VAR_4;

 if (VAR_9->value_size >= VAR_5 -
     VAR_6 - sizeof(struct bpf_sk_storage_elem) ||



     VAR_9->value_size > VAR_8 - sizeof(struct bpf_sk_storage_elem))
  return -VAR_2;

 return 0;
}
