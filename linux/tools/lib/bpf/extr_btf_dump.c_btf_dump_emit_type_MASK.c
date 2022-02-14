
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_type {size_t type; int name_off; } ;
struct btf_param {size_t type; } ;
struct btf_member {size_t type; } ;
struct btf_dump_type_aux_state {scalar_t__ emit_state; int fwd_emitted; } ;
struct btf_dump {int btf; struct btf_dump_type_aux_state* type_states; } ;
typedef size_t __u32 ;
typedef int __u16 ;
struct TYPE_2__ {size_t type; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct btf_type* FUNC_0 (int ,size_t) ;
 TYPE_1__* FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_dump*,size_t,struct btf_type const*,int ) ;
 int FUNC_3 (struct btf_dump*,size_t,struct btf_type const*) ;
 int FUNC_4 (struct btf_dump*,size_t,struct btf_type const*,int ) ;
 int FUNC_5 (struct btf_dump*,size_t,struct btf_type const*) ;
 int FUNC_6 (struct btf_dump*,size_t,struct btf_type const*,int ) ;
 int FUNC_7 (struct btf_dump*,size_t) ;
 int FUNC_8 (struct btf_dump*,char*) ;
 int FUNC_9 (struct btf_type const*) ;
 struct btf_member* FUNC_10 (struct btf_type const*) ;
 struct btf_param* FUNC_11 (struct btf_type const*) ;
 int FUNC_12 (struct btf_type const*) ;
 int FUNC_13 (char*,size_t) ;

__attribute__((used)) static void FUNC_14(struct btf_dump *VAR_3, __u32 VAR_4, __u32 VAR_5)
{
 struct btf_dump_type_aux_state *VAR_6 = &VAR_3->type_states[VAR_4];
 bool VAR_7 = VAR_5 == 0;
 const struct btf_type *VAR_8;
 __u16 VAR_9;

 if (VAR_6->emit_state == VAR_0)
  return;

 VAR_8 = FUNC_0(VAR_3->btf, VAR_4);
 VAR_9 = FUNC_9(VAR_8);

 if (VAR_6->emit_state == VAR_1) {
  if (VAR_6->fwd_emitted)
   return;

  switch (VAR_9) {
  case 131:
  case 129:




   if (VAR_4 == VAR_5)
    return;
   if (VAR_8->name_off == 0) {
    FUNC_13("anonymous struct/union loop, id:[%u]\n",
        VAR_4);
    return;
   }
   FUNC_5(VAR_3, VAR_4, VAR_8);
   FUNC_8(VAR_3, ";\n\n");
   VAR_6->fwd_emitted = 1;
   break;
  case 130:





   if (!FUNC_7(VAR_3, VAR_4)) {
    FUNC_6(VAR_3, VAR_4, VAR_8, 0);
    FUNC_8(VAR_3, ";\n\n");
   };
   VAR_6->fwd_emitted = 1;
   break;
  default:
   break;
  }

  return;
 }

 switch (VAR_9) {
 case 134:
  VAR_6->emit_state = VAR_0;
  break;
 case 137:
  if (VAR_7) {
   FUNC_2(VAR_3, VAR_4, VAR_8, 0);
   FUNC_8(VAR_3, ";\n\n");
  }
  VAR_6->emit_state = VAR_0;
  break;
 case 133:
 case 128:
 case 138:
 case 132:
  FUNC_14(VAR_3, VAR_8->type, VAR_5);
  break;
 case 139:
  FUNC_14(VAR_3, FUNC_1(VAR_8)->type, VAR_5);
  break;
 case 135:
  FUNC_3(VAR_3, VAR_4, VAR_8);
  FUNC_8(VAR_3, ";\n\n");
  VAR_6->emit_state = VAR_0;
  break;
 case 130:
  VAR_6->emit_state = VAR_1;
  FUNC_14(VAR_3, VAR_8->type, VAR_4);







  if (!VAR_6->fwd_emitted && !FUNC_7(VAR_3, VAR_4)) {
   FUNC_6(VAR_3, VAR_4, VAR_8, 0);
   FUNC_8(VAR_3, ";\n\n");
  }
  VAR_6->emit_state = VAR_0;
  break;
 case 131:
 case 129:
  VAR_6->emit_state = VAR_1;







  if (VAR_7 || VAR_8->name_off == 0) {
   const struct btf_member *VAR_10 = FUNC_10(VAR_8);
   __u16 VAR_11 = FUNC_12(VAR_8);
   int VAR_12, VAR_13;

   VAR_13 = VAR_8->name_off == 0 ? VAR_5 : VAR_4;
   for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++, VAR_10++)
    FUNC_14(VAR_3, VAR_10->type, VAR_13);
  } else if (!VAR_6->fwd_emitted && VAR_4 != VAR_5) {
   FUNC_5(VAR_3, VAR_4, VAR_8);
   FUNC_8(VAR_3, ";\n\n");
   VAR_6->fwd_emitted = 1;
  }

  if (VAR_7) {
   FUNC_4(VAR_3, VAR_4, VAR_8, 0);
   FUNC_8(VAR_3, ";\n\n");
   VAR_6->emit_state = VAR_0;
  } else {
   VAR_6->emit_state = VAR_2;
  }
  break;
 case 136: {
  const struct btf_param *VAR_14 = FUNC_11(VAR_8);
  __u16 VAR_15 = FUNC_12(VAR_8);
  int VAR_16;

  FUNC_14(VAR_3, VAR_8->type, VAR_5);
  for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++, VAR_14++)
   FUNC_14(VAR_3, VAR_14->type, VAR_5);

  break;
 }
 default:
  break;
 }
}
