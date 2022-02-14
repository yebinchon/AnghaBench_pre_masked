
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct nfit_test {int num_dcr; int * dimm_dev; scalar_t__ dcr_idx; TYPE_1__ pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int *,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,struct nfit_test*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct nfit_test *VAR_4)
{
 int VAR_5;

 if (FUNC_1(&VAR_4->pdev.dev, VAR_3, VAR_4))
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_4->num_dcr; VAR_5++) {
  VAR_4->dimm_dev[VAR_5] = FUNC_0(VAR_1,
    &VAR_4->pdev.dev, 0, ((void*)0),
    VAR_2,
    "test_dimm%d", VAR_5 + VAR_4->dcr_idx);
  if (!VAR_4->dimm_dev[VAR_5])
   return -VAR_0;
 }
 return 0;
}
