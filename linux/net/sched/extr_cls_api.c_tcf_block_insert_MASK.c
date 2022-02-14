
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_net {int idr_lock; int idr; } ;
struct tcf_block {int index; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct tcf_block*,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 struct tcf_net* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct tcf_block *VAR_3, struct net *VAR_4,
       struct netlink_ext_ack *VAR_5)
{
 struct tcf_net *VAR_6 = FUNC_3(VAR_4, VAR_2);
 int VAR_7;

 FUNC_1(VAR_0);
 FUNC_4(&VAR_6->idr_lock);
 VAR_7 = FUNC_0(&VAR_6->idr, VAR_3, &VAR_3->index, VAR_3->index,
       VAR_1);
 FUNC_5(&VAR_6->idr_lock);
 FUNC_2();

 return VAR_7;
}
