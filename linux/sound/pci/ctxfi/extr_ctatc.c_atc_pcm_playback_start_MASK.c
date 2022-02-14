
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int msr; } ;
struct src {unsigned int multi; TYPE_3__* ops; TYPE_1__ rsc; } ;
struct ct_atc_pcm {int started; int timer; TYPE_2__* vm_block; struct src* src; } ;
struct ct_atc {int dummy; } ;
struct TYPE_6__ {int (* commit_write ) (struct src*) ;int (* set_state ) (struct src*,int ) ;int (* set_bm ) (struct src*,int) ;int (* set_cisz ) (struct src*,unsigned int) ;int (* set_ca ) (struct src*,scalar_t__) ;int (* set_la ) (struct src*,scalar_t__) ;int (* set_sa ) (struct src*,scalar_t__) ;} ;
struct TYPE_5__ {scalar_t__ addr; scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct src*,scalar_t__) ;
 int FUNC_2 (struct src*,scalar_t__) ;
 int FUNC_3 (struct src*,scalar_t__) ;
 int FUNC_4 (struct src*,unsigned int) ;
 int FUNC_5 (struct src*,int) ;
 int FUNC_6 (struct src*,int ) ;
 int FUNC_7 (struct src*) ;

__attribute__((used)) static int FUNC_8(struct ct_atc *VAR_1, struct ct_atc_pcm *VAR_2)
{
 unsigned int VAR_3;
 struct src *VAR_4 = VAR_2->src;

 if (VAR_2->started)
  return 0;
 VAR_2->started = 1;

 VAR_3 = VAR_4->multi * VAR_4->rsc.msr;
 VAR_3 = 0x80 * (VAR_3 < 8 ? VAR_3 : 8);

 VAR_4->ops->set_sa(VAR_4, VAR_2->vm_block->addr);
 VAR_4->ops->set_la(VAR_4, VAR_2->vm_block->addr + VAR_2->vm_block->size);
 VAR_4->ops->set_ca(VAR_4, VAR_2->vm_block->addr + VAR_3);
 VAR_4->ops->set_cisz(VAR_4, VAR_3);

 VAR_4->ops->set_bm(VAR_4, 1);
 VAR_4->ops->set_state(VAR_4, VAR_0);
 VAR_4->ops->commit_write(VAR_4);

 FUNC_0(VAR_2->timer);
 return 0;
}
