
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_map_info {int btf_value_type_id; int btf_key_type_id; int map_flags; int max_entries; int value_size; int key_size; int type; int name; } ;
struct TYPE_2__ {int map_flags; int max_entries; int value_size; int key_size; int type; } ;
struct bpf_map {int fd; char* name; int btf_value_type_id; int btf_key_type_id; TYPE_1__ def; } ;
typedef int info ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct bpf_map_info*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int) ;

int FUNC_7(struct bpf_map *VAR_3, int VAR_4)
{
 struct bpf_map_info VAR_5 = {};
 __u32 VAR_6 = sizeof(VAR_5);
 int VAR_7, VAR_8;
 char *VAR_9;

 VAR_8 = FUNC_0(VAR_4, &VAR_5, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_9 = FUNC_5(VAR_5.name);
 if (!VAR_9)
  return -VAR_2;

 VAR_7 = FUNC_4("/", VAR_1 | VAR_0);
 if (VAR_7 < 0)
  goto err_free_new_name;

 VAR_7 = FUNC_2(VAR_4, VAR_7, VAR_0);
 if (VAR_7 < 0)
  goto err_close_new_fd;

 VAR_8 = FUNC_6(VAR_3->fd);
 if (VAR_8)
  goto err_close_new_fd;
 FUNC_3(VAR_3->name);

 VAR_3->fd = VAR_7;
 VAR_3->name = VAR_9;
 VAR_3->def.type = VAR_5.type;
 VAR_3->def.key_size = VAR_5.key_size;
 VAR_3->def.value_size = VAR_5.value_size;
 VAR_3->def.max_entries = VAR_5.max_entries;
 VAR_3->def.map_flags = VAR_5.map_flags;
 VAR_3->btf_key_type_id = VAR_5.btf_key_type_id;
 VAR_3->btf_value_type_id = VAR_5.btf_value_type_id;

 return 0;

err_close_new_fd:
 FUNC_1(VAR_7);
err_free_new_name:
 FUNC_3(VAR_9);
 return -VAR_2;
}
