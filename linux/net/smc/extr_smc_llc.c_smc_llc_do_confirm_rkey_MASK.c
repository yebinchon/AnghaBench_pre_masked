
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link {scalar_t__ llc_confirm_rkey_rc; int llc_confirm_rkey; } ;
struct smc_buf_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct smc_link*,struct smc_buf_desc*) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct smc_link *VAR_2,
       struct smc_buf_desc *VAR_3)
{
 int VAR_4;


 FUNC_0(&VAR_2->llc_confirm_rkey);
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(&VAR_2->llc_confirm_rkey,
             VAR_1);
 if (VAR_4 <= 0 || VAR_2->llc_confirm_rkey_rc)
  return -VAR_0;
 return 0;
}
