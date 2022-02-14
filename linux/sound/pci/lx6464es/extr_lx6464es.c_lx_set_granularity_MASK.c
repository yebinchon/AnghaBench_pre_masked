
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lx6464es {int pcm_granularity; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct lx6464es*,int) ;

__attribute__((used)) static int FUNC_4(struct lx6464es *VAR_3, u32 VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = VAR_2;

 FUNC_0(VAR_3->card->dev, "->lx_set_granularity\n");


 while ((VAR_6 < VAR_4) &&
        (VAR_6 < VAR_1)) {
  VAR_6 *= 2;
 }

 if (VAR_6 == VAR_3->pcm_granularity)
  return 0;

 VAR_5 = FUNC_3(VAR_3, VAR_6);
 if (VAR_5 < 0) {
  FUNC_2(VAR_3->card->dev, "could not set granularity\n");
  VAR_5 = -VAR_0;
 }

 if (VAR_6 != VAR_4)
  FUNC_1(VAR_3->card->dev, "snapped blocksize to %d\n", VAR_6);

 FUNC_0(VAR_3->card->dev, "set blocksize on board %d\n", VAR_6);
 VAR_3->pcm_granularity = VAR_6;

 return VAR_5;
}
