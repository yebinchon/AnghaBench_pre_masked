
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object_load_attr {int log_level; int target_btf_path; struct bpf_object* obj; } ;
struct bpf_object {int loaded; int path; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bpf_object*) ;
 int FUNC_2 (struct bpf_object*,int ) ;
 int FUNC_3 (struct bpf_object*,int ) ;
 int FUNC_4 (struct bpf_object*) ;
 int VAR_1 ;
 int FUNC_5 (char*,...) ;

int FUNC_6(struct bpf_object_load_attr *VAR_2)
{
 struct bpf_object *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;
 VAR_3 = VAR_2->obj;
 if (!VAR_3)
  return -VAR_0;

 if (VAR_3->loaded) {
  FUNC_5("object should not be loaded twice\n");
  return -VAR_0;
 }

 VAR_3->loaded = 1;

 FUNC_0(FUNC_1(VAR_3), VAR_4, VAR_1);
 FUNC_0(FUNC_3(VAR_3, VAR_2->target_btf_path), VAR_4, VAR_1);
 FUNC_0(FUNC_2(VAR_3, VAR_2->log_level), VAR_4, VAR_1);

 return 0;
out:
 FUNC_4(VAR_3);
 FUNC_5("failed to load object '%s'\n", VAR_3->path);
 return VAR_4;
}
