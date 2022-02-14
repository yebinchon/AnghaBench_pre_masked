
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nid; } ;
struct lola {TYPE_2__* card; TYPE_1__ clock; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct lola*,int ,int ,int,int ,unsigned int*,int *) ;

int FUNC_2(struct lola *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_4->clock.nid,
         VAR_3,
         VAR_1 | VAR_2,
         0, &VAR_5, ((void*)0));
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_5) {
  FUNC_0(VAR_4->card->dev, "error in enable_clock_events %d\n",
         VAR_5);
  return -VAR_0;
 }
 return 0;
}
