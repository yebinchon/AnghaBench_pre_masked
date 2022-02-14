
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_create_map_attr {char* name; int key_size; int value_size; int max_entries; int inner_map_fd; int map_type; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct bpf_create_map_attr*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct bpf_create_map_attr VAR_6 = {};


 VAR_6.name = "reuseport_array";
 VAR_6.map_type = VAR_1;
 VAR_6.key_size = sizeof(__u32);
 VAR_6.value_size = sizeof(__u32);
 VAR_6.max_entries = VAR_2;

 VAR_5 = FUNC_1(&VAR_6);
 FUNC_0(VAR_5 == -1, "creating reuseport_array",
       "reuseport_array:%d errno:%d\n", VAR_5, VAR_3);


 VAR_6.name = "outer_map";
 VAR_6.map_type = VAR_0;
 VAR_6.key_size = sizeof(__u32);
 VAR_6.value_size = sizeof(__u32);
 VAR_6.max_entries = 1;
 VAR_6.inner_map_fd = VAR_5;
 VAR_4 = FUNC_1(&VAR_6);
 FUNC_0(VAR_4 == -1, "creating outer_map",
       "outer_map:%d errno:%d\n", VAR_4, VAR_3);
}
