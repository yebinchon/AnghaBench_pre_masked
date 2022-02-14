
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cflayer {int id; } ;
struct cfcnfg_phyinfo {int up; int frm_layer; } ;
struct cfcnfg {int mux; } ;


 int VAR_0 ;
 struct cfcnfg_phyinfo* FUNC_0 (struct cfcnfg*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(struct cfcnfg *VAR_1, struct cflayer *VAR_2,
    bool VAR_3)
{
 struct cfcnfg_phyinfo *VAR_4;

 FUNC_5();
 VAR_4 = FUNC_0(VAR_1, VAR_2->id);
 if (VAR_4 == ((void*)0)) {
  FUNC_6();
  return -VAR_0;
 }

 if (VAR_4->up == VAR_3) {
  FUNC_6();
  return 0;
 }
 VAR_4->up = VAR_3;

 if (VAR_3) {
  FUNC_1(VAR_4->frm_layer);
  FUNC_4(VAR_1->mux, VAR_4->frm_layer,
     VAR_2->id);
 } else {
  FUNC_3(VAR_1->mux, VAR_2->id);
  FUNC_2(VAR_4->frm_layer);
 }

 FUNC_6();
 return 0;
}
