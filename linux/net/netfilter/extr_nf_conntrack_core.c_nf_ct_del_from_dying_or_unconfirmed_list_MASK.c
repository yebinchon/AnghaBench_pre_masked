
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nf_conn {TYPE_2__* tuplehash; int cpu; } ;
struct ct_pcpu {int lock; } ;
struct TYPE_4__ {int pcpu_lists; } ;
struct TYPE_6__ {TYPE_1__ ct; } ;
struct TYPE_5__ {int hnnode; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (struct nf_conn*) ;
 struct ct_pcpu* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct nf_conn *VAR_1)
{
 struct ct_pcpu *VAR_2;


 VAR_2 = FUNC_4(FUNC_3(VAR_1)->ct.pcpu_lists, VAR_1->cpu);

 FUNC_5(&VAR_2->lock);
 FUNC_0(FUNC_2(&VAR_1->tuplehash[VAR_0].hnnode));
 FUNC_1(&VAR_1->tuplehash[VAR_0].hnnode);
 FUNC_6(&VAR_2->lock);
}
