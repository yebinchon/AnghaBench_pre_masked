
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_var_secinfo {size_t type; } ;
struct btf_type {size_t type; } ;
struct btf_param {size_t type; } ;
struct btf_member {size_t type; } ;
struct btf_dump {TYPE_1__* type_states; int btf; } ;
struct btf_array {size_t index_type; size_t type; } ;
typedef int __u16 ;
struct TYPE_2__ {int referenced; } ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct btf_type* FUNC_1 (int ,int) ;
 struct btf_array* FUNC_2 (struct btf_type const*) ;
 int FUNC_3 (struct btf_type const*) ;
 struct btf_member* FUNC_4 (struct btf_type const*) ;
 struct btf_param* FUNC_5 (struct btf_type const*) ;
 struct btf_var_secinfo* FUNC_6 (struct btf_type const*) ;
 int FUNC_7 (struct btf_type const*) ;

__attribute__((used)) static int FUNC_8(struct btf_dump *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = FUNC_0(VAR_1->btf);
 const struct btf_type *VAR_5;
 __u16 VAR_6;

 for (VAR_2 = 1; VAR_2 <= VAR_4; VAR_2++) {
  VAR_5 = FUNC_1(VAR_1->btf, VAR_2);
  VAR_6 = FUNC_7(VAR_5);

  switch (FUNC_3(VAR_5)) {
  case 135:
  case 139:
  case 136:
   break;

  case 128:
  case 141:
  case 133:
  case 134:
  case 131:
  case 138:
  case 129:
   VAR_1->type_states[VAR_5->type].referenced = 1;
   break;

  case 142: {
   const struct btf_array *VAR_7 = FUNC_2(VAR_5);

   VAR_1->type_states[VAR_7->index_type].referenced = 1;
   VAR_1->type_states[VAR_7->type].referenced = 1;
   break;
  }
  case 132:
  case 130: {
   const struct btf_member *VAR_8 = FUNC_4(VAR_5);

   for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++, VAR_8++)
    VAR_1->type_states[VAR_8->type].referenced = 1;
   break;
  }
  case 137: {
   const struct btf_param *VAR_9 = FUNC_5(VAR_5);

   for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++, VAR_9++)
    VAR_1->type_states[VAR_9->type].referenced = 1;
   break;
  }
  case 140: {
   const struct btf_var_secinfo *VAR_10 = FUNC_6(VAR_5);

   for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++, VAR_10++)
    VAR_1->type_states[VAR_10->type].referenced = 1;
   break;
  }
  default:
   return -VAR_0;
  }
 }
 return 0;
}
