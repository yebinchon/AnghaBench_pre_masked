
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct smp_ltk {int enc_size; int val; int rand; int ediv; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct hci_conn {int flags; int enc_key_size; int role; int dst_type; int dst; int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct smp_ltk* FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (struct hci_conn*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct smp_ltk*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static bool FUNC_5(struct l2cap_conn *VAR_2, u8 VAR_3)
{
 struct smp_ltk *VAR_4;
 struct hci_conn *VAR_5 = VAR_2->hcon;

 VAR_4 = FUNC_1(VAR_5->hdev, &VAR_5->dst, VAR_5->dst_type, VAR_5->role);
 if (!VAR_4)
  return 0;

 if (FUNC_3(VAR_4) < VAR_3)
  return 0;

 if (FUNC_4(VAR_0, &VAR_5->flags))
  return 1;

 FUNC_2(VAR_5, VAR_4->ediv, VAR_4->rand, VAR_4->val, VAR_4->enc_size);
 VAR_5->enc_key_size = VAR_4->enc_size;


 FUNC_0(VAR_1, &VAR_5->flags);

 return 1;
}
