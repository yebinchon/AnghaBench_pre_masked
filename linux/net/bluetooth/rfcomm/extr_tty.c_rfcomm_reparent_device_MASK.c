
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dev {int tty_dev; int dst; int src; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ,int *) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 struct hci_dev* FUNC_6 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_7(struct rfcomm_dev *VAR_3)
{
 struct hci_dev *VAR_4;
 struct hci_conn *VAR_5;

 VAR_4 = FUNC_6(&VAR_3->dst, &VAR_3->src, VAR_1);
 if (!VAR_4)
  return;




 FUNC_3(VAR_4);
 VAR_5 = FUNC_2(VAR_4, VAR_0, &VAR_3->dst);




 if (VAR_5 && FUNC_0(&VAR_5->dev))
  FUNC_1(VAR_3->tty_dev, &VAR_5->dev, VAR_2);

 FUNC_5(VAR_4);
 FUNC_4(VAR_4);
}
