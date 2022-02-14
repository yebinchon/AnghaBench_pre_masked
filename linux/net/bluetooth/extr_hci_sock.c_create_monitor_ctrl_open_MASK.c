
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ver ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct hci_mon_hdr {void* len; void* index; void* opcode; } ;
struct TYPE_4__ {int cookie; int channel; TYPE_1__* hdev; int * comm; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 void* FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int,int *) ;
 struct hci_mon_hdr* FUNC_8 (struct sk_buff*,scalar_t__) ;
 int * FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int *,int) ;
 int FUNC_11 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_12(struct sock *VAR_8)
{
 struct hci_mon_hdr *VAR_9;
 struct sk_buff *VAR_10;
 u16 VAR_11;
 u8 VAR_12[3];
 u32 VAR_13;


 if (!FUNC_3(VAR_8)->cookie)
  return ((void*)0);

 switch (FUNC_3(VAR_8)->channel) {
 case 129:
  VAR_11 = 0x0000;
  VAR_12[0] = VAR_1;
  FUNC_6(VAR_0, VAR_12 + 1);
  break;
 case 128:
  VAR_11 = 0x0001;
  VAR_12[0] = VAR_1;
  FUNC_6(VAR_0, VAR_12 + 1);
  break;
 case 130:
  VAR_11 = 0x0002;
  FUNC_5(VAR_12);
  break;
 default:

  return ((void*)0);
 }

 VAR_10 = FUNC_1(14 + VAR_7 , VAR_2);
 if (!VAR_10)
  return ((void*)0);

 VAR_13 = FUNC_4(VAR_8, VAR_6) ? 0x1 : 0x0;

 FUNC_7(FUNC_3(VAR_8)->cookie, FUNC_9(VAR_10, 4));
 FUNC_6(VAR_11, FUNC_9(VAR_10, 2));
 FUNC_10(VAR_10, VAR_12, sizeof(VAR_12));
 FUNC_7(VAR_13, FUNC_9(VAR_10, 4));
 FUNC_11(VAR_10, VAR_7);
 FUNC_10(VAR_10, FUNC_3(VAR_8)->comm, VAR_7);

 FUNC_0(VAR_10);

 VAR_9 = FUNC_8(VAR_10, VAR_5);
 VAR_9->opcode = FUNC_2(VAR_4);
 if (FUNC_3(VAR_8)->hdev)
  VAR_9->index = FUNC_2(FUNC_3(VAR_8)->hdev->id);
 else
  VAR_9->index = FUNC_2(VAR_3);
 VAR_9->len = FUNC_2(VAR_10->len - VAR_5);

 return VAR_10;
}
