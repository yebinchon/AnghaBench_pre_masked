
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int* cmd; int cmd_len; int* stat; } ;
struct lx6464es {int msg_lock; TYPE_1__* card; TYPE_2__ rmh; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct lx6464es*,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct lx6464es *VAR_7, u32 VAR_8, int VAR_9,
     u32 VAR_10, u32 VAR_11, u32 VAR_12,
     u32 *VAR_13)
{
 int VAR_14;
 u32 VAR_15 = FUNC_0(VAR_9, VAR_8);

 FUNC_4(&VAR_7->msg_lock);
 FUNC_2(&VAR_7->rmh, VAR_2);

 VAR_7->rmh.cmd[0] |= VAR_15;
 VAR_7->rmh.cmd[0] |= VAR_1;



 VAR_7->rmh.cmd[1] = VAR_10 & VAR_6;
 VAR_7->rmh.cmd[2] = VAR_11;

 if (VAR_12) {
  VAR_7->rmh.cmd_len = 4;
  VAR_7->rmh.cmd[3] = VAR_12;
  VAR_7->rmh.cmd[0] |= VAR_0;
 }

 VAR_14 = FUNC_3(VAR_7, &VAR_7->rmh);

 if (VAR_14 == 0) {
  *VAR_13 = VAR_7->rmh.stat[0];
  goto done;
 }

 if (VAR_14 == VAR_5)
  FUNC_1(VAR_7->card->dev,
   "lx_buffer_give EB_RBUFFERS_TABLE_OVERFLOW\n");

 if (VAR_14 == VAR_4)
  FUNC_1(VAR_7->card->dev,
   "lx_buffer_give EB_INVALID_STREAM\n");

 if (VAR_14 == VAR_3)
  FUNC_1(VAR_7->card->dev,
   "lx_buffer_give EB_CMD_REFUSED\n");

 done:
 FUNC_5(&VAR_7->msg_lock);
 return VAR_14;
}
