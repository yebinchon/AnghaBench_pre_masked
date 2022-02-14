
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nm256 {int reg_lock; TYPE_1__* card; scalar_t__ badintrcount; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct nm256*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct nm256*) ;
 int FUNC_3 (struct nm256*) ;
 int FUNC_4 (struct nm256*) ;
 int FUNC_5 (struct nm256*,int) ;
 int FUNC_6 (struct nm256*,int ) ;
 int FUNC_7 (struct nm256*,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_10(int VAR_6, void *VAR_7)
{
 struct nm256 *VAR_8 = VAR_7;
 u32 VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_6(VAR_8, VAR_5);


 if (VAR_9 == 0)
  return FUNC_3(VAR_8);

 VAR_8->badintrcount = 0;



 FUNC_8(&VAR_8->reg_lock);
 if (VAR_9 & VAR_3) {
  VAR_9 &= ~VAR_3;
  FUNC_0(VAR_8, VAR_3);
  FUNC_4(VAR_8);
 }

 if (VAR_9 & VAR_4) {
  VAR_9 &= ~VAR_4;
  FUNC_0(VAR_8, VAR_4);
  FUNC_2(VAR_8);
 }

 if (VAR_9 & VAR_1) {
  VAR_9 &= ~VAR_1;
  FUNC_0(VAR_8, VAR_1);
  FUNC_1(VAR_8->card->dev, "NM256: Got misc interrupt #1\n");
  VAR_10 = FUNC_5(VAR_8, 0x400);
  FUNC_7(VAR_8, 0x400, VAR_10 | 2);
 }

 if (VAR_9 & VAR_2) {
  VAR_9 &= ~VAR_2;
  FUNC_0(VAR_8, VAR_2);
  FUNC_1(VAR_8->card->dev, "NM256: Got misc interrupt #2\n");
  VAR_10 = FUNC_5(VAR_8, 0x400);
  FUNC_7(VAR_8, 0x400, VAR_10 & ~2);
 }


 if (VAR_9) {
  FUNC_1(VAR_8->card->dev,
   "NM256: Fire in the hole! Unknown status 0x%x\n",
      VAR_9);

  FUNC_0(VAR_8, VAR_9);
 }

 FUNC_9(&VAR_8->reg_lock);
 return VAR_0;
}
