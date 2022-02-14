
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs5535audio {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct cs5535audio*,int ) ;
 int FUNC_1 (struct cs5535audio*,int ,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned short,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cs5535audio*,int) ;

__attribute__((used)) static unsigned short FUNC_5(struct cs5535audio *VAR_5,
       unsigned short VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_7 = ((unsigned int) VAR_6) << 24;
 VAR_7 |= VAR_1;
 VAR_7 |= VAR_3;

 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_4(VAR_5, 50);

 VAR_8 = 50;
 do {
  VAR_9 = FUNC_0(VAR_5, VAR_2);
  if ((VAR_9 & VAR_4) && VAR_6 == (VAR_9 >> 24))
   break;
  FUNC_3(1);
 } while (--VAR_8);
 if (!VAR_8)
  FUNC_2(VAR_5->card->dev,
   "Failure reading codec reg 0x%x, Last value=0x%x\n",
   VAR_6, VAR_9);

 return (unsigned short) VAR_9;
}
