
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * idx_lookup; int nid; } ;
struct lola {TYPE_2__* card; TYPE_1__ clock; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct lola*,int ,int ,int ,int ,unsigned int*,int *) ;

int FUNC_2(struct lola *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_2->clock.nid,
         VAR_1,
         VAR_2->clock.idx_lookup[VAR_3],
         0, &VAR_4, ((void*)0));
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_4) {
  FUNC_0(VAR_2->card->dev, "error in set_clock %d\n", VAR_4);
  return -VAR_0;
 }
 return 0;
}
