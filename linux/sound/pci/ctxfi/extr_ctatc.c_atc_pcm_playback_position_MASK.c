
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int msr; } ;
struct src {int multi; TYPE_3__ rsc; TYPE_1__* ops; } ;
struct ct_atc_pcm {TYPE_4__* vm_block; struct src* src; } ;
struct ct_atc {TYPE_2__* card; } ;
struct TYPE_8__ {int addr; int size; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* get_ca ) (struct src*) ;} ;


 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (struct src*) ;

__attribute__((used)) static int
FUNC_2(struct ct_atc *VAR_0, struct ct_atc_pcm *VAR_1)
{
 struct src *VAR_2 = VAR_1->src;
 u32 VAR_3, VAR_4;
 int VAR_5;

 if (!VAR_2)
  return 0;
 VAR_5 = VAR_2->ops->get_ca(VAR_2);

 if (VAR_5 < VAR_1->vm_block->addr) {
  FUNC_0(VAR_0->card->dev,
   "bad ca - ca=0x%08x, vba=0x%08x, vbs=0x%08x\n",
   VAR_5, VAR_1->vm_block->addr, VAR_1->vm_block->size);
  VAR_5 = VAR_1->vm_block->addr;
 }

 VAR_3 = VAR_1->vm_block->size;
 VAR_4 = VAR_2->multi * VAR_2->rsc.msr;
 VAR_4 = 128 * (VAR_4 < 8 ? VAR_4 : 8);

 return (VAR_5 + VAR_3 - VAR_4 - VAR_1->vm_block->addr) % VAR_3;
}
