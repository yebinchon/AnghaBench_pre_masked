
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nci_dev {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* hci_event_received ) (struct nci_dev*,int ,int ,struct sk_buff*) ;} ;


 int FUNC_0 (struct nci_dev*,int ,int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_0, u8 VAR_1,
       u8 VAR_2, struct sk_buff *VAR_3)
{
 if (VAR_0->ops->hci_event_received)
  VAR_0->ops->hci_event_received(VAR_0, VAR_1, VAR_2, VAR_3);
}
