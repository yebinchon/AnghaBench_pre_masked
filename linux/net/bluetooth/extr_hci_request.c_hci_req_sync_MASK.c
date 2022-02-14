
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hci_dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_dev*,int (*) (struct hci_request*,unsigned long),unsigned long,int ,int *) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct hci_dev *VAR_2, int (*VAR_3)(struct hci_request *VAR_4,
        unsigned long VAR_5),
   unsigned long VAR_6, u32 VAR_7, u8 *VAR_8)
{
 int VAR_9;

 if (!FUNC_3(VAR_1, &VAR_2->flags))
  return -VAR_0;


 FUNC_1(VAR_2);
 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_6, VAR_7, VAR_8);
 FUNC_2(VAR_2);

 return VAR_9;
}
