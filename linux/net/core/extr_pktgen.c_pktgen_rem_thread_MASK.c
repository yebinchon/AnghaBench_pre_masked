
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pktgen_thread {TYPE_2__* net; TYPE_1__* tsk; } ;
struct TYPE_4__ {int proc_dir; } ;
struct TYPE_3__ {int comm; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pktgen_thread *VAR_0)
{

 FUNC_0(VAR_0->tsk->comm, VAR_0->net->proc_dir);
}
