
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_cooling_dev; TYPE_1__* cdi; } ;
struct TYPE_3__ {int flag; int max_state; int instance; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 (char*,int,char*,char*,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,unsigned long) ;
 int FUNC_3 (int ,char*,char*,...) ;

void FUNC_4(unsigned long VAR_7)
{
 char VAR_8[256];
 int VAR_9;
 unsigned long VAR_10;

 if (VAR_5)
  return;

 for (VAR_9 = 0; VAR_9 < VAR_6.nr_cooling_dev; VAR_9++) {
  if (VAR_6.cdi[VAR_9].flag & VAR_1) {
   if (VAR_6.cdi[VAR_9].max_state < 10) {
    FUNC_1(VAR_4, "None.");
    return;
   }

   VAR_10 = VAR_7 * VAR_6.cdi[VAR_9].max_state/100;
   FUNC_3(VAR_2,
    "ctrl cdev %d set state %lu scaled to %lu\n",
    VAR_6.cdi[VAR_9].instance, VAR_7, VAR_10);
   FUNC_0(VAR_8, 256, "%s/%s%d", VAR_3,
    VAR_0, VAR_6.cdi[VAR_9].instance);
   FUNC_3(VAR_2, "ctrl cdev path %s", VAR_8);
   FUNC_2(VAR_8, "cur_state",
     VAR_10);
  }
 }
}
