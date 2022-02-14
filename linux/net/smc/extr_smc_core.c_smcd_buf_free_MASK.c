
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smcd_cdc_msg {int dummy; } ;
struct smc_link_group {int smcd; } ;
struct smc_buf_desc {int len; struct smc_buf_desc* cpu_addr; } ;


 int FUNC_0 (struct smc_buf_desc*) ;
 int FUNC_1 (int ,struct smc_buf_desc*) ;

__attribute__((used)) static void FUNC_2(struct smc_link_group *VAR_0, bool VAR_1,
     struct smc_buf_desc *VAR_2)
{
 if (VAR_1) {

  VAR_2->len += sizeof(struct smcd_cdc_msg);
  FUNC_1(VAR_0->smcd, VAR_2);
 } else {
  FUNC_0(VAR_2->cpu_addr);
 }
 FUNC_0(VAR_2);
}
