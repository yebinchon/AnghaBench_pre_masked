
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_chain {scalar_t__ refcnt; scalar_t__ action_refcnt; int block; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct tcf_chain *VAR_0)
{
 FUNC_0(VAR_0->block);




 return VAR_0->refcnt == VAR_0->action_refcnt;
}
