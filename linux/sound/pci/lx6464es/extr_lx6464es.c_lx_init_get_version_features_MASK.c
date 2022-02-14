
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lx6464es {int board_sample_rate; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (struct lx6464es*,int*) ;
 int FUNC_4 (struct lx6464es*,int*) ;

__attribute__((used)) static int FUNC_5(struct lx6464es *VAR_1)
{
 u32 VAR_2;

 int VAR_3;

 FUNC_0(VAR_1->card->dev, "->lx_init_get_version_features\n");

 VAR_3 = FUNC_4(VAR_1, &VAR_2);

 if (VAR_3 == 0) {
  u32 VAR_4;

  FUNC_2(VAR_1->card->dev, "DSP version: V%02d.%02d #%d\n",
      (VAR_2>>16) & 0xff, (VAR_2>>8) & 0xff,
      VAR_2 & 0xff);
  VAR_3 = FUNC_3(VAR_1, &VAR_4);
  if (VAR_3 == 0)
   VAR_1->board_sample_rate = VAR_4;
  FUNC_0(VAR_1->card->dev, "actual clock frequency %d\n", VAR_4);
 } else {
  FUNC_1(VAR_1->card->dev, "DSP corrupted \n");
  VAR_3 = -VAR_0;
 }

 return VAR_3;
}
