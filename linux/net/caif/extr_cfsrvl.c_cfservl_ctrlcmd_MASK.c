
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int id; } ;
struct cfsrvl {int open; int modem_flow_on; int phy_flow_on; TYPE_1__ dev_info; } ;
struct cflayer {TYPE_2__* up; } ;
typedef enum caif_ctrlcmd { ____Placeholder_caif_ctrlcmd } caif_ctrlcmd ;
struct TYPE_12__ {int (* ctrlcmd ) (TYPE_2__*,int,int) ;} ;
 struct cfsrvl* FUNC_0 (struct cflayer*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (TYPE_2__*,int const,int) ;
 int FUNC_7 (TYPE_2__*,int const,int) ;
 int FUNC_8 (TYPE_2__*,int,int) ;
 int FUNC_9 (TYPE_2__*,int,int) ;
 int FUNC_10 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_11(struct cflayer *VAR_0, enum caif_ctrlcmd VAR_1,
       int VAR_2)
{
 struct cfsrvl *VAR_3 = FUNC_0(VAR_0);

 if (VAR_0->up == ((void*)0) || VAR_0->up->ctrlcmd == ((void*)0))
  return;

 switch (VAR_1) {
 case 132:
  VAR_3->open = 1;
  VAR_0->up->ctrlcmd(VAR_0->up, VAR_1, VAR_2);
  break;
 case 136:
 case 133:
  VAR_3->open = 0;
  VAR_0->up->ctrlcmd(VAR_0->up, VAR_1, VAR_2);
  break;
 case 129:
  if (VAR_2 != VAR_3->dev_info.id)
   break;
  if (VAR_3->modem_flow_on)
   VAR_0->up->ctrlcmd(VAR_0->up,
       135, VAR_2);
  VAR_3->phy_flow_on = 0;
  break;
 case 128:
  if (VAR_2 != VAR_3->dev_info.id)
   return;
  if (VAR_3->modem_flow_on) {
   VAR_0->up->ctrlcmd(VAR_0->up,
        134,
        VAR_2);
  }
  VAR_3->phy_flow_on = 1;
  break;
 case 135:
  if (VAR_3->phy_flow_on) {
   VAR_0->up->ctrlcmd(VAR_0->up,
       135, VAR_2);
  }
  VAR_3->modem_flow_on = 0;
  break;
 case 134:
  if (VAR_3->phy_flow_on) {
   VAR_0->up->ctrlcmd(VAR_0->up,
       134, VAR_2);
  }
  VAR_3->modem_flow_on = 1;
  break;
 case 130:

  VAR_0->up->ctrlcmd(VAR_0->up,
    131, VAR_2);
  break;
 case 131:
  VAR_0->up->ctrlcmd(VAR_0->up, VAR_1, VAR_2);
  break;
 default:
  FUNC_1("Unexpected ctrl in cfsrvl (%d)\n", VAR_1);

  VAR_0->up->ctrlcmd(VAR_0->up, VAR_1, VAR_2);
  VAR_3->phy_flow_on = 1;
  break;
 }
}
