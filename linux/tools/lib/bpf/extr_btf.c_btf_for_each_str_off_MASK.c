
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct btf_type {int name_off; } ;
struct btf_param {int name_off; } ;
struct btf_member {int name_off; } ;
struct btf_ext_info_sec {int num_info; int sec_name_off; } ;
struct btf_enum {int name_off; } ;
struct btf_dedup {TYPE_3__* btf_ext; TYPE_1__* btf; } ;
struct bpf_line_info_min {int line_off; int file_name_off; } ;
typedef int (* str_off_fn_t ) (int *,void*) ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_5__ {int len; int rec_size; void* info; } ;
struct TYPE_6__ {TYPE_2__ line_info; } ;
struct TYPE_4__ {int nr_types; struct btf_type** types; } ;






 struct btf_enum* FUNC_0 (struct btf_type*) ;
 int FUNC_1 (struct btf_type*) ;
 struct btf_member* FUNC_2 (struct btf_type*) ;
 struct btf_param* FUNC_3 (struct btf_type*) ;
 int FUNC_4 (struct btf_type*) ;

__attribute__((used)) static int FUNC_5(struct btf_dedup *VAR_0, str_off_fn_t VAR_1, void *VAR_2)
{
 void *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 struct btf_type *VAR_9;

 for (VAR_5 = 1; VAR_5 <= VAR_0->btf->nr_types; VAR_5++) {
  VAR_9 = VAR_0->btf->types[VAR_5];
  VAR_7 = VAR_1(&VAR_9->name_off, VAR_2);
  if (VAR_7)
   return VAR_7;

  switch (FUNC_1(VAR_9)) {
  case 129:
  case 128: {
   struct btf_member *VAR_10 = FUNC_2(VAR_9);
   __u16 VAR_11 = FUNC_4(VAR_9);

   for (VAR_6 = 0; VAR_6 < VAR_11; VAR_6++) {
    VAR_7 = VAR_1(&VAR_10->name_off, VAR_2);
    if (VAR_7)
     return VAR_7;
    VAR_10++;
   }
   break;
  }
  case 131: {
   struct btf_enum *VAR_12 = FUNC_0(VAR_9);
   __u16 VAR_13 = FUNC_4(VAR_9);

   for (VAR_6 = 0; VAR_6 < VAR_13; VAR_6++) {
    VAR_7 = VAR_1(&VAR_12->name_off, VAR_2);
    if (VAR_7)
     return VAR_7;
    VAR_12++;
   }
   break;
  }
  case 130: {
   struct btf_param *VAR_14 = FUNC_3(VAR_9);
   __u16 VAR_15 = FUNC_4(VAR_9);

   for (VAR_6 = 0; VAR_6 < VAR_15; VAR_6++) {
    VAR_7 = VAR_1(&VAR_14->name_off, VAR_2);
    if (VAR_7)
     return VAR_7;
    VAR_14++;
   }
   break;
  }
  default:
   break;
  }
 }

 if (!VAR_0->btf_ext)
  return 0;

 VAR_3 = VAR_0->btf_ext->line_info.info;
 VAR_4 = VAR_0->btf_ext->line_info.info + VAR_0->btf_ext->line_info.len;
 VAR_8 = VAR_0->btf_ext->line_info.rec_size;

 while (VAR_3 < VAR_4) {
  struct btf_ext_info_sec *VAR_16 = VAR_3;
  struct bpf_line_info_min *VAR_17;
  __u32 VAR_18 = VAR_16->num_info;

  VAR_7 = VAR_1(&VAR_16->sec_name_off, VAR_2);
  if (VAR_7)
   return VAR_7;

  VAR_3 += sizeof(struct btf_ext_info_sec);
  for (VAR_5 = 0; VAR_5 < VAR_18; VAR_5++) {
   VAR_17 = VAR_3;
   VAR_7 = VAR_1(&VAR_17->file_name_off, VAR_2);
   if (VAR_7)
    return VAR_7;
   VAR_7 = VAR_1(&VAR_17->line_off, VAR_2);
   if (VAR_7)
    return VAR_7;
   VAR_3 += VAR_8;
  }
 }

 return 0;
}
