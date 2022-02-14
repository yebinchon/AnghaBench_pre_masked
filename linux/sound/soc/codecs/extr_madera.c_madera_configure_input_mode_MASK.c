
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** inmode; unsigned int* dmic_ref; } ;
struct TYPE_4__ {TYPE_1__ codec; } ;
struct madera {int type; int regmap; int dev; TYPE_2__ pdata; } ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;



 int FUNC_0 (int ,char*,int,unsigned int,unsigned int,unsigned int,...) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,scalar_t__,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct madera *VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;

 switch (VAR_9->type) {
 case 135:
  VAR_13 = 1;
  VAR_14 = 2;
  break;
 case 134:
  VAR_13 = 2;
  VAR_14 = 2;
  break;
 case 133:
 case 128:
  VAR_13 = 3;
  VAR_14 = 3;
  break;
 case 132:
 case 131:
  VAR_13 = 2;
  VAR_14 = 2;
  break;
 default:
  VAR_13 = 2;
  VAR_14 = 4;
  break;
 }





 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  FUNC_0(VAR_9->dev, "IN%d mode %u:%u:%u:%u\n", VAR_15 + 1,
   VAR_9->pdata.codec.inmode[VAR_15][0],
   VAR_9->pdata.codec.inmode[VAR_15][1],
   VAR_9->pdata.codec.inmode[VAR_15][2],
   VAR_9->pdata.codec.inmode[VAR_15][3]);

  VAR_10 = VAR_9->pdata.codec.dmic_ref[VAR_15] <<
      VAR_8;

  switch (VAR_9->pdata.codec.inmode[VAR_15][0]) {
  case 130:
   VAR_11 = 0;
   break;
  case 129:
   VAR_11 = 1 << VAR_4;
   break;
  default:
   FUNC_1(VAR_9->dev,
     "IN%dAL Illegal inmode %u ignored\n",
     VAR_15 + 1, VAR_9->pdata.codec.inmode[VAR_15][0]);
   continue;
  }

  switch (VAR_9->pdata.codec.inmode[VAR_15][1]) {
  case 130:
   VAR_12 = 0;
   break;
  case 129:
   VAR_12 = 1 << VAR_6;
   break;
  default:
   FUNC_1(VAR_9->dev,
     "IN%dAR Illegal inmode %u ignored\n",
     VAR_15 + 1, VAR_9->pdata.codec.inmode[VAR_15][1]);
   continue;
  }

  FUNC_0(VAR_9->dev,
   "IN%dA DMIC mode=0x%x Analogue mode=0x%x,0x%x\n",
   VAR_15 + 1, VAR_10, VAR_11, VAR_12);

  FUNC_2(VAR_9->regmap,
       VAR_2 + (VAR_15 * 8),
       VAR_7, VAR_10);

  if (VAR_15 >= VAR_13)
   continue;

  FUNC_2(VAR_9->regmap,
       VAR_0 + (VAR_15 * 8),
       VAR_3, VAR_11);

  FUNC_2(VAR_9->regmap,
       VAR_1 + (VAR_15 * 8),
       VAR_5, VAR_12);
 }
}
