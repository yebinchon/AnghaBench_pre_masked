
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nf_conntrack_expect {size_t class; int lnode; int hnode; int timeout; int master; } ;
struct nf_conn_help {int * expecting; } ;
struct TYPE_2__ {int expect_count; } ;
struct net {TYPE_1__ ct; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 struct net* FUNC_3 (struct nf_conntrack_expect*) ;
 int FUNC_4 (int ,struct nf_conntrack_expect*,int ,int) ;
 int FUNC_5 (struct nf_conntrack_expect*) ;
 struct nf_conn_help* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct nf_conntrack_expect *VAR_2,
    u32 VAR_3, int VAR_4)
{
 struct nf_conn_help *VAR_5 = FUNC_6(VAR_2->master);
 struct net *VAR_6 = FUNC_3(VAR_2);

 FUNC_1(!VAR_5);
 FUNC_1(FUNC_7(&VAR_2->timeout));

 FUNC_2(&VAR_2->hnode);
 VAR_6->ct.expect_count--;

 FUNC_2(&VAR_2->lnode);
 VAR_5->expecting[VAR_2->class]--;

 FUNC_4(VAR_0, VAR_2, VAR_3, VAR_4);
 FUNC_5(VAR_2);

 FUNC_0(VAR_6, VAR_1);
}
