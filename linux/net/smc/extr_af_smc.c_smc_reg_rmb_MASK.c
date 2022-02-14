
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link {int dummy; } ;
struct smc_buf_desc {int wr_reg; int regerr; int * mr_rx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct smc_link*,struct smc_buf_desc*) ;
 scalar_t__ FUNC_1 (struct smc_link*,int ) ;

__attribute__((used)) static int FUNC_2(struct smc_link *VAR_2, struct smc_buf_desc *VAR_3,
         bool VAR_4)
{
 if (!VAR_3->wr_reg) {

  if (FUNC_1(VAR_2, VAR_3->mr_rx[VAR_1])) {
   VAR_3->regerr = 1;
   return -VAR_0;
  }
  VAR_3->wr_reg = 1;
 }
 if (!VAR_4)
  return 0;

 if (FUNC_0(VAR_2, VAR_3)) {
  VAR_3->regerr = 1;
  return -VAR_0;
 }
 return 0;
}
