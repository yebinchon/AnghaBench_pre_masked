
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct hci_mon_hdr {void* len; void* index; void* opcode; } ;
struct TYPE_2__ {int cookie; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 void* FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int ) ;
 struct hci_mon_hdr* FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,void const*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct sock *VAR_3, u16 VAR_4,
         u16 VAR_5, u16 VAR_6,
         const void *VAR_7)
{
 struct hci_mon_hdr *VAR_8;
 struct sk_buff *VAR_9;

 VAR_9 = FUNC_1(6 + VAR_6, VAR_0);
 if (!VAR_9)
  return ((void*)0);

 FUNC_5(FUNC_3(VAR_3)->cookie, FUNC_7(VAR_9, 4));
 FUNC_4(VAR_5, FUNC_7(VAR_9, 2));

 if (VAR_7)
  FUNC_8(VAR_9, VAR_7, VAR_6);

 FUNC_0(VAR_9);

 VAR_8 = FUNC_6(VAR_9, VAR_2);
 VAR_8->opcode = FUNC_2(VAR_1);
 VAR_8->index = FUNC_2(VAR_4);
 VAR_8->len = FUNC_2(VAR_9->len - VAR_2);

 return VAR_9;
}
