
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct work_struct {int dummy; } ;
struct sock {int sk_shutdown; int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct nfc_dev {int dummy; } ;
struct TYPE_2__ {int target_idx; struct nfc_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfc_dev*,int ,struct sk_buff*,int ,struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (char*,struct sock*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct sock*,int) ;
 int FUNC_4 (struct sock*) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 struct sock* FUNC_8 (struct work_struct*) ;

__attribute__((used)) static void FUNC_9(struct work_struct *VAR_2)
{
 struct sock *VAR_3 = FUNC_8(VAR_2);
 struct nfc_dev *VAR_4 = FUNC_1(VAR_3)->dev;
 u32 VAR_5 = FUNC_1(VAR_3)->target_idx;
 struct sk_buff *VAR_6;
 int VAR_7;

 FUNC_2("sk=%p target_idx=%u\n", VAR_3, VAR_5);

 if (VAR_3->sk_shutdown & VAR_0) {
  FUNC_4(VAR_3);
  return;
 }

 VAR_6 = FUNC_5(&VAR_3->sk_write_queue);

 FUNC_6(VAR_3);
 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6,
          VAR_1, VAR_3);
 if (VAR_7) {
  FUNC_3(VAR_3, VAR_7);
  FUNC_7(VAR_3);
 }
}
