
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_chain {int action_refcnt; int refcnt; } ;
struct tcf_block {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tcf_chain*,int *,int ,int,int ,int) ;
 struct tcf_chain* FUNC_3 (struct tcf_block*,int ) ;
 int FUNC_4 (struct tcf_chain*) ;
 struct tcf_chain* FUNC_5 (struct tcf_block*,int ) ;

__attribute__((used)) static struct tcf_chain *FUNC_6(struct tcf_block *VAR_3,
      u32 VAR_4, bool VAR_5,
      bool VAR_6)
{
 struct tcf_chain *VAR_7 = ((void*)0);
 bool VAR_8;

 FUNC_0(&VAR_3->lock);
 VAR_7 = FUNC_5(VAR_3, VAR_4);
 if (VAR_7) {
  FUNC_4(VAR_7);
 } else {
  if (!VAR_5)
   goto errout;
  VAR_7 = FUNC_3(VAR_3, VAR_4);
  if (!VAR_7)
   goto errout;
 }

 if (VAR_6)
  ++VAR_7->action_refcnt;
 VAR_8 = VAR_7->refcnt - VAR_7->action_refcnt == 1;
 FUNC_1(&VAR_3->lock);






 if (VAR_8 && !VAR_6)
  FUNC_2(VAR_7, ((void*)0), 0, VAR_0 | VAR_1,
    VAR_2, 0);

 return VAR_7;

errout:
 FUNC_1(&VAR_3->lock);
 return VAR_7;
}
