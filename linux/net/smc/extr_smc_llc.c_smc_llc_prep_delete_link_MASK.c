
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct TYPE_4__ {int length; int flags; TYPE_1__ common; } ;
struct smc_llc_msg_del_link {int link_num; TYPE_2__ hd; } ;
struct smc_llc_msg_add_link {int dummy; } ;
struct smc_link {int link_id; } ;
typedef enum smc_llc_reqresp { ____Placeholder_smc_llc_reqresp } smc_llc_reqresp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smc_llc_msg_del_link*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct smc_llc_msg_del_link *VAR_5,
         struct smc_link *VAR_6,
         enum smc_llc_reqresp VAR_7, bool VAR_8)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->hd.common.type = VAR_0;
 VAR_5->hd.length = sizeof(struct smc_llc_msg_add_link);
 if (VAR_7 == VAR_4)
  VAR_5->hd.flags |= VAR_3;

 VAR_5->hd.flags |= VAR_1;
 if (VAR_8)
  VAR_5->hd.flags |= VAR_2;
 VAR_5->link_num = VAR_6->link_id;
}
