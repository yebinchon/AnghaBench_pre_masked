
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {scalar_t__ voice_setting; int (* notify ) (struct hci_dev*,int ) ;int name; } ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_2,
           struct sk_buff *VAR_3)
{
 __u8 VAR_4 = *((__u8 *) VAR_3->data);
 __u16 VAR_5;
 void *VAR_6;

 FUNC_0("%s status 0x%2.2x", VAR_2->name, VAR_4);

 if (VAR_4)
  return;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_6)
  return;

 VAR_5 = FUNC_1(VAR_6);

 if (VAR_2->voice_setting == VAR_5)
  return;

 VAR_2->voice_setting = VAR_5;

 FUNC_0("%s voice setting 0x%4.4x", VAR_2->name, VAR_5);

 if (VAR_2->notify)
  VAR_2->notify(VAR_2, VAR_0);
}
