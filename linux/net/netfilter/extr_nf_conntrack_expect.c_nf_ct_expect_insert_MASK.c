
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nf_conntrack_helper {TYPE_1__* expect_policy; } ;
struct TYPE_7__ {scalar_t__ expires; } ;
struct nf_conntrack_expect {size_t class; int hnode; int lnode; TYPE_3__ timeout; int use; int tuple; int master; } ;
struct nf_conn_help {int * expecting; int expectations; int helper; } ;
struct TYPE_6__ {int expect_count; } ;
struct net {TYPE_2__ ct; } ;
struct TYPE_5__ {int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 struct net* FUNC_4 (struct nf_conntrack_expect*) ;
 unsigned int FUNC_5 (struct net*,int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 struct nf_conn_help* FUNC_6 (int ) ;
 struct nf_conntrack_helper* FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct nf_conntrack_expect *VAR_6)
{
 struct nf_conn_help *VAR_7 = FUNC_6(VAR_6->master);
 struct nf_conntrack_helper *VAR_8;
 struct net *VAR_9 = FUNC_4(VAR_6);
 unsigned int VAR_10 = FUNC_5(VAR_9, &VAR_6->tuple);


 FUNC_8(2, &VAR_6->use);

 FUNC_9(&VAR_6->timeout, VAR_5, 0);
 VAR_8 = FUNC_7(VAR_7->helper,
        FUNC_3(&VAR_3));
 if (VAR_8) {
  VAR_6->timeout.expires = VAR_2 +
   VAR_8->expect_policy[VAR_6->class].timeout * VAR_0;
 }
 FUNC_1(&VAR_6->timeout);

 FUNC_2(&VAR_6->lnode, &VAR_7->expectations);
 VAR_7->expecting[VAR_6->class]++;

 FUNC_2(&VAR_6->hnode, &VAR_4[VAR_10]);
 VAR_9->ct.expect_count++;

 FUNC_0(VAR_9, VAR_1);
}
