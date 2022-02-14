
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {int length; int add_link_rej_rsn; int flags; TYPE_1__ common; } ;
struct smc_llc_msg_add_link {int sender_gid; int sender_mac; TYPE_2__ hd; } ;
struct smc_link {int dummy; } ;
typedef enum smc_llc_reqresp { ____Placeholder_smc_llc_reqresp } smc_llc_reqresp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct smc_llc_msg_add_link*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct smc_llc_msg_add_link *VAR_7,
      struct smc_link *VAR_8, u8 VAR_9[], u8 VAR_10[],
      enum smc_llc_reqresp VAR_11)
{
 FUNC_1(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->hd.common.type = VAR_2;
 VAR_7->hd.length = sizeof(struct smc_llc_msg_add_link);
 if (VAR_11 == VAR_6) {
  VAR_7->hd.flags |= VAR_4;

  VAR_7->hd.flags |= VAR_3;
  VAR_7->hd.add_link_rej_rsn = VAR_5;
 }
 FUNC_0(VAR_7->sender_mac, VAR_9, VAR_0);
 FUNC_0(VAR_7->sender_gid, VAR_10, VAR_1);
}
