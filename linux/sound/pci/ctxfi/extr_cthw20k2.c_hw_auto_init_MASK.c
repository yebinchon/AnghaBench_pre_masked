
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (struct hw*,int ) ;
 int FUNC_3 (struct hw*,int ,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hw *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 FUNC_5(&VAR_5, VAR_2, 0);
 FUNC_3(VAR_4, VAR_3, VAR_5);
 FUNC_5(&VAR_5, VAR_2, 1);
 FUNC_3(VAR_4, VAR_3, VAR_5);
 FUNC_4(10);
 for (VAR_6 = 0; VAR_6 < 400000; VAR_6++) {
  VAR_5 = FUNC_2(VAR_4, VAR_3);
  if (FUNC_1(VAR_5, VAR_1))
   break;
 }
 if (!FUNC_1(VAR_5, VAR_1)) {
  FUNC_0(VAR_4->card->dev, "Card Auto-init failed!!!\n");
  return -VAR_0;
 }

 return 0;
}
