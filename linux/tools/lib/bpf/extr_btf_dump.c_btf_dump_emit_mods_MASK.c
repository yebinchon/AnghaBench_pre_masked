
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct id_stack {int cnt; int * ids; } ;
struct btf_type {int dummy; } ;
struct btf_dump {int btf; } ;
typedef int __u32 ;





 struct btf_type* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct btf_dump*,char*) ;
 int FUNC_2 (struct btf_type const*) ;

__attribute__((used)) static void FUNC_3(struct btf_dump *VAR_0, struct id_stack *VAR_1)
{
 const struct btf_type *VAR_2;
 __u32 VAR_3;

 while (VAR_1->cnt) {
  VAR_3 = VAR_1->ids[VAR_1->cnt - 1];
  VAR_2 = FUNC_0(VAR_0->btf, VAR_3);

  switch (FUNC_2(VAR_2)) {
  case 128:
   FUNC_1(VAR_0, "volatile ");
   break;
  case 130:
   FUNC_1(VAR_0, "const ");
   break;
  case 129:
   FUNC_1(VAR_0, "restrict ");
   break;
  default:
   return;
  }
  VAR_1->cnt--;
 }
}
