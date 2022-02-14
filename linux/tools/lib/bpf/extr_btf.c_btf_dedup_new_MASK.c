
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_type {int dummy; } ;
struct btf_ext {int dummy; } ;
struct btf_dedup_opts {int dedup_table_size; scalar_t__ dont_resolve_fwds; } ;
struct TYPE_2__ {int dont_resolve_fwds; } ;
struct btf_dedup {int* map; void** hypot_map; struct btf* btf; int * dedup_table; struct btf_ext* btf_ext; TYPE_1__ opts; } ;
struct btf {int nr_types; struct btf_type** types; } ;
typedef int hashmap_hash_fn ;
typedef int __u32 ;


 void* VAR_0 ;
 int VAR_1 ;
 struct btf_dedup* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct btf_dedup*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct btf_type*) ;
 scalar_t__ FUNC_5 (struct btf_type*) ;
 struct btf_dedup* FUNC_6 (int,int) ;
 int * FUNC_7 (int ,int ,int *) ;
 void* FUNC_8 (int) ;

__attribute__((used)) static struct btf_dedup *FUNC_9(struct btf *VAR_5, struct btf_ext *VAR_6,
           const struct btf_dedup_opts *VAR_7)
{
 struct btf_dedup *VAR_8 = FUNC_6(1, sizeof(struct btf_dedup));
 hashmap_hash_fn VAR_9 = VAR_4;
 int VAR_10, VAR_11 = 0;

 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_8->opts.dont_resolve_fwds = VAR_7 && VAR_7->dont_resolve_fwds;

 if (VAR_7 && VAR_7->dedup_table_size == 1)
  VAR_9 = VAR_2;

 VAR_8->btf = VAR_5;
 VAR_8->btf_ext = VAR_6;

 VAR_8->dedup_table = FUNC_7(VAR_9, VAR_3, ((void*)0));
 if (FUNC_1(VAR_8->dedup_table)) {
  VAR_11 = FUNC_2(VAR_8->dedup_table);
  VAR_8->dedup_table = ((void*)0);
  goto done;
 }

 VAR_8->map = FUNC_8(sizeof(__u32) * (1 + VAR_5->nr_types));
 if (!VAR_8->map) {
  VAR_11 = -VAR_1;
  goto done;
 }

 VAR_8->map[0] = 0;
 for (VAR_10 = 1; VAR_10 <= VAR_5->nr_types; VAR_10++) {
  struct btf_type *VAR_12 = VAR_8->btf->types[VAR_10];


  if (FUNC_5(VAR_12) || FUNC_4(VAR_12))
   VAR_8->map[VAR_10] = VAR_10;
  else
   VAR_8->map[VAR_10] = VAR_0;
 }

 VAR_8->hypot_map = FUNC_8(sizeof(__u32) * (1 + VAR_5->nr_types));
 if (!VAR_8->hypot_map) {
  VAR_11 = -VAR_1;
  goto done;
 }
 for (VAR_10 = 0; VAR_10 <= VAR_5->nr_types; VAR_10++)
  VAR_8->hypot_map[VAR_10] = VAR_0;

done:
 if (VAR_11) {
  FUNC_3(VAR_8);
  return FUNC_0(VAR_11);
 }

 return VAR_8;
}
