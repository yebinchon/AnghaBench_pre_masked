
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char btf_type ;
struct btf_dedup {size_t* hypot_map; int* map; TYPE_2__* btf; } ;
typedef size_t __u32 ;
struct TYPE_4__ {int nr_types; char* nohdr_data; char** types; size_t types_size; char* strings; int data_size; scalar_t__ data; TYPE_1__* hdr; } ;
struct TYPE_3__ {int type_off; int type_len; int str_off; int str_len; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 char** FUNC_2 (char**,int) ;

__attribute__((used)) static int FUNC_3(struct btf_dedup *VAR_2)
{
 struct btf_type **VAR_3;
 __u32 VAR_4 = 1;
 char *VAR_5, *VAR_6;
 int VAR_7, VAR_8;


 VAR_2->hypot_map[0] = 0;
 for (VAR_7 = 1; VAR_7 <= VAR_2->btf->nr_types; VAR_7++)
  VAR_2->hypot_map[VAR_7] = VAR_0;

 VAR_5 = VAR_2->btf->nohdr_data + VAR_2->btf->hdr->type_off;
 VAR_6 = VAR_5;

 for (VAR_7 = 1; VAR_7 <= VAR_2->btf->nr_types; VAR_7++) {
  if (VAR_2->map[VAR_7] != VAR_7)
   continue;

  VAR_8 = FUNC_0(VAR_2->btf->types[VAR_7]);
  if (VAR_8 < 0)
   return VAR_8;

  FUNC_1(VAR_6, VAR_2->btf->types[VAR_7], VAR_8);
  VAR_2->hypot_map[VAR_7] = VAR_4;
  VAR_2->btf->types[VAR_4] = (struct btf_type *)VAR_6;
  VAR_6 += VAR_8;
  VAR_4++;
 }


 VAR_2->btf->nr_types = VAR_4 - 1;
 VAR_2->btf->types_size = VAR_2->btf->nr_types;
 VAR_2->btf->hdr->type_len = VAR_6 - VAR_5;
 VAR_3 = FUNC_2(VAR_2->btf->types,
       (1 + VAR_2->btf->nr_types) * sizeof(struct btf_type *));
 if (!VAR_3)
  return -VAR_1;
 VAR_2->btf->types = VAR_3;


 VAR_2->btf->hdr->str_off = VAR_6 - (char *)VAR_2->btf->nohdr_data;
 FUNC_1(VAR_6, VAR_2->btf->strings, VAR_2->btf->hdr->str_len);
 VAR_2->btf->strings = VAR_6;
 VAR_6 += VAR_2->btf->hdr->str_len;

 VAR_2->btf->data_size = VAR_6 - (char *)VAR_2->btf->data;
 return 0;
}
