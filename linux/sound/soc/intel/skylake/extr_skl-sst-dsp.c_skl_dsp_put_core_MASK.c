
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* set_state_D3 ) (struct sst_dsp*,unsigned int) ;} ;
struct sst_dsp {int dev; TYPE_1__ fw_ops; struct skl_dev* thread_context; } ;
struct TYPE_4__ {unsigned int count; scalar_t__* usage_count; scalar_t__* state; } ;
struct skl_dev {TYPE_2__ cores; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (struct sst_dsp*,unsigned int) ;

int FUNC_3(struct sst_dsp *VAR_2, unsigned int VAR_3)
{
 struct skl_dev *VAR_4 = VAR_2->thread_context;
 int VAR_5 = 0;

 if (VAR_3 >= VAR_4->cores.count) {
  FUNC_1(VAR_2->dev, "invalid core id: %d\n", VAR_3);
  return -VAR_0;
 }

 if ((--VAR_4->cores.usage_count[VAR_3] == 0) &&
  (VAR_4->cores.state[VAR_3] != VAR_1)) {
  VAR_5 = VAR_2->fw_ops.set_state_D3(VAR_2, VAR_3);
  if (VAR_5 < 0) {
   FUNC_1(VAR_2->dev, "unable to put core %d: %d\n",
     VAR_3, VAR_5);
   VAR_4->cores.usage_count[VAR_3]++;
  }
 }

 FUNC_0(VAR_2->dev, "core id %d state %d usage_count %d\n",
   VAR_3, VAR_4->cores.state[VAR_3],
   VAR_4->cores.usage_count[VAR_3]);

 return VAR_5;
}
