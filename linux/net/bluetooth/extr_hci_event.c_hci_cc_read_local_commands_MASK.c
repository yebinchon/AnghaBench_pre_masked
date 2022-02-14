
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_local_commands {int commands; scalar_t__ status; } ;
struct hci_dev {int commands; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_2,
           struct sk_buff *VAR_3)
{
 struct hci_rp_read_local_commands *VAR_4 = (void *) VAR_3->data;

 FUNC_0("%s status 0x%2.2x", VAR_2->name, VAR_4->status);

 if (VAR_4->status)
  return;

 if (FUNC_1(VAR_2, VAR_1) ||
     FUNC_1(VAR_2, VAR_0))
  FUNC_2(VAR_2->commands, VAR_4->commands, sizeof(VAR_2->commands));
}
