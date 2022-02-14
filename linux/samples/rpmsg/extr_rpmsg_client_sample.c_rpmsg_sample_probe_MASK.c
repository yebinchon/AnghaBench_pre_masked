
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_device {int dev; int ept; int dst; int src; } ;
struct instance_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,struct instance_data*) ;
 struct instance_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct rpmsg_device *VAR_3)
{
 int VAR_4;
 struct instance_data *VAR_5;

 FUNC_1(&VAR_3->dev, "new channel: 0x%x -> 0x%x!\n",
     VAR_3->src, VAR_3->dst);

 VAR_5 = FUNC_3(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_3->dev, VAR_5);


 VAR_4 = FUNC_4(VAR_3->ept, VAR_2, FUNC_5(VAR_2));
 if (VAR_4) {
  FUNC_0(&VAR_3->dev, "rpmsg_send failed: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
