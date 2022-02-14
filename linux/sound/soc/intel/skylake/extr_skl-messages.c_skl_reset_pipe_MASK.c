
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_pipe {scalar_t__ state; } ;
struct skl_dev {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct skl_dev*,struct skl_pipe*,int ) ;

int FUNC_2(struct skl_dev *VAR_3, struct skl_pipe *VAR_4)
{
 int VAR_5;


 if (VAR_4->state < VAR_1)
  return 0;

 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3->dev, "Failed to reset pipe ret=%d\n", VAR_5);
  return VAR_5;
 }

 VAR_4->state = VAR_2;

 return 0;
}
