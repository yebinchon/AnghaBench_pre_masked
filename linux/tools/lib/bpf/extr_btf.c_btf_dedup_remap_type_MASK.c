
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_var_secinfo {int type; } ;
struct btf_type {int type; } ;
struct btf_param {int type; } ;
struct btf_member {int type; } ;
struct btf_dedup {TYPE_1__* btf; } ;
struct btf_array {int type; int index_type; } ;
typedef size_t __u32 ;
typedef int __u16 ;
struct TYPE_2__ {struct btf_type** types; } ;
 int VAR_0 ;
 struct btf_array* FUNC_0 (struct btf_type*) ;
 int FUNC_1 (struct btf_dedup*,int) ;
 int FUNC_2 (struct btf_type*) ;
 struct btf_member* FUNC_3 (struct btf_type*) ;
 struct btf_param* FUNC_4 (struct btf_type*) ;
 struct btf_var_secinfo* FUNC_5 (struct btf_type*) ;
 int FUNC_6 (struct btf_type*) ;

__attribute__((used)) static int FUNC_7(struct btf_dedup *VAR_1, __u32 VAR_2)
{
 struct btf_type *VAR_3 = VAR_1->btf->types[VAR_2];
 int VAR_4, VAR_5;

 switch (FUNC_2(VAR_3)) {
 case 135:
 case 139:
  break;

 case 136:
 case 141:
 case 128:
 case 133:
 case 134:
 case 131:
 case 138:
 case 129:
  VAR_5 = FUNC_1(VAR_1, VAR_3->type);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_3->type = VAR_5;
  break;

 case 142: {
  struct btf_array *VAR_6 = FUNC_0(VAR_3);

  VAR_5 = FUNC_1(VAR_1, VAR_6->type);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_6->type = VAR_5;
  VAR_5 = FUNC_1(VAR_1, VAR_6->index_type);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_6->index_type = VAR_5;
  break;
 }

 case 132:
 case 130: {
  struct btf_member *VAR_7 = FUNC_3(VAR_3);
  __u16 VAR_8 = FUNC_6(VAR_3);

  for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++) {
   VAR_5 = FUNC_1(VAR_1, VAR_7->type);
   if (VAR_5 < 0)
    return VAR_5;
   VAR_7->type = VAR_5;
   VAR_7++;
  }
  break;
 }

 case 137: {
  struct btf_param *VAR_9 = FUNC_4(VAR_3);
  __u16 VAR_10 = FUNC_6(VAR_3);

  VAR_5 = FUNC_1(VAR_1, VAR_3->type);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_3->type = VAR_5;

  for (VAR_4 = 0; VAR_4 < VAR_10; VAR_4++) {
   VAR_5 = FUNC_1(VAR_1, VAR_9->type);
   if (VAR_5 < 0)
    return VAR_5;
   VAR_9->type = VAR_5;
   VAR_9++;
  }
  break;
 }

 case 140: {
  struct btf_var_secinfo *VAR_11 = FUNC_5(VAR_3);
  __u16 VAR_12 = FUNC_6(VAR_3);

  for (VAR_4 = 0; VAR_4 < VAR_12; VAR_4++) {
   VAR_5 = FUNC_1(VAR_1, VAR_11->type);
   if (VAR_5 < 0)
    return VAR_5;
   VAR_11->type = VAR_5;
   VAR_11++;
  }
  break;
 }

 default:
  return -VAR_0;
 }

 return 0;
}
