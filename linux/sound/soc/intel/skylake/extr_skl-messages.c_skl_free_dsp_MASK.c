
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int usage_count; int state; } ;
struct skl_dev {TYPE_4__* dsp; TYPE_2__ cores; TYPE_1__* dsp_ops; } ;
struct hdac_bus {int dev; } ;
struct TYPE_7__ {scalar_t__ lpe; } ;
struct TYPE_8__ {TYPE_3__ addr; } ;
struct TYPE_5__ {int (* cleanup ) (int ,struct skl_dev*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 struct hdac_bus* FUNC_2 (struct skl_dev*) ;
 int FUNC_3 (struct hdac_bus*,int) ;
 int FUNC_4 (int ,struct skl_dev*) ;

int FUNC_5(struct skl_dev *VAR_0)
{
 struct hdac_bus *VAR_1 = FUNC_2(VAR_0);


 FUNC_3(VAR_1, 0);

 VAR_0->dsp_ops->cleanup(VAR_1->dev, VAR_0);

 FUNC_1(VAR_0->cores.state);
 FUNC_1(VAR_0->cores.usage_count);

 if (VAR_0->dsp->addr.lpe)
  FUNC_0(VAR_0->dsp->addr.lpe);

 return 0;
}
