
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct func_node {int bbs; struct bpf_insn* end; struct bpf_insn* start; } ;
struct bpf_insn {int off; int code; } ;
struct bb_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct bb_node* FUNC_2 (struct func_node*,struct bpf_insn*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct func_node *VAR_3)
{
 struct bpf_insn *VAR_4, *VAR_5;
 struct bb_node *VAR_6;

 VAR_4 = VAR_3->start;
 VAR_5 = VAR_3->end;
 FUNC_1(&VAR_3->bbs);
 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_6)
  return 1;

 for (; VAR_4 <= VAR_5; VAR_4++) {
  if (FUNC_3(VAR_4->code)) {
   u8 VAR_7 = FUNC_0(VAR_4->code);

   if (VAR_7 == VAR_1 || VAR_7 == VAR_0)
    continue;

   VAR_6 = FUNC_2(VAR_3, VAR_4 + VAR_4->off + 1);
   if (!VAR_6)
    return 1;

   if (VAR_7 != VAR_2) {
    VAR_6 = FUNC_2(VAR_3, VAR_4 + 1);
    if (!VAR_6)
     return 1;
   }
  }
 }

 return 0;
}
