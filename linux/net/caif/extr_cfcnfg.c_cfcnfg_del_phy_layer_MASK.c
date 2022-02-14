
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct cflayer {scalar_t__ id; struct cflayer* phy_layer; struct cflayer* dn; struct cflayer* frm_layer; int node; } ;
struct cfcnfg_phyinfo {scalar_t__ id; struct cfcnfg_phyinfo* phy_layer; struct cfcnfg_phyinfo* dn; struct cfcnfg_phyinfo* frm_layer; int node; } ;
struct cfcnfg {int lock; int phys; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct cflayer* FUNC_1 (struct cfcnfg*,scalar_t__) ;
 int FUNC_2 (struct cflayer*) ;
 scalar_t__ FUNC_3 (struct cflayer*) ;
 int FUNC_4 (struct cflayer*,int *) ;
 int FUNC_5 (struct cflayer*,int *) ;
 int FUNC_6 (struct cflayer*) ;
 int FUNC_7 (struct cflayer*,int *) ;
 int FUNC_8 (struct cflayer*,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;

int FUNC_16(struct cfcnfg *VAR_1, struct cflayer *VAR_2)
{
 struct cflayer *VAR_3, *VAR_4;
 u16 VAR_5;
 struct cfcnfg_phyinfo *VAR_6;

 FUNC_11();

 FUNC_12(&VAR_1->lock);

 VAR_5 = VAR_2->id;
 VAR_6 = FUNC_1(VAR_1, VAR_5);

 if (VAR_6 == ((void*)0)) {
  FUNC_13(&VAR_1->lock);
  return 0;
 }
 FUNC_0(VAR_5 == VAR_6->id);
 FUNC_0(VAR_2 == VAR_6->phy_layer);
 FUNC_0(VAR_2->id == VAR_5);
 FUNC_0(VAR_6->frm_layer->id == VAR_5);

 FUNC_10(&VAR_6->node);
 FUNC_15();


 if (FUNC_3(VAR_6->frm_layer) != 0) {
  FUNC_14("Wait for device inuse\n");
  FUNC_9(&VAR_6->node, &VAR_1->phys);
  FUNC_13(&VAR_1->lock);
  return -VAR_0;
 }

 VAR_3 = VAR_6->frm_layer;
 VAR_4 = VAR_3->dn;
 FUNC_5(VAR_3, ((void*)0));
 FUNC_4(VAR_3, ((void*)0));
 if (VAR_2 != VAR_4) {
  FUNC_8(VAR_4, ((void*)0));
  FUNC_7(VAR_4, ((void*)0));
 }
 FUNC_8(VAR_2, ((void*)0));

 if (VAR_6->phy_layer != VAR_4)
  FUNC_6(VAR_4);

 FUNC_2(VAR_3);
 FUNC_6(VAR_6);
 FUNC_13(&VAR_1->lock);

 return 0;
}
