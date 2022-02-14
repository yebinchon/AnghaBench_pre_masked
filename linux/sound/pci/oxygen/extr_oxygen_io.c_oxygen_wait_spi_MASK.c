
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxygen {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct oxygen*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct oxygen *VAR_3)
{
 unsigned int VAR_4;





 for (VAR_4 = 50; VAR_4 > 0; VAR_4--) {
  FUNC_2(4);
  if ((FUNC_1(VAR_3, VAR_2) &
      VAR_1) == 0)
   return 0;
 }
 FUNC_0(VAR_3->card->dev, "oxygen: SPI wait timeout\n");
 return -VAR_0;
}
