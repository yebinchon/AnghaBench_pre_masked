
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_type {scalar_t__ name_off; size_t type; } ;
struct btf_param {size_t type; } ;
struct btf_member {size_t type; } ;
struct btf_dump_type_aux_state {scalar_t__ order_state; int referenced; } ;
struct btf_dump {struct btf_dump_type_aux_state* type_states; int btf; } ;
typedef size_t __u32 ;
typedef int __u16 ;
struct TYPE_2__ {size_t type; } ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct btf_type* FUNC_0 (int ,size_t) ;
 TYPE_1__* FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_dump*,size_t) ;
 scalar_t__ FUNC_3 (struct btf_type const*) ;
 int FUNC_4 (struct btf_type const*) ;
 struct btf_member* FUNC_5 (struct btf_type const*) ;
 struct btf_param* FUNC_6 (struct btf_type const*) ;
 int FUNC_7 (struct btf_type const*) ;
 int FUNC_8 (char*,size_t) ;

__attribute__((used)) static int FUNC_9(struct btf_dump *VAR_4, __u32 VAR_5, bool VAR_6)
{
 struct btf_dump_type_aux_state *VAR_7 = &VAR_4->type_states[VAR_5];
 const struct btf_type *VAR_8;
 __u16 VAR_9;
 int VAR_10, VAR_11;


 if (VAR_7->order_state == VAR_2)
  return 1;

 VAR_8 = FUNC_0(VAR_4->btf, VAR_5);

 if (VAR_7->order_state == VAR_3) {

  if (FUNC_3(VAR_8) && VAR_6 && VAR_8->name_off != 0)
   return 0;
  FUNC_8("unsatisfiable type cycle, id:[%u]\n", VAR_5);
  return -VAR_1;
 }

 switch (FUNC_4(VAR_8)) {
 case 135:
  VAR_7->order_state = VAR_2;
  return 0;

 case 134:
  VAR_10 = FUNC_9(VAR_4, VAR_8->type, 1);
  VAR_7->order_state = VAR_2;
  return VAR_10;

 case 142:
  return FUNC_9(VAR_4, FUNC_1(VAR_8)->type, VAR_6);

 case 132:
 case 130: {
  const struct btf_member *VAR_12 = FUNC_5(VAR_8);





  if (VAR_6 && VAR_8->name_off != 0)
   return 0;

  VAR_7->order_state = VAR_3;

  VAR_9 = FUNC_7(VAR_8);
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++, VAR_12++) {
   VAR_10 = FUNC_9(VAR_4, VAR_12->type, 0);
   if (VAR_10 < 0)
    return VAR_10;
  }

  if (VAR_8->name_off != 0) {
   VAR_10 = FUNC_2(VAR_4, VAR_5);
   if (VAR_10 < 0)
    return VAR_10;
  }

  VAR_7->order_state = VAR_2;
  return 1;
 }
 case 139:
 case 136:





  if (VAR_8->name_off != 0 || !VAR_7->referenced) {
   VAR_10 = FUNC_2(VAR_4, VAR_5);
   if (VAR_10)
    return VAR_10;
  }
  VAR_7->order_state = VAR_2;
  return 1;

 case 131: {
  int VAR_13;

  VAR_13 = FUNC_9(VAR_4, VAR_8->type, VAR_6);
  if (VAR_13 < 0)
   return VAR_13;


  if (VAR_6 && !VAR_13)
   return 0;


  VAR_10 = FUNC_2(VAR_4, VAR_5);
  if (VAR_10)
   return VAR_10;

  VAR_4->type_states[VAR_5].order_state = VAR_2;
  return 1;
 }
 case 128:
 case 141:
 case 133:
  return FUNC_9(VAR_4, VAR_8->type, VAR_6);

 case 137: {
  const struct btf_param *VAR_14 = FUNC_6(VAR_8);
  bool VAR_15;

  VAR_10 = FUNC_9(VAR_4, VAR_8->type, VAR_6);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_15 = VAR_10 > 0;

  VAR_9 = FUNC_7(VAR_8);
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++, VAR_14++) {
   VAR_10 = FUNC_9(VAR_4, VAR_14->type, VAR_6);
   if (VAR_10 < 0)
    return VAR_10;
   if (VAR_10 > 0)
    VAR_15 = 1;
  }
  return VAR_15;
 }
 case 138:
 case 129:
 case 140:
  VAR_4->type_states[VAR_5].order_state = VAR_2;
  return 0;

 default:
  return -VAR_0;
 }
}
