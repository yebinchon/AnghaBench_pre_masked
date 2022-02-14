
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sst_dsp {int dev; struct skl_dev* thread_context; } ;
struct skl_dev {int ipc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct sst_dsp*,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (struct sst_dsp*,int ) ;

__attribute__((used)) static int FUNC_4(struct sst_dsp *VAR_2, u16 VAR_3)
{
 int VAR_4;
 struct skl_dev *VAR_5 = VAR_2->thread_context;
 int VAR_6 = 0;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2->dev, "Module bad usage cnt!:%d\n", VAR_4);
  return -VAR_0;
 }


 if (VAR_4 > 0)
  return 0;

 VAR_6 = FUNC_2(&VAR_5->ipc,
   VAR_1, &VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2->dev, "Failed to UnLoad module\n");
  FUNC_1(VAR_2, VAR_3);
  return VAR_6;
 }

 return VAR_6;
}
