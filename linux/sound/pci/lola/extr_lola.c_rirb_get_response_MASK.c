
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmds; } ;
struct lola {int polling_mode; unsigned int res; unsigned int res_ex; TYPE_2__* card; int last_extdata; int last_data; int last_verb; int last_cmd_nid; TYPE_1__ rirb; int reg_lock; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 unsigned long VAR_2 ;
 int FUNC_2 (struct lola*) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct lola *VAR_3, unsigned int *VAR_4,
        unsigned int *VAR_5)
{
 unsigned long VAR_6;

 again:
 VAR_6 = VAR_2 + FUNC_3(1000);
 for (;;) {
  if (VAR_3->polling_mode) {
   FUNC_4(&VAR_3->reg_lock);
   FUNC_2(VAR_3);
   FUNC_5(&VAR_3->reg_lock);
  }
  if (!VAR_3->rirb.cmds) {
   *VAR_4 = VAR_3->res;
   if (VAR_5)
    *VAR_5 = VAR_3->res_ex;
   FUNC_8("get_response: %x, %x\n",
          VAR_3->res, VAR_3->res_ex);
   if (VAR_3->res_ex & VAR_1) {
    FUNC_1(VAR_3->card->dev, "RIRB ERROR: "
           "NID=%x, verb=%x, data=%x, ext=%x\n",
           VAR_3->last_cmd_nid,
           VAR_3->last_verb, VAR_3->last_data,
           VAR_3->last_extdata);
    return -VAR_0;
   }
   return 0;
  }
  if (FUNC_6(VAR_2, VAR_6))
   break;
  FUNC_7(20);
  FUNC_0();
 }
 FUNC_1(VAR_3->card->dev, "RIRB response error\n");
 if (!VAR_3->polling_mode) {
  FUNC_1(VAR_3->card->dev, "switching to polling mode\n");
  VAR_3->polling_mode = 1;
  goto again;
 }
 return -VAR_0;
}
