
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct oxygen {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct oxygen*,int ) ;
 int FUNC_3 (struct oxygen*,int ,int ) ;
 int FUNC_4 (struct oxygen*,int ,unsigned int) ;

void FUNC_5(struct oxygen *VAR_5, unsigned int VAR_6, u16 VAR_7)
{
 unsigned int VAR_8;

 FUNC_3(VAR_5, VAR_2, VAR_7);
 FUNC_4(VAR_5, VAR_1,
        VAR_6 | VAR_3);
 for (VAR_8 = 0; VAR_8 < 10; ++VAR_8) {
  FUNC_1(1);
  if (!(FUNC_2(VAR_5, VAR_4)
        & VAR_0))
   return;
 }
 FUNC_0(VAR_5->card->dev, "EEPROM write timeout\n");
}
