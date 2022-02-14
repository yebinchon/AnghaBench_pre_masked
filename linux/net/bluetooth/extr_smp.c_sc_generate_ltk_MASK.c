
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct smp_chan {int tk; int tfm_cmac; int flags; TYPE_1__* conn; } ;
struct link_key {scalar_t__ type; int val; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {int dst; struct hci_dev* hdev; } ;
struct TYPE_2__ {struct hci_conn* hcon; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_dev*,char*) ;
 struct link_key* FUNC_1 (struct hci_dev*,int *) ;
 int FUNC_2 (struct smp_chan*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int const*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int const*,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct smp_chan *VAR_3)
{

 const u8 VAR_4[4] = { 0x65, 0x6c, 0x72, 0x62 };
 struct hci_conn *VAR_5 = VAR_3->conn->hcon;
 struct hci_dev *VAR_6 = VAR_5->hdev;
 struct link_key *VAR_7;

 VAR_7 = FUNC_1(VAR_6, &VAR_5->dst);
 if (!VAR_7) {
  FUNC_0(VAR_6, "no Link Key found to generate LTK");
  return;
 }

 if (VAR_7->type == VAR_0)
  FUNC_3(VAR_2, &VAR_3->flags);

 if (FUNC_6(VAR_1, &VAR_3->flags)) {

  const u8 VAR_8[16] = { 0x32, 0x70, 0x6d, 0x74 };

  if (FUNC_5(VAR_3->tfm_cmac, VAR_7->val, VAR_8, VAR_3->tk))
   return;
 } else {

  const u8 VAR_9[4] = { 0x32, 0x70, 0x6d, 0x74 };

  if (FUNC_4(VAR_3->tfm_cmac, VAR_7->val, VAR_9, VAR_3->tk))
   return;
 }

 if (FUNC_4(VAR_3->tfm_cmac, VAR_3->tk, VAR_4, VAR_3->tk))
  return;

 FUNC_2(VAR_3);
}
