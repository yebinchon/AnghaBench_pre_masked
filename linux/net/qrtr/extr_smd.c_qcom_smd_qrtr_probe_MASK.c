
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_device {int dev; int ept; } ;
struct TYPE_2__ {int xmit; } ;
struct qrtr_smd_dev {TYPE_1__ ep; int * dev; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct qrtr_smd_dev*) ;
 struct qrtr_smd_dev* FUNC_2 (int *,int,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(struct rpmsg_device *VAR_4)
{
 struct qrtr_smd_dev *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->channel = VAR_4->ept;
 VAR_5->dev = &VAR_4->dev;
 VAR_5->ep.xmit = VAR_3;

 VAR_6 = FUNC_3(&VAR_5->ep, VAR_2);
 if (VAR_6)
  return VAR_6;

 FUNC_1(&VAR_4->dev, VAR_5);

 FUNC_0(&VAR_4->dev, "Qualcomm SMD QRTR driver probed\n");

 return 0;
}
