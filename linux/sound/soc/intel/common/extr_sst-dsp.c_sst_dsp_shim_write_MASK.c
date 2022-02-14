
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int shim; } ;
struct sst_dsp {int spinlock; TYPE_2__ addr; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* write ) (int ,int ,int ) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct sst_dsp *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->spinlock, VAR_3);
 VAR_0->ops->write(VAR_0->addr.shim, VAR_1, VAR_2);
 FUNC_1(&VAR_0->spinlock, VAR_3);
}
