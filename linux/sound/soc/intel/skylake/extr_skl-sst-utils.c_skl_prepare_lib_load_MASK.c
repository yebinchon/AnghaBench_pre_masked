
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sst_dsp {int dummy; } ;
struct skl_lib_info {TYPE_1__* fw; int name; } ;
struct skl_dev {scalar_t__ is_first_boot; int dev; struct sst_dsp* dsp; } ;
struct firmware {int size; int data; } ;
struct TYPE_3__ {int size; int data; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (TYPE_1__**,int ,int ) ;
 int FUNC_2 (struct firmware*) ;
 int FUNC_3 (struct sst_dsp*,TYPE_1__*,unsigned int,int) ;

int FUNC_4(struct skl_dev *VAR_0, struct skl_lib_info *VAR_1,
  struct firmware *VAR_2,
  unsigned int VAR_3, int VAR_4)
{
 int VAR_5;
 struct sst_dsp *VAR_6 = VAR_0->dsp;

 if (VAR_1->fw == ((void*)0)) {
  VAR_5 = FUNC_1(&VAR_1->fw, VAR_1->name,
     VAR_0->dev);
  if (VAR_5 < 0) {
   FUNC_0(VAR_0->dev, "Request lib %s failed:%d\n",
    VAR_1->name, VAR_5);
   return VAR_5;
  }
 }

 if (VAR_0->is_first_boot) {
  VAR_5 = FUNC_3(VAR_6, VAR_1->fw, VAR_3, VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_2->data = VAR_1->fw->data;
 VAR_2->size = VAR_1->fw->size;
 FUNC_2(VAR_2);

 return 0;
}
