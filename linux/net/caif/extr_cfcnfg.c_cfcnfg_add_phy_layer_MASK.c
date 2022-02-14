
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct net_device {int ifindex; } ;
struct cflayer {void* id; } ;
struct TYPE_2__ {struct net_device* dev; void* id; } ;
struct cfcnfg_phyinfo {int pref; int ifindex; int head_room; int use_fcs; int node; struct cflayer* frm_layer; struct cflayer* phy_layer; TYPE_1__ dev_info; void* id; } ;
struct cfcnfg {int lock; int phys; struct cflayer* mux; } ;
typedef enum cfcnfg_phy_preference { ____Placeholder_cfcnfg_phy_preference } cfcnfg_phy_preference ;


 int VAR_0 ;
 int * FUNC_0 (struct cfcnfg*,void*) ;
 struct cflayer* FUNC_1 (void*,int) ;
 int FUNC_2 (struct cfcnfg_phyinfo*) ;
 struct cfcnfg_phyinfo* FUNC_3 (int,int ) ;
 int FUNC_4 (struct cflayer*,struct cflayer*) ;
 int FUNC_5 (struct cflayer*,struct cflayer*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;

void
FUNC_10(struct cfcnfg *VAR_1,
       struct net_device *VAR_2, struct cflayer *VAR_3,
       enum cfcnfg_phy_preference VAR_4,
       struct cflayer *VAR_5,
       bool VAR_6, int VAR_7)
{
 struct cflayer *VAR_8;
 struct cfcnfg_phyinfo *VAR_9 = ((void*)0);
 int VAR_10;
 u8 VAR_11;

 FUNC_7(&VAR_1->lock);


 for (VAR_10 = 0; VAR_10 < 7; VAR_10++) {
  VAR_11 = (VAR_2->ifindex + VAR_10) & 0x7;
  if (VAR_11 == 0)
   continue;
  if (FUNC_0(VAR_1, VAR_11) == ((void*)0))
   goto got_phyid;
 }
 FUNC_9("Too many CAIF Link Layers (max 6)\n");
 goto out;

got_phyid:
 VAR_9 = FUNC_3(sizeof(struct cfcnfg_phyinfo), VAR_0);
 if (!VAR_9)
  goto out_err;

 VAR_3->id = VAR_11;
 VAR_9->pref = VAR_4;
 VAR_9->id = VAR_11;
 VAR_9->dev_info.id = VAR_11;
 VAR_9->dev_info.dev = VAR_2;
 VAR_9->phy_layer = VAR_3;
 VAR_9->ifindex = VAR_2->ifindex;
 VAR_9->head_room = VAR_7;
 VAR_9->use_fcs = VAR_6;

 VAR_8 = FUNC_1(VAR_11, VAR_6);

 if (!VAR_8)
  goto out_err;
 VAR_9->frm_layer = VAR_8;
 FUNC_5(VAR_8, VAR_1->mux);

 if (VAR_5 != ((void*)0)) {
  VAR_5->id = VAR_11;
  FUNC_4(VAR_8, VAR_5);
  FUNC_5(VAR_5, VAR_8);
  FUNC_4(VAR_5, VAR_3);
  FUNC_5(VAR_3, VAR_5);
 } else {
  FUNC_4(VAR_8, VAR_3);
  FUNC_5(VAR_3, VAR_8);
 }

 FUNC_6(&VAR_9->node, &VAR_1->phys);
out:
 FUNC_8(&VAR_1->lock);
 return;

out_err:
 FUNC_2(VAR_9);
 FUNC_8(&VAR_1->lock);
}
