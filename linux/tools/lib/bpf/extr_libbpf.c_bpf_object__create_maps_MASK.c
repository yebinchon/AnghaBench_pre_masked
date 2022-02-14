
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; } ;
struct bpf_object {unsigned int nr_maps; struct bpf_map* maps; scalar_t__ btf; TYPE_1__ caps; } ;
struct bpf_map_def {scalar_t__ type; int max_entries; int value_size; int key_size; int map_flags; } ;
struct bpf_map {int fd; scalar_t__ inner_map_fd; int name; scalar_t__ btf_value_type_id; scalar_t__ btf_key_type_id; int map_ifindex; struct bpf_map_def def; } ;
struct bpf_create_map_attr {scalar_t__ map_type; int max_entries; scalar_t__ inner_map_fd; scalar_t__ btf_value_type_id; scalar_t__ btf_key_type_id; scalar_t__ btf_fd; int value_size; int key_size; int map_flags; int map_ifindex; int name; } ;
typedef int errmsg ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_create_map_attr*) ;
 scalar_t__ FUNC_1 (struct bpf_map*) ;
 int FUNC_2 (struct bpf_object*,struct bpf_map*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct bpf_object*,struct bpf_map*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_6 () ;
 char* FUNC_7 (int,char*,int) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct bpf_object *VAR_3)
{
 struct bpf_create_map_attr VAR_4 = {};
 int VAR_5 = 0;
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->nr_maps; VAR_6++) {
  struct bpf_map *VAR_8 = &VAR_3->maps[VAR_6];
  struct bpf_map_def *VAR_9 = &VAR_8->def;
  char *VAR_10, VAR_11[VAR_1];
  int *VAR_12 = &VAR_8->fd;

  if (VAR_8->fd >= 0) {
   FUNC_8("skip map create (preset) %s: fd=%d\n",
     VAR_8->name, VAR_8->fd);
   continue;
  }

  if (VAR_3->caps.name)
   VAR_4.name = VAR_8->name;
  VAR_4.map_ifindex = VAR_8->map_ifindex;
  VAR_4.map_type = VAR_9->type;
  VAR_4.map_flags = VAR_9->map_flags;
  VAR_4.key_size = VAR_9->key_size;
  VAR_4.value_size = VAR_9->value_size;
  if (VAR_9->type == VAR_0 &&
      !VAR_9->max_entries) {
   if (!VAR_5)
    VAR_5 = FUNC_6();
   if (VAR_5 < 0) {
    FUNC_9("failed to determine number of system CPUs: %d\n",
        VAR_5);
    VAR_7 = VAR_5;
    goto err_out;
   }
   FUNC_8("map '%s': setting size to %d\n",
     VAR_8->name, VAR_5);
   VAR_4.max_entries = VAR_5;
  } else {
   VAR_4.max_entries = VAR_9->max_entries;
  }
  VAR_4.btf_fd = 0;
  VAR_4.btf_key_type_id = 0;
  VAR_4.btf_value_type_id = 0;
  if (FUNC_3(VAR_9->type) &&
      VAR_8->inner_map_fd >= 0)
   VAR_4.inner_map_fd = VAR_8->inner_map_fd;

  if (VAR_3->btf && !FUNC_2(VAR_3, VAR_8)) {
   VAR_4.btf_fd = FUNC_5(VAR_3->btf);
   VAR_4.btf_key_type_id = VAR_8->btf_key_type_id;
   VAR_4.btf_value_type_id = VAR_8->btf_value_type_id;
  }

  *VAR_12 = FUNC_0(&VAR_4);
  if (*VAR_12 < 0 && (VAR_4.btf_key_type_id ||
     VAR_4.btf_value_type_id)) {
   VAR_7 = -VAR_2;
   VAR_10 = FUNC_7(VAR_7, VAR_11, sizeof(VAR_11));
   FUNC_9("Error in bpf_create_map_xattr(%s):%s(%d). Retrying without BTF.\n",
       VAR_8->name, VAR_10, VAR_7);
   VAR_4.btf_fd = 0;
   VAR_4.btf_key_type_id = 0;
   VAR_4.btf_value_type_id = 0;
   VAR_8->btf_key_type_id = 0;
   VAR_8->btf_value_type_id = 0;
   *VAR_12 = FUNC_0(&VAR_4);
  }

  if (*VAR_12 < 0) {
   size_t VAR_13;

   VAR_7 = -VAR_2;
err_out:
   VAR_10 = FUNC_7(VAR_7, VAR_11, sizeof(VAR_11));
   FUNC_9("failed to create map (name: '%s'): %s(%d)\n",
       VAR_8->name, VAR_10, VAR_7);
   for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
    FUNC_10(VAR_3->maps[VAR_13].fd);
   return VAR_7;
  }

  if (FUNC_1(VAR_8)) {
   VAR_7 = FUNC_4(VAR_3, VAR_8);
   if (VAR_7 < 0) {
    FUNC_10(*VAR_12);
    goto err_out;
   }
  }

  FUNC_8("created map %s: fd=%d\n", VAR_8->name, *VAR_12);
 }

 return 0;
}
