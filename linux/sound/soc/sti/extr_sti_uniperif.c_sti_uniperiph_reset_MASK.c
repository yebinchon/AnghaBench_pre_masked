
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniperif {scalar_t__ ver; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct uniperif*) ;
 int FUNC_1 (struct uniperif*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

int FUNC_4(struct uniperif *VAR_2)
{
 int VAR_3 = 10;


 FUNC_1(VAR_2);

 if (VAR_2->ver < VAR_1) {
  while (FUNC_0(VAR_2) && VAR_3) {
   FUNC_3(5);
   VAR_3--;
  }
 }

 if (!VAR_3) {
  FUNC_2(VAR_2->dev, "Failed to reset uniperif\n");
  return -VAR_0;
 }

 return 0;
}
