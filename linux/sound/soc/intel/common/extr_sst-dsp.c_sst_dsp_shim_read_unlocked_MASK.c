
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int shim; } ;
struct sst_dsp {TYPE_2__ addr; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* read ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

u32 FUNC_1(struct sst_dsp *VAR_0, u32 VAR_1)
{
 return VAR_0->ops->read(VAR_0->addr.shim, VAR_1);
}
