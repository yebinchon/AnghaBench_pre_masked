
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct smc_llc_msg_del_link {TYPE_1__ hd; } ;
struct smc_link_group {scalar_t__ role; } ;
struct smc_link {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct smc_link_group* FUNC_0 (struct smc_link*) ;
 int FUNC_1 (struct smc_link_group*) ;
 int FUNC_2 (struct smc_link_group*) ;
 int FUNC_3 (struct smc_link*) ;
 int FUNC_4 (struct smc_llc_msg_del_link*,struct smc_link*,int ,int) ;
 int FUNC_5 (struct smc_link*,struct smc_llc_msg_del_link*,int) ;

__attribute__((used)) static void FUNC_6(struct smc_link *VAR_4,
       struct smc_llc_msg_del_link *VAR_5)
{
 struct smc_link_group *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5->hd.flags & VAR_0) {
  if (VAR_6->role == VAR_3)
   FUNC_2(VAR_6);
 } else {
  FUNC_1(VAR_6);
  FUNC_3(VAR_4);
  if (VAR_6->role == VAR_3) {

   FUNC_4(VAR_5, VAR_4, VAR_1, 1);
  } else {

   FUNC_4(VAR_5, VAR_4, VAR_2, 1);
  }
  FUNC_5(VAR_4, VAR_5, sizeof(*VAR_5));
  FUNC_2(VAR_6);
 }
}
