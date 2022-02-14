
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union smcd_sw_event_info {int info; int code; int vlan_id; int uid; } ;
struct smc_link_group {int peer_gid; TYPE_2__* smcd; int vlan_id; int id; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* signal_event ) (TYPE_2__*,int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ) ;

int FUNC_2(struct smc_link_group *VAR_4)
{
 int VAR_5;
 union smcd_sw_event_info VAR_6;

 FUNC_0(VAR_6.uid, VAR_4->id, VAR_3);
 VAR_6.vlan_id = VAR_4->vlan_id;
 VAR_6.code = VAR_1;
 VAR_5 = VAR_4->smcd->ops->signal_event(VAR_4->smcd, VAR_4->peer_gid,
       VAR_2,
       VAR_0,
       VAR_6.info);
 return VAR_5;
}
