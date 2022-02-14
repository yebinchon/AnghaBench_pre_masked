
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct smc_llc_msg_test_link {TYPE_1__ hd; } ;
struct smc_link {scalar_t__ state; int llc_testlink_resp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct smc_link*,struct smc_llc_msg_test_link*,int) ;

__attribute__((used)) static void FUNC_2(struct smc_link *VAR_2,
     struct smc_llc_msg_test_link *VAR_3)
{
 if (VAR_3->hd.flags & VAR_0) {
  if (VAR_2->state == VAR_1)
   FUNC_0(&VAR_2->llc_testlink_resp);
 } else {
  VAR_3->hd.flags |= VAR_0;
  FUNC_1(VAR_2, VAR_3, sizeof(*VAR_3));
 }
}
