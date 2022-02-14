
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ssp_priv {struct ssp_device* ssp; } ;
struct ssp_device {scalar_t__ type; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,unsigned int) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct ssp_device*,int ) ;
 int FUNC_3 (struct ssp_device*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ssp_priv *VAR_4, unsigned int VAR_5)
{
 struct ssp_device *VAR_6 = VAR_4->ssp;
 u32 VAR_7 = FUNC_2(VAR_6, VAR_2) & ~0x70;

 if (VAR_6->type == VAR_1)
  FUNC_3(VAR_6, VAR_3, 0);

 switch (VAR_5) {
 case 5622000:
  break;
 case 11345000:
  VAR_7 |= (0x1 << 4);
  break;
 case 12235000:
  VAR_7 |= (0x2 << 4);
  break;
 case 14857000:
  VAR_7 |= (0x3 << 4);
  break;
 case 32842000:
  VAR_7 |= (0x4 << 4);
  break;
 case 48000000:
  VAR_7 |= (0x5 << 4);
  break;
 case 0:

  break;

 default:



  if (VAR_6->type == VAR_1) {
   u32 VAR_8;
   u64 VAR_9 = 19968;

   VAR_9 *= 1000000;
   FUNC_1(VAR_9, VAR_5);
   VAR_8 = VAR_9;

   VAR_8 = (VAR_8 << 16) | 64;
   FUNC_3(VAR_6, VAR_3, VAR_8);

   VAR_7 |= (0x6 << 4);

   FUNC_0(&VAR_6->pdev->dev,
    "Using SSACDD %x to supply %uHz\n",
    VAR_8, VAR_5);
   break;
  }

  return -VAR_0;
 }

 FUNC_3(VAR_6, VAR_2, VAR_7);

 return 0;
}
