
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_aio_sub {TYPE_6__* swm; TYPE_3__* aio; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_11__ {int map; } ;
struct TYPE_10__ {int map; } ;
struct TYPE_12__ {scalar_t__ dir; TYPE_5__ iport; TYPE_4__ oport; } ;
struct TYPE_9__ {TYPE_2__* chip; } ;
struct TYPE_8__ {TYPE_1__* pdev; struct regmap* regmap; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct uniphier_aio_sub *VAR_30, int VAR_31)
{
 struct regmap *VAR_32 = VAR_30->aio->chip->regmap;
 struct device *VAR_33 = &VAR_30->aio->chip->pdev->dev;
 u32 VAR_34;

 if (VAR_30->swm->dir == VAR_29) {
  switch (VAR_31) {
  case 8000:
   VAR_34 = VAR_25;
   break;
  case 11025:
   VAR_34 = VAR_15;
   break;
  case 12000:
   VAR_34 = VAR_16;
   break;
  case 16000:
   VAR_34 = VAR_17;
   break;
  case 22050:
   VAR_34 = VAR_20;
   break;
  case 24000:
   VAR_34 = VAR_21;
   break;
  case 32000:
   VAR_34 = VAR_22;
   break;
  case 44100:
   VAR_34 = VAR_23;
   break;
  case 48000:
   VAR_34 = VAR_24;
   break;
  case 88200:
   VAR_34 = VAR_26;
   break;
  case 96000:
   VAR_34 = VAR_27;
   break;
  case 176400:
   VAR_34 = VAR_18;
   break;
  case 192000:
   VAR_34 = VAR_19;
   break;
  default:
   FUNC_2(VAR_33, "Rate not supported(%d)\n", VAR_31);
   return -VAR_0;
  }

  FUNC_3(VAR_32, FUNC_1(VAR_30->swm->oport.map),
       VAR_28, VAR_34);
 } else {
  switch (VAR_31) {
  case 8000:
   VAR_34 = VAR_11;
   break;
  case 11025:
   VAR_34 = VAR_1;
   break;
  case 12000:
   VAR_34 = VAR_2;
   break;
  case 16000:
   VAR_34 = VAR_3;
   break;
  case 22050:
   VAR_34 = VAR_6;
   break;
  case 24000:
   VAR_34 = VAR_7;
   break;
  case 32000:
   VAR_34 = VAR_8;
   break;
  case 44100:
   VAR_34 = VAR_9;
   break;
  case 48000:
   VAR_34 = VAR_10;
   break;
  case 88200:
   VAR_34 = VAR_12;
   break;
  case 96000:
   VAR_34 = VAR_13;
   break;
  case 176400:
   VAR_34 = VAR_4;
   break;
  case 192000:
   VAR_34 = VAR_5;
   break;
  default:
   FUNC_2(VAR_33, "Rate not supported(%d)\n", VAR_31);
   return -VAR_0;
  }

  FUNC_3(VAR_32, FUNC_0(VAR_30->swm->iport.map),
       VAR_14, VAR_34);
 }

 return 0;
}
