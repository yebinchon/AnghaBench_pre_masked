
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct oxygen {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_1 (struct oxygen*,int ) ;
 unsigned int FUNC_2 (struct oxygen*,int ) ;
 int FUNC_3 (struct oxygen*,int ,unsigned int) ;
 int FUNC_4 (int) ;

u16 FUNC_5(struct oxygen *VAR_6, unsigned int VAR_7,
       unsigned int VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10 = VAR_5;
 u32 VAR_11;

 VAR_11 = VAR_8 << VAR_2;
 VAR_11 |= VAR_4;
 VAR_11 |= VAR_7 << VAR_3;
 for (VAR_9 = 5; VAR_9 > 0; --VAR_9) {
  FUNC_4(5);
  FUNC_3(VAR_6, VAR_1, VAR_11);
  FUNC_4(10);
  if (FUNC_1(VAR_6, VAR_0) >= 0) {
   u16 VAR_12 = FUNC_2(VAR_6, VAR_1);

   if (VAR_12 == VAR_10)
    return VAR_12;
   VAR_10 = VAR_12;





   VAR_11 ^= 0xffff;
  }
 }
 FUNC_0(VAR_6->card->dev, "AC'97 read timeout on codec %u\n", VAR_7);
 return 0;
}
