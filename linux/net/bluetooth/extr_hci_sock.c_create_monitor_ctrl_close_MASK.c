
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct hci_mon_hdr {void* len; void* index; void* opcode; } ;
struct TYPE_4__ {int channel; TYPE_1__* hdev; int cookie; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 void* FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int ) ;
 struct hci_mon_hdr* FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct sock *VAR_4)
{
 struct hci_mon_hdr *VAR_5;
 struct sk_buff *VAR_6;


 if (!FUNC_3(VAR_4)->cookie)
  return ((void*)0);

 switch (FUNC_3(VAR_4)->channel) {
 case 129:
 case 128:
 case 130:
  break;
 default:

  return ((void*)0);
 }

 VAR_6 = FUNC_1(4, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_4(FUNC_3(VAR_4)->cookie, FUNC_6(VAR_6, 4));

 FUNC_0(VAR_6);

 VAR_5 = FUNC_5(VAR_6, VAR_3);
 VAR_5->opcode = FUNC_2(VAR_2);
 if (FUNC_3(VAR_4)->hdev)
  VAR_5->index = FUNC_2(FUNC_3(VAR_4)->hdev->id);
 else
  VAR_5->index = FUNC_2(VAR_1);
 VAR_5->len = FUNC_2(VAR_6->len - VAR_3);

 return VAR_6;
}
