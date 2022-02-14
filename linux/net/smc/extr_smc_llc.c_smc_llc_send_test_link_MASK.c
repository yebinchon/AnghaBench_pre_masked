
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct smc_wr_tx_pend_priv {int dummy; } ;
struct smc_wr_buf {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int length; TYPE_2__ common; } ;
struct smc_llc_msg_test_link {int user_data; TYPE_1__ hd; } ;
struct smc_link {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct smc_llc_msg_test_link*,int ,int) ;
 int FUNC_2 (struct smc_link*,struct smc_wr_buf**,struct smc_wr_tx_pend_priv**) ;
 int FUNC_3 (struct smc_link*,struct smc_wr_tx_pend_priv*) ;

__attribute__((used)) static int FUNC_4(struct smc_link *VAR_1, u8 VAR_2[16])
{
 struct smc_llc_msg_test_link *VAR_3;
 struct smc_wr_tx_pend_priv *VAR_4;
 struct smc_wr_buf *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, &VAR_5, &VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_3 = (struct smc_llc_msg_test_link *)VAR_5;
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->hd.common.type = VAR_0;
 VAR_3->hd.length = sizeof(struct smc_llc_msg_test_link);
 FUNC_0(VAR_3->user_data, VAR_2, sizeof(VAR_3->user_data));

 VAR_6 = FUNC_3(VAR_1, VAR_4);
 return VAR_6;
}
