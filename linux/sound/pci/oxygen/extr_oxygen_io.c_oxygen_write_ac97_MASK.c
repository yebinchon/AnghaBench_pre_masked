
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
typedef void* u16 ;
struct oxygen {TYPE_1__* card; void*** saved_ac97_registers; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct oxygen*,int ) ;
 int FUNC_2 (struct oxygen*,int ,unsigned int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct oxygen *VAR_5, unsigned int VAR_6,
         unsigned int VAR_7, u16 VAR_8)
{
 unsigned int VAR_9, VAR_10;
 u32 VAR_11;

 VAR_11 = VAR_8;
 VAR_11 |= VAR_7 << VAR_2;
 VAR_11 |= VAR_4;
 VAR_11 |= VAR_6 << VAR_3;
 VAR_10 = 0;
 for (VAR_9 = 5; VAR_9 > 0; --VAR_9) {
  FUNC_3(5);
  FUNC_2(VAR_5, VAR_1, VAR_11);

  if (FUNC_1(VAR_5, VAR_0) >= 0 &&
      ++VAR_10 >= 2) {
   VAR_5->saved_ac97_registers[VAR_6][VAR_7 / 2] = VAR_8;
   return;
  }
 }
 FUNC_0(VAR_5->card->dev, "AC'97 write timeout\n");
}
