
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int map_type; int key_size; int value_size; int inner_map_fd; int max_entries; int numa_node; int map_flags; int map_name; } ;
typedef enum bpf_map_type { ____Placeholder_bpf_map_type } bpf_map_type ;
typedef int attr ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (union bpf_attr*,char,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,union bpf_attr*,int) ;

int FUNC_5(enum bpf_map_type VAR_3, const char *VAR_4,
          int VAR_5, int VAR_6, int VAR_7,
          __u32 VAR_8, int VAR_9)
{
 union bpf_attr VAR_10;

 FUNC_1(&VAR_10, '\0', sizeof(VAR_10));

 VAR_10.map_type = VAR_3;
 VAR_10.key_size = VAR_5;
 VAR_10.value_size = 4;
 VAR_10.inner_map_fd = VAR_6;
 VAR_10.max_entries = VAR_7;
 VAR_10.map_flags = VAR_8;
 if (VAR_4)
  FUNC_0(VAR_10.map_name, VAR_4,
         FUNC_2(FUNC_3(VAR_4), VAR_2 - 1));

 if (VAR_9 >= 0) {
  VAR_10.map_flags |= VAR_0;
  VAR_10.numa_node = VAR_9;
 }

 return FUNC_4(VAR_1, &VAR_10, sizeof(VAR_10));
}
