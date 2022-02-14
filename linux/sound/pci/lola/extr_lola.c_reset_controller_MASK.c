
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lola {int cold_reset; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_6 ;
 unsigned int FUNC_1 (struct lola*,int ,int ) ;
 int FUNC_2 (struct lola*,int ,int ,int ) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct lola *VAR_7)
{
 unsigned int VAR_8 = FUNC_1(VAR_7, VAR_0, VAR_4);
 unsigned long VAR_9;

 if (VAR_8) {

  FUNC_2(VAR_7, VAR_1, VAR_2, 0);
  return 0;
 }

 VAR_7->cold_reset = 1;
 FUNC_2(VAR_7, VAR_0, VAR_4, VAR_5);
 VAR_9 = VAR_6 + FUNC_3(200);
 do {
  FUNC_4(1);
  VAR_8 = FUNC_1(VAR_7, VAR_0, VAR_4);
  if (VAR_8)
   break;
 } while (FUNC_5(VAR_6, VAR_9));
 if (!VAR_8) {
  FUNC_0(VAR_7->card->dev, "cannot reset controller\n");
  return -VAR_3;
 }
 return 0;
}
