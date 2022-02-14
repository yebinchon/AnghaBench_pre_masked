
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tcf_ematch_tree_hdr {int nmatches; } ;
struct tcf_ematch_tree {int * matches; int hdr; } ;
struct tcf_ematch_hdr {int dummy; } ;
struct tcf_ematch {int dummy; } ;
struct nlattr {int nla_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct tcf_ematch_tree_hdr*,int) ;
 int FUNC_2 (struct tcf_ematch_tree*,int ,int) ;
 void* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 struct nlattr* FUNC_5 (struct nlattr*,int*) ;
 scalar_t__ FUNC_6 (struct nlattr*,int) ;
 int FUNC_7 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 struct tcf_ematch* FUNC_8 (struct tcf_ematch_tree*,int) ;
 int FUNC_9 (struct tcf_ematch_tree*) ;
 int FUNC_10 (struct tcf_proto*,struct tcf_ematch_tree_hdr*,struct tcf_ematch*,struct nlattr*,int) ;

int FUNC_11(struct tcf_proto *VAR_6, struct nlattr *VAR_7,
    struct tcf_ematch_tree *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 struct nlattr *VAR_13[VAR_4 + 1];
 struct nlattr *VAR_14, *VAR_15, *VAR_16;
 struct tcf_ematch_tree_hdr *VAR_17;
 struct tcf_ematch *VAR_18;

 FUNC_2(VAR_8, 0, sizeof(*VAR_8));
 if (!VAR_7)
  return 0;

 VAR_12 = FUNC_7(VAR_13, VAR_4, VAR_7,
       VAR_5, ((void*)0));
 if (VAR_12 < 0)
  goto errout;

 VAR_12 = -VAR_0;
 VAR_15 = VAR_13[VAR_2];
 VAR_16 = VAR_13[VAR_3];

 if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0))
  goto errout;

 VAR_17 = FUNC_3(VAR_15);
 FUNC_1(&VAR_8->hdr, VAR_17, sizeof(*VAR_17));

 VAR_14 = FUNC_3(VAR_16);
 VAR_10 = FUNC_4(VAR_16);
 VAR_11 = VAR_17->nmatches * sizeof(*VAR_18);

 VAR_8->matches = FUNC_0(VAR_11, VAR_1);
 if (VAR_8->matches == ((void*)0))
  goto errout;
 for (VAR_9 = 0; FUNC_6(VAR_14, VAR_10); VAR_9++) {
  VAR_12 = -VAR_0;

  if (VAR_14->nla_type != (VAR_9 + 1))
   goto errout_abort;

  if (VAR_9 >= VAR_17->nmatches)
   goto errout_abort;

  if (FUNC_4(VAR_14) < sizeof(struct tcf_ematch_hdr))
   goto errout_abort;

  VAR_18 = FUNC_8(VAR_8, VAR_9);

  VAR_12 = FUNC_10(VAR_6, VAR_17, VAR_18, VAR_14, VAR_9);
  if (VAR_12 < 0)
   goto errout_abort;

  VAR_14 = FUNC_5(VAR_14, &VAR_10);
 }






 if (VAR_9 != VAR_17->nmatches) {
  VAR_12 = -VAR_0;
  goto errout_abort;
 }

 VAR_12 = 0;
errout:
 return VAR_12;

errout_abort:
 FUNC_9(VAR_8);
 return VAR_12;
}
