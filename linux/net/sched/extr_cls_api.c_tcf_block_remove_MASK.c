
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_net {int idr_lock; int idr; } ;
struct tcf_block {int index; } ;
struct net {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 struct tcf_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct tcf_block *VAR_1, struct net *VAR_2)
{
 struct tcf_net *VAR_3 = FUNC_1(VAR_2, VAR_0);

 FUNC_2(&VAR_3->idr_lock);
 FUNC_0(&VAR_3->idr, VAR_1->index);
 FUNC_3(&VAR_3->idr_lock);
}
