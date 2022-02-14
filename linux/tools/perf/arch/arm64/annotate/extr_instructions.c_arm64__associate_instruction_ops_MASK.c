
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ins_ops {int dummy; } ;
struct arm64_annotate {int call_insn; int jump_insn; } ;
struct arch {struct arm64_annotate* priv; } ;
typedef int regmatch_t ;


 int FUNC_0 (struct arch*,char const*,struct ins_ops*) ;
 struct ins_ops VAR_0 ;
 struct ins_ops VAR_1 ;
 struct ins_ops VAR_2 ;
 int FUNC_1 (int *,char const*,int,int *,int ) ;
 struct ins_ops VAR_3 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static struct ins_ops *FUNC_3(struct arch *VAR_4, const char *VAR_5)
{
 struct arm64_annotate *VAR_6 = VAR_4->priv;
 struct ins_ops *VAR_7;
 regmatch_t VAR_8[2];

 if (!FUNC_1(&VAR_6->jump_insn, VAR_5, 2, VAR_8, 0))
  VAR_7 = &VAR_2;
 else if (!FUNC_1(&VAR_6->call_insn, VAR_5, 2, VAR_8, 0))
  VAR_7 = &VAR_1;
 else if (!FUNC_2(VAR_5, "ret"))
  VAR_7 = &VAR_3;
 else
  VAR_7 = &VAR_0;

 FUNC_0(VAR_4, VAR_5, VAR_7);
 return VAR_7;
}
