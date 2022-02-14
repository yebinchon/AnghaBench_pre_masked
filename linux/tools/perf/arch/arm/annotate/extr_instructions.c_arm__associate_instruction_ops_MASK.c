
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ins_ops {int dummy; } ;
struct arm_annotate {int jump_insn; int call_insn; } ;
struct arch {struct arm_annotate* priv; } ;
typedef int regmatch_t ;


 int FUNC_0 (struct arch*,char const*,struct ins_ops*) ;
 struct ins_ops VAR_0 ;
 struct ins_ops VAR_1 ;
 int FUNC_1 (int *,char const*,int,int *,int ) ;

__attribute__((used)) static struct ins_ops *FUNC_2(struct arch *VAR_2, const char *VAR_3)
{
 struct arm_annotate *VAR_4 = VAR_2->priv;
 struct ins_ops *VAR_5;
 regmatch_t VAR_6[2];

 if (!FUNC_1(&VAR_4->call_insn, VAR_3, 2, VAR_6, 0))
  VAR_5 = &VAR_0;
 else if (!FUNC_1(&VAR_4->jump_insn, VAR_3, 2, VAR_6, 0))
  VAR_5 = &VAR_1;
 else
  return ((void*)0);

 FUNC_0(VAR_2, VAR_3, VAR_5);
 return VAR_5;
}
