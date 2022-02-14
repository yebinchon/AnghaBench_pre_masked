
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {int dummy; } ;
struct rfcomm_dev_req {int channel; int dev_id; } ;
struct rfcomm_dev {int id; struct rfcomm_dev* tty_dev; int port; } ;
struct device {int id; struct device* tty_dev; int port; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct rfcomm_dev*) ;
 int FUNC_3 (struct rfcomm_dev*) ;
 struct rfcomm_dev* FUNC_4 (struct rfcomm_dev_req*,struct rfcomm_dlc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct rfcomm_dev*,struct rfcomm_dev*) ;
 scalar_t__ FUNC_6 (struct rfcomm_dev*,int *) ;
 int FUNC_7 (struct rfcomm_dlc*) ;
 int FUNC_8 (struct rfcomm_dev*) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 struct rfcomm_dev* FUNC_10 (int *,int ,int,int *) ;

__attribute__((used)) static int FUNC_11(struct rfcomm_dev_req *VAR_3, struct rfcomm_dlc *VAR_4)
{
 struct rfcomm_dev *VAR_5;
 struct device *VAR_6;

 FUNC_0("id %d channel %d", VAR_3->dev_id, VAR_3->channel);

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (FUNC_2(VAR_5)) {
  FUNC_7(VAR_4);
  return FUNC_3(VAR_5);
 }

 VAR_6 = FUNC_10(&VAR_5->port, VAR_2,
   VAR_5->id, ((void*)0));
 if (FUNC_2(VAR_6)) {
  FUNC_9(&VAR_5->port);
  return FUNC_3(VAR_6);
 }

 VAR_5->tty_dev = VAR_6;
 FUNC_8(VAR_5);
 FUNC_5(VAR_5->tty_dev, VAR_5);

 if (FUNC_6(VAR_5->tty_dev, &VAR_0) < 0)
  FUNC_1("Failed to create address attribute");

 if (FUNC_6(VAR_5->tty_dev, &VAR_1) < 0)
  FUNC_1("Failed to create channel attribute");

 return VAR_5->id;
}
