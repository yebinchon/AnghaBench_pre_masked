
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct smc_llc_msg_add_link {TYPE_1__ hd; } ;
struct smc_link_group {scalar_t__ role; } ;
struct smc_link {scalar_t__ state; int ibport; int gid; TYPE_2__* smcibdev; int llc_add; int llc_add_resp; } ;
struct TYPE_4__ {int * mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 struct smc_link_group* FUNC_1 (struct smc_link*) ;
 int FUNC_2 (struct smc_llc_msg_add_link*,struct smc_link*,int ,int ,int ) ;
 int FUNC_3 (struct smc_link*,struct smc_llc_msg_add_link*,int) ;

__attribute__((used)) static void FUNC_4(struct smc_link *VAR_5,
    struct smc_llc_msg_add_link *VAR_6)
{
 struct smc_link_group *VAR_7 = FUNC_1(VAR_5);

 if (VAR_6->hd.flags & VAR_0) {
  if (VAR_5->state == VAR_3)
   FUNC_0(&VAR_5->llc_add_resp);
 } else {
  if (VAR_5->state == VAR_3) {
   FUNC_0(&VAR_5->llc_add);
   return;
  }

  if (VAR_7->role == VAR_4) {
   FUNC_2(VAR_6, VAR_5,
     VAR_5->smcibdev->mac[VAR_5->ibport - 1],
     VAR_5->gid, VAR_1);

  } else {
   FUNC_2(VAR_6, VAR_5,
     VAR_5->smcibdev->mac[VAR_5->ibport - 1],
     VAR_5->gid, VAR_2);
  }
  FUNC_3(VAR_5, VAR_6, sizeof(*VAR_6));
 }
}
