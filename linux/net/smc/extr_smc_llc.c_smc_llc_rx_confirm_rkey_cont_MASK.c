
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct smc_llc_msg_confirm_rkey_cont {TYPE_1__ hd; } ;
struct smc_link {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smc_link*,struct smc_llc_msg_confirm_rkey_cont*,int) ;

__attribute__((used)) static void FUNC_1(struct smc_link *VAR_1,
          struct smc_llc_msg_confirm_rkey_cont *VAR_2)
{
 if (VAR_2->hd.flags & VAR_0) {

 } else {

  VAR_2->hd.flags |= VAR_0;
  FUNC_0(VAR_1, VAR_2, sizeof(*VAR_2));
 }
}
