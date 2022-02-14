
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct nfc_llcp_local {int remote_lto; int link_timer; int tx_work; scalar_t__ rf_mode; scalar_t__ comm_mode; int target_idx; } ;
struct nfc_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 struct nfc_llcp_local* FUNC_2 (struct nfc_dev*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct nfc_dev *VAR_2, u32 VAR_3,
   u8 VAR_4, u8 VAR_5)
{
 struct nfc_llcp_local *VAR_6;

 FUNC_3("rf mode %d\n", VAR_5);

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 == ((void*)0))
  return;

 VAR_6->target_idx = VAR_3;
 VAR_6->comm_mode = VAR_4;
 VAR_6->rf_mode = VAR_5;

 if (VAR_5 == VAR_0) {
  FUNC_3("Queueing Tx work\n");

  FUNC_4(&VAR_6->tx_work);
 } else {
  FUNC_0(&VAR_6->link_timer,
     VAR_1 + FUNC_1(VAR_6->remote_lto));
 }
}
