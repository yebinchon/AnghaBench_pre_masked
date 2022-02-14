
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union smcd_sw_event_info {int info; int code; int vlan_id; } ;
struct TYPE_6__ {int code; int tok; int info; } ;
struct smc_ism_event_work {TYPE_2__ event; TYPE_3__* smcd; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* signal_event ) (TYPE_3__*,int ,int ,int const,int ) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int const,int ) ;

__attribute__((used)) static void FUNC_2(struct smc_ism_event_work *VAR_3)
{
 union smcd_sw_event_info VAR_4;

 VAR_4.info = VAR_3->event.info;
 switch (VAR_3->event.code) {
 case 129:
  FUNC_0(VAR_3->smcd, VAR_3->event.tok, VAR_4.vlan_id);
  break;
 case 128:
  if (VAR_4.code == VAR_0) {
   VAR_4.code = VAR_2;
   VAR_3->smcd->ops->signal_event(VAR_3->smcd,
           VAR_3->event.tok,
           VAR_1,
           128,
           VAR_4.info);
   }
  break;
 }
}
