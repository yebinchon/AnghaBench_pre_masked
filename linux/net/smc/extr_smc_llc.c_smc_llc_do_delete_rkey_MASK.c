
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link {int llc_delete_rkey_mutex; scalar_t__ llc_delete_rkey_rc; int llc_delete_rkey; } ;
struct smc_buf_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smc_link*,struct smc_buf_desc*) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(struct smc_link *VAR_2,
      struct smc_buf_desc *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_2->llc_delete_rkey_mutex);
 FUNC_2(&VAR_2->llc_delete_rkey);
 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_4(&VAR_2->llc_delete_rkey,
             VAR_1);
 if (VAR_4 <= 0 || VAR_2->llc_delete_rkey_rc)
  VAR_4 = -VAR_0;
 else
  VAR_4 = 0;
out:
 FUNC_1(&VAR_2->llc_delete_rkey_mutex);
 return VAR_4;
}
