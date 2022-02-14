
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw {int (* card_init ) (struct hw*,struct card_conf*) ;TYPE_1__* card; } ;
struct ct_atc {TYPE_1__* card; int * rsc_mgrs; struct hw* hw; int msr; int rsr; int model; int chip_type; int pci; } ;
struct card_conf {int vm_pgt_phys; int msr; int rsr; int member_0; } ;
struct TYPE_4__ {int (* create ) (struct hw*,int *) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ct_atc*,int ) ;
 int FUNC_1 (int ,int ,int ,struct hw**) ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (struct hw*,struct card_conf*) ;
 int FUNC_4 (struct hw*,int *) ;

__attribute__((used)) static int FUNC_5(struct ct_atc *VAR_2)
{
 struct hw *VAR_3;
 struct card_conf VAR_4 = {0};
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_2->pci, VAR_2->chip_type, VAR_2->model, &VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_2->card->dev, "Failed to create hw obj!!!\n");
  return VAR_6;
 }
 VAR_3->card = VAR_2->card;
 VAR_2->hw = VAR_3;


 VAR_4.rsr = VAR_2->rsr;
 VAR_4.msr = VAR_2->msr;
 VAR_4.vm_pgt_phys = FUNC_0(VAR_2, 0);
 VAR_6 = VAR_3->card_init(VAR_3, &VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!VAR_1[VAR_5].create)
   continue;

  VAR_6 = VAR_1[VAR_5].create(VAR_2->hw, &VAR_2->rsc_mgrs[VAR_5]);
  if (VAR_6) {
   FUNC_2(VAR_2->card->dev,
    "Failed to create rsc_mgr %d!!!\n", VAR_5);
   return VAR_6;
  }
 }

 return 0;
}
