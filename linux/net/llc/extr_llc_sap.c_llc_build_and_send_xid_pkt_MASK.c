
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_6__ {int mac; int lsap; } ;
struct TYPE_7__ {int mac; int lsap; } ;
struct llc_sap_state_ev {int prim_type; int prim; int type; TYPE_2__ daddr; TYPE_3__ saddr; } ;
struct TYPE_8__ {int lsap; } ;
struct llc_sap {TYPE_4__ laddr; } ;
struct TYPE_5__ {int * dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct llc_sap_state_ev* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct llc_sap*,struct sk_buff*) ;
 int FUNC_2 (int ,int *,int ) ;

void FUNC_3(struct llc_sap *VAR_4, struct sk_buff *VAR_5,
    u8 *VAR_6, u8 VAR_7)
{
 struct llc_sap_state_ev *VAR_8 = FUNC_0(VAR_5);

 VAR_8->saddr.lsap = VAR_4->laddr.lsap;
 VAR_8->daddr.lsap = VAR_7;
 FUNC_2(VAR_8->saddr.mac, VAR_5->dev->dev_addr, VAR_0);
 FUNC_2(VAR_8->daddr.mac, VAR_6, VAR_0);

 VAR_8->type = VAR_2;
 VAR_8->prim = VAR_3;
 VAR_8->prim_type = VAR_1;
 FUNC_1(VAR_4, VAR_5);
}
