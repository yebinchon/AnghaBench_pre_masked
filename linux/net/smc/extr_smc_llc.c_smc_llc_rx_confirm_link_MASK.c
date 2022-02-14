
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct smc_llc_msg_confirm_link {int link_num; TYPE_1__ hd; } ;
struct smc_link_group {scalar_t__ role; } ;
struct smc_link {scalar_t__ state; int llc_confirm_resp_rc; int llc_confirm_rc; int llc_confirm; int link_id; int llc_confirm_resp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 struct smc_link_group* FUNC_1 (struct smc_link*) ;

__attribute__((used)) static void FUNC_2(struct smc_link *VAR_6,
        struct smc_llc_msg_confirm_link *VAR_7)
{
 struct smc_link_group *VAR_8 = FUNC_1(VAR_6);
 int VAR_9;


 if (VAR_7->hd.flags & VAR_2)
  VAR_9 = 0;
 else
  VAR_9 = VAR_0;

 if (VAR_7->hd.flags & VAR_3) {
  if (VAR_8->role == VAR_5 &&
      VAR_6->state == VAR_4) {
   VAR_6->llc_confirm_resp_rc = VAR_9;
   FUNC_0(&VAR_6->llc_confirm_resp);
  }
 } else {
  if (VAR_8->role == VAR_1 &&
      VAR_6->state == VAR_4) {
   VAR_6->llc_confirm_rc = VAR_9;
   VAR_6->link_id = VAR_7->link_num;
   FUNC_0(&VAR_6->llc_confirm);
  }
 }
}
