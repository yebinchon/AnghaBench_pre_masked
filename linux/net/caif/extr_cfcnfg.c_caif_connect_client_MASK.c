
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct cflayer {scalar_t__ id; int * ctrlcmd; int * receive; } ;
struct cfctrl_link_param {scalar_t__ phyid; size_t linktype; } ;
struct cfcnfg_phyinfo {scalar_t__ id; int ifindex; int head_room; TYPE_1__* phy_layer; struct cflayer* frm_layer; } ;
struct cfcnfg {int ctrl; } ;
struct caif_connect_request {int dummy; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cfcnfg*,struct caif_connect_request*,struct cfctrl_link_param*) ;
 struct cfcnfg_phyinfo* FUNC_2 (struct cfcnfg*,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,struct cfctrl_link_param*,struct cflayer*) ;
 struct cfcnfg* FUNC_5 (struct net*) ;
 int FUNC_6 (char*) ;
 int* VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(struct net *VAR_3, struct caif_connect_request *VAR_4,
   struct cflayer *VAR_5, int *VAR_6,
   int *VAR_7, int *VAR_8)
{
 struct cflayer *VAR_9;
 struct cfcnfg_phyinfo *VAR_10;
 int VAR_11;
 struct cfctrl_link_param VAR_12;
 struct cfcnfg *VAR_13 = FUNC_5(VAR_3);

 FUNC_7();
 VAR_11 = FUNC_1(VAR_13, VAR_4, &VAR_12);
 if (VAR_11)
  goto unlock;

 VAR_10 = FUNC_2(VAR_13, VAR_12.phyid);
 if (!VAR_10) {
  VAR_11 = -VAR_1;
  goto unlock;
 }
 VAR_11 = -VAR_0;

 if (VAR_5 == ((void*)0)) {
  FUNC_6("adap_layer is zero\n");
  goto unlock;
 }
 if (VAR_5->receive == ((void*)0)) {
  FUNC_6("adap_layer->receive is NULL\n");
  goto unlock;
 }
 if (VAR_5->ctrlcmd == ((void*)0)) {
  FUNC_6("adap_layer->ctrlcmd == NULL\n");
  goto unlock;
 }

 VAR_11 = -VAR_1;
 VAR_9 = VAR_10->frm_layer;
 if (VAR_9 == ((void*)0)) {
  FUNC_6("Specified PHY type does not exist!\n");
  goto unlock;
 }
 FUNC_0(VAR_12.phyid == VAR_10->id);
 FUNC_0(VAR_10->frm_layer->id ==
       VAR_12.phyid);
 FUNC_0(VAR_10->phy_layer->id ==
       VAR_12.phyid);

 *VAR_6 = VAR_10->ifindex;
 *VAR_8 = 2;
 *VAR_7 = VAR_2[VAR_12.linktype] + VAR_10->head_room;

 FUNC_8();


 FUNC_3(VAR_13->ctrl, VAR_12.phyid);
 return FUNC_4(VAR_13->ctrl, &VAR_12, VAR_5);

unlock:
 FUNC_8();
 return VAR_11;
}
