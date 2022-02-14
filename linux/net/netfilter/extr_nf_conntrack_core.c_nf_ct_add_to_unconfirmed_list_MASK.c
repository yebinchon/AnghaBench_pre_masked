
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nf_conn {TYPE_2__* tuplehash; int cpu; } ;
struct ct_pcpu {int lock; int unconfirmed; } ;
struct TYPE_4__ {int pcpu_lists; } ;
struct TYPE_6__ {TYPE_1__ ct; } ;
struct TYPE_5__ {int hnnode; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *) ;
 TYPE_3__* FUNC_1 (struct nf_conn*) ;
 struct ct_pcpu* FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct nf_conn *VAR_1)
{
 struct ct_pcpu *VAR_2;


 VAR_1->cpu = FUNC_3();
 VAR_2 = FUNC_2(FUNC_1(VAR_1)->ct.pcpu_lists, VAR_1->cpu);

 FUNC_4(&VAR_2->lock);
 FUNC_0(&VAR_1->tuplehash[VAR_0].hnnode,
        &VAR_2->unconfirmed);
 FUNC_5(&VAR_2->lock);
}
