
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int* cmd; int* stat; int stat_len; } ;
struct lx6464es {int msg_lock; TYPE_2__ rmh; TYPE_1__* card; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct lx6464es*,TYPE_2__*) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct lx6464es *VAR_6, u32 VAR_7, int VAR_8,
    u32 *VAR_9, u32 *VAR_10, u32 *VAR_11)
{
 int VAR_12;
 u32 VAR_13 = FUNC_0(VAR_8, VAR_7);






 *VAR_9 = 0;
 *VAR_10 = 0;

 FUNC_5(&VAR_6->msg_lock);
 FUNC_2(&VAR_6->rmh, VAR_3);

 VAR_6->rmh.cmd[0] |= VAR_13;

 VAR_12 = FUNC_3(VAR_6, &VAR_6->rmh);

 if (!VAR_12) {
  int VAR_14;
  for (VAR_14 = 0; VAR_14 < VAR_5; ++VAR_14) {
   u32 VAR_15 = VAR_6->rmh.stat[VAR_14];
   if (VAR_15 & (VAR_0 << VAR_2)) {

    *VAR_10 += 1;
    if (VAR_11)
     VAR_11[VAR_14] = VAR_15 & VAR_4;
   } else if ((VAR_15 & (VAR_1 << VAR_2))
       == 0)

    *VAR_9 += 1;
  }

  FUNC_1(VAR_6->card->dev,
   "CMD_08_ASK_BUFFERS: needed %d, freed %d\n",
       *VAR_9, *VAR_10);
  for (VAR_14 = 0; VAR_14 < VAR_5; ++VAR_14) {
   for (VAR_14 = 0; VAR_14 != VAR_6->rmh.stat_len; ++VAR_14)
    FUNC_1(VAR_6->card->dev,
     "  stat[%d]: %x, %x\n", VAR_14,
         VAR_6->rmh.stat[VAR_14],
         VAR_6->rmh.stat[VAR_14] & VAR_4);
  }
 }

 FUNC_6(&VAR_6->msg_lock);
 return VAR_12;
}
