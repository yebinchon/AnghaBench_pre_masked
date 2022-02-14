
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dev_type; } ;
struct hci_conn {int dummy; } ;
struct hci_chan {struct hci_conn* conn; } ;
typedef int __u16 ;




 int FUNC_0 (struct hci_dev*,char*,int) ;
 struct hci_chan* FUNC_1 (struct hci_dev*,int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ) ;

__attribute__((used)) static struct hci_conn *FUNC_3(struct hci_dev *VAR_0,
       __u16 VAR_1)
{
 struct hci_chan *VAR_2;

 switch (VAR_0->dev_type) {
 case 128:
  return FUNC_2(VAR_0, VAR_1);
 case 129:
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2->conn;
  break;
 default:
  FUNC_0(VAR_0, "unknown dev_type %d", VAR_0->dev_type);
  break;
 }

 return ((void*)0);
}
