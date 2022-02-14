
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_device {int dev; } ;
struct qrtr_smd_dev {int ep; } ;


 struct qrtr_smd_dev* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rpmsg_device *VAR_0)
{
 struct qrtr_smd_dev *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_2(&VAR_1->ep);

 FUNC_1(&VAR_0->dev, ((void*)0));
}
