
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ btf_maps_shndx; } ;
struct bpf_object {int btf; TYPE_1__ efile; } ;
struct bpf_map_def {int value_size; int key_size; } ;
struct bpf_map {scalar_t__ sec_idx; size_t libbpf_type; int btf_key_type_id; int btf_value_type_id; int name; struct bpf_map_def def; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (struct bpf_map*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int*,int*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct bpf_object *VAR_1, struct bpf_map *VAR_2)
{
 struct bpf_map_def *VAR_3 = &VAR_2->def;
 __u32 VAR_4 = 0, VAR_5 = 0;
 int VAR_6;


 if (VAR_2->sec_idx == VAR_1->efile.btf_maps_shndx)
  return 0;

 if (!FUNC_0(VAR_2)) {
  VAR_6 = FUNC_2(VAR_1->btf, VAR_2->name, VAR_3->key_size,
        VAR_3->value_size, &VAR_4,
        &VAR_5);
 } else {




  VAR_6 = FUNC_1(VAR_1->btf,
    VAR_0[VAR_2->libbpf_type]);
 }
 if (VAR_6 < 0)
  return VAR_6;

 VAR_2->btf_key_type_id = VAR_4;
 VAR_2->btf_value_type_id = FUNC_0(VAR_2) ?
     VAR_6 : VAR_5;
 return 0;
}
