
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ext_bst; } ;
struct cs35l35_private {int dev; int pdn_done; TYPE_1__ pdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct cs35l35_private *VAR_1)
{
 int VAR_2;

 if (VAR_1->pdata.ext_bst) {
  FUNC_3(5000, 5500);
  return 0;
 }

 FUNC_2(&VAR_1->pdn_done);

 VAR_2 = FUNC_4(&VAR_1->pdn_done,
       FUNC_1(100));
 if (VAR_2 == 0) {
  FUNC_0(VAR_1->dev, "PDN_DONE did not complete\n");
  return -VAR_0;
 }

 return 0;
}
