
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_chain_info {int dummy; } ;
struct tcf_chain {int filter_chain_lock; } ;


 int VAR_0 ;
 struct tcf_proto* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tcf_proto* FUNC_3 (struct tcf_chain*,struct tcf_chain_info*,int ,int ,int) ;
 int FUNC_4 (struct tcf_chain*,struct tcf_chain_info*,struct tcf_proto*) ;
 int FUNC_5 (struct tcf_proto*,int,int,int *) ;
 scalar_t__ FUNC_6 (struct tcf_chain*,struct tcf_proto*) ;

__attribute__((used)) static struct tcf_proto *FUNC_7(struct tcf_chain *VAR_1,
          struct tcf_proto *VAR_2,
          u32 VAR_3, u32 VAR_4,
          bool VAR_5)
{
 struct tcf_chain_info VAR_6;
 struct tcf_proto *VAR_7;
 int VAR_8 = 0;

 FUNC_1(&VAR_1->filter_chain_lock);

 if (FUNC_6(VAR_1, VAR_2)) {
  FUNC_2(&VAR_1->filter_chain_lock);
  FUNC_5(VAR_2, VAR_5, 0, ((void*)0));
  return FUNC_0(-VAR_0);
 }

 VAR_7 = FUNC_3(VAR_1, &VAR_6,
          VAR_3, VAR_4, 0);
 if (!VAR_7)
  VAR_8 = FUNC_4(VAR_1, &VAR_6, VAR_2);
 FUNC_2(&VAR_1->filter_chain_lock);

 if (VAR_7) {
  FUNC_5(VAR_2, VAR_5, 0, ((void*)0));
  VAR_2 = VAR_7;
 } else if (VAR_8) {
  FUNC_5(VAR_2, VAR_5, 0, ((void*)0));
  VAR_2 = FUNC_0(VAR_8);
 }

 return VAR_2;
}
