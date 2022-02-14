
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link {int llc_testlink_time; int llc_testlink_wrk; int llc_wq; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;

void FUNC_1(struct smc_link *VAR_2, int VAR_3)
{
 VAR_2->state = VAR_1;
 if (VAR_3) {
  VAR_2->llc_testlink_time = VAR_3 * VAR_0;
  FUNC_0(VAR_2->llc_wq, &VAR_2->llc_testlink_wrk,
       VAR_2->llc_testlink_time);
 }
}
