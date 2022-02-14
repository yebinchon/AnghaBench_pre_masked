
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct hci_filter {scalar_t__ opcode; int event_mask; int type_mask; } ;
typedef int __u8 ;
typedef int __le16 ;
struct TYPE_2__ {struct hci_filter filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static bool FUNC_5(struct sock *VAR_5, struct sk_buff *VAR_6)
{
 struct hci_filter *VAR_7;
 int VAR_8, VAR_9;


 VAR_7 = &FUNC_1(VAR_5)->filter;

 VAR_8 = FUNC_2(VAR_6) & VAR_4;

 if (!FUNC_4(VAR_8, &VAR_7->type_mask))
  return 1;


 if (FUNC_2(VAR_6) != VAR_0)
  return 0;

 VAR_9 = (*(__u8 *)VAR_6->data & VAR_3);

 if (!FUNC_3(VAR_9, &VAR_7->event_mask))
  return 1;


 if (!VAR_7->opcode)
  return 0;

 if (VAR_9 == VAR_1 &&
     VAR_7->opcode != FUNC_0((__le16 *)(VAR_6->data + 3)))
  return 1;

 if (VAR_9 == VAR_2 &&
     VAR_7->opcode != FUNC_0((__le16 *)(VAR_6->data + 4)))
  return 1;

 return 0;
}
