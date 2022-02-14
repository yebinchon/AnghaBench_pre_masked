
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int flags; scalar_t__ discov_timeout; int name; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 void* FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_5, struct sk_buff *VAR_6)
{
 __u8 VAR_7 = *((__u8 *) VAR_6->data);
 __u8 VAR_8;
 void *VAR_9;

 FUNC_0("%s status 0x%2.2x", VAR_5->name, VAR_7);

 VAR_9 = FUNC_4(VAR_5, VAR_1);
 if (!VAR_9)
  return;

 VAR_8 = *((__u8 *) VAR_9);

 FUNC_2(VAR_5);

 if (VAR_7) {
  VAR_5->discov_timeout = 0;
  goto done;
 }

 if (VAR_8 & VAR_3)
  FUNC_5(VAR_0, &VAR_5->flags);
 else
  FUNC_1(VAR_0, &VAR_5->flags);

 if (VAR_8 & VAR_4)
  FUNC_5(VAR_2, &VAR_5->flags);
 else
  FUNC_1(VAR_2, &VAR_5->flags);

done:
 FUNC_3(VAR_5);
}
