
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use; } ;
struct nf_conn {TYPE_1__ ct_general; } ;
struct TYPE_4__ {int count; } ;
struct net {TYPE_2__ ct; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,struct nf_conn*) ;
 int VAR_0 ;
 int FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (struct nf_conn*) ;
 struct net* FUNC_6 (struct nf_conn*) ;
 int FUNC_7 () ;

void FUNC_8(struct nf_conn *VAR_1)
{
 struct net *VAR_2 = FUNC_6(VAR_1);




 FUNC_0(FUNC_2(&VAR_1->ct_general.use) != 0);

 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_3(VAR_0, VAR_1);
 FUNC_7();
 FUNC_1(&VAR_2->ct.count);
}
