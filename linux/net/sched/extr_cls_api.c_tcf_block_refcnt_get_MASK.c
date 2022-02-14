
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_block {int refcnt; } ;
struct net {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 struct tcf_block* FUNC_3 (struct net*,int ) ;

__attribute__((used)) static struct tcf_block *FUNC_4(struct net *VAR_0, u32 VAR_1)
{
 struct tcf_block *VAR_2;

 FUNC_0();
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2 && !FUNC_2(&VAR_2->refcnt))
  VAR_2 = ((void*)0);
 FUNC_1();

 return VAR_2;
}
