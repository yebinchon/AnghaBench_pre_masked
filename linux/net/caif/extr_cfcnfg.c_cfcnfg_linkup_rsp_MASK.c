
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int mtu; } ;
struct cflayer {int (* ctrlcmd ) (struct cflayer*,int ,int ) ;int id; } ;
struct TYPE_9__ {struct net_device* dev; } ;
struct cfcnfg_phyinfo {TYPE_2__ dev_info; TYPE_1__* phy_layer; int id; } ;
struct cfcnfg {struct cflayer* mux; int ctrl; } ;
typedef enum cfctrl_srv { ____Placeholder_cfctrl_srv } cfctrl_srv ;
struct TYPE_8__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int) ;
 struct cfcnfg_phyinfo* FUNC_1 (struct cfcnfg*,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 struct cflayer* FUNC_3 (int ,TYPE_2__*) ;
 struct cflayer* FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (struct cflayer*,struct cflayer*,int ) ;
 struct cflayer* FUNC_6 (int ,TYPE_2__*,int ) ;
 struct cflayer* FUNC_7 (int ,TYPE_2__*) ;
 struct cflayer* FUNC_8 (int ,TYPE_2__*) ;
 struct cflayer* FUNC_9 (int ,TYPE_2__*) ;
 struct cfcnfg* FUNC_10 (struct cflayer*) ;
 int FUNC_11 (struct cflayer*,struct cflayer*) ;
 int FUNC_12 (struct cflayer*,struct cflayer*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct cflayer*,int ,int ) ;
 int FUNC_19 (struct cflayer*,int ,int ) ;

__attribute__((used)) static void
FUNC_20(struct cflayer *VAR_2, u8 VAR_3, enum cfctrl_srv VAR_4,
    u8 VAR_5, struct cflayer *VAR_6)
{
 struct cfcnfg *VAR_7 = FUNC_10(VAR_2);
 struct cflayer *VAR_8 = ((void*)0);
 struct cfcnfg_phyinfo *VAR_9;
 struct net_device *VAR_10;

 if (VAR_3 == 0) {
  FUNC_15("received channel_id zero\n");
  if (VAR_6 != ((void*)0) && VAR_6->ctrlcmd != ((void*)0))
   VAR_6->ctrlcmd(VAR_6,
      VAR_0, 0);
  return;
 }

 FUNC_16();

 if (VAR_6 == ((void*)0)) {
  FUNC_13("link setup response but no client exist, send linkdown back\n");
  FUNC_2(VAR_7->ctrl, VAR_3, ((void*)0));
  goto unlock;
 }

 FUNC_0(VAR_7 != ((void*)0));
 FUNC_0(VAR_5 != 0);

 VAR_9 = FUNC_1(VAR_7, VAR_5);
 if (VAR_9 == ((void*)0)) {
  FUNC_14("ERROR: Link Layer Device disappeared while connecting\n");
  goto unlock;
 }

 FUNC_0(VAR_9 != ((void*)0));
 FUNC_0(VAR_9->id == VAR_5);
 FUNC_0(VAR_9->phy_layer != ((void*)0));
 FUNC_0(VAR_9->phy_layer->id == VAR_5);

 VAR_6->id = VAR_3;

 switch (VAR_4) {
 case 129:
  VAR_8 = FUNC_8(VAR_3, &VAR_9->dev_info);
  break;
 case 133:
  VAR_8 = FUNC_4(VAR_3,
     &VAR_9->dev_info);
  break;
 case 131:
  VAR_10 = VAR_9->dev_info.dev;
  VAR_8 = FUNC_6(VAR_3, &VAR_9->dev_info,
      VAR_10->mtu);
  break;
 case 130:
  VAR_8 = FUNC_7(VAR_3, &VAR_9->dev_info);
  break;
 case 128:
  VAR_8 = FUNC_9(VAR_3, &VAR_9->dev_info);
  break;
 case 132:
  VAR_8 = FUNC_3(VAR_3, &VAR_9->dev_info);
  break;
 default:
  FUNC_14("Protocol error. Link setup response - unknown channel type\n");
  goto unlock;
 }
 if (!VAR_8)
  goto unlock;
 FUNC_11(VAR_8, VAR_7->mux);
 FUNC_5(VAR_7->mux, VAR_8, VAR_3);
 FUNC_12(VAR_8, VAR_6);
 FUNC_11(VAR_6, VAR_8);

 FUNC_17();

 VAR_8->ctrlcmd(VAR_8, VAR_1, 0);
 return;
unlock:
 FUNC_17();
}
