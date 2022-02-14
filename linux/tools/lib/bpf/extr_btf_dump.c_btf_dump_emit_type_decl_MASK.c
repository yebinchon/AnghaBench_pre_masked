
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct id_stack {int cnt; scalar_t__ ids; } ;
struct btf_type {scalar_t__ type; } ;
struct btf_dump {int decl_stack_cnt; scalar_t__ decl_stack; int btf; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
 struct btf_type* FUNC_0 (int ,scalar_t__) ;
 TYPE_1__* FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_dump*,struct id_stack*,char const*,int) ;
 int FUNC_3 (struct btf_dump*,scalar_t__) ;
 int FUNC_4 (struct btf_type const*) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static void FUNC_6(struct btf_dump *VAR_0, __u32 VAR_1,
        const char *VAR_2, int VAR_3)
{
 struct id_stack VAR_4;
 const struct btf_type *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = VAR_0->decl_stack_cnt;
 for (;;) {
  VAR_6 = FUNC_3(VAR_0, VAR_1);
  if (VAR_6 < 0) {





   FUNC_5("not enough memory for decl stack:%d", VAR_6);
   VAR_0->decl_stack_cnt = VAR_7;
   return;
  }


  if (VAR_1 == 0)
   break;

  VAR_5 = FUNC_0(VAR_0->btf, VAR_1);
  switch (FUNC_4(VAR_5)) {
  case 133:
  case 128:
  case 138:
  case 132:
  case 136:
   VAR_1 = VAR_5->type;
   break;
  case 139:
   VAR_1 = FUNC_1(VAR_5)->type;
   break;
  case 134:
  case 137:
  case 135:
  case 131:
  case 129:
  case 130:
   goto done;
  default:
   FUNC_5("unexpected type in decl chain, kind:%u, id:[%u]\n",
       FUNC_4(VAR_5), VAR_1);
   goto done;
  }
 }
done:
 VAR_4.ids = VAR_0->decl_stack + VAR_7;
 VAR_4.cnt = VAR_0->decl_stack_cnt - VAR_7;
 FUNC_2(VAR_0, &VAR_4, VAR_2, VAR_3);
 VAR_0->decl_stack_cnt = VAR_7;
}
