
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpmsg_device {int dev; } ;
struct qrtr_smd_dev {int dev; int ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct qrtr_smd_dev* FUNC_1 (int *) ;
 int FUNC_2 (int *,void*,int) ;

__attribute__((used)) static int FUNC_3(struct rpmsg_device *VAR_2,
      void *VAR_3, int VAR_4, void *VAR_5, u32 VAR_6)
{
 struct qrtr_smd_dev *VAR_7 = FUNC_1(&VAR_2->dev);
 int VAR_8;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(&VAR_7->ep, VAR_3, VAR_4);
 if (VAR_8 == -VAR_1) {
  FUNC_0(VAR_7->dev, "invalid ipcrouter packet\n");

  VAR_8 = 0;
 }

 return VAR_8;
}
