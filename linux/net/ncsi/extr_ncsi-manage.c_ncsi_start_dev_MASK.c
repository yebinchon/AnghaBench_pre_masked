
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncsi_dev_priv {int flags; int work; scalar_t__ package_probe_id; } ;
struct ncsi_dev {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ncsi_dev_priv* FUNC_0 (struct ncsi_dev*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ncsi_dev*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ncsi_dev *VAR_5)
{
 struct ncsi_dev_priv *VAR_6 = FUNC_0(VAR_5);

 if (VAR_5->state != VAR_4 &&
     VAR_5->state != VAR_2)
  return -VAR_0;

 if (!(VAR_6->flags & VAR_1)) {
  VAR_6->package_probe_id = 0;
  VAR_5->state = VAR_3;
  FUNC_2(&VAR_6->work);
  return 0;
 }

 return FUNC_1(VAR_5);
}
