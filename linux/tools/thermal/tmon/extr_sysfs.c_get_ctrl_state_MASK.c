
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_cooling_dev; TYPE_1__* cdi; } ;
struct TYPE_3__ {int flag; int instance; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (char*,int,char*,char*,char*,int) ;
 int FUNC_1 (char*,char*,unsigned long*) ;
 int FUNC_2 (int ,char*,int) ;

void FUNC_3(unsigned long *VAR_5)
{
 char VAR_6[256];
 int VAR_7 = -1;
 int VAR_8;




 for (VAR_8 = 0; VAR_8 < VAR_4.nr_cooling_dev; VAR_8++) {
  if (VAR_4.cdi[VAR_8].flag & VAR_1) {
   VAR_7 = VAR_4.cdi[VAR_8].instance;
   FUNC_2(VAR_2, "ctrl cdev %d get state\n",
    VAR_4.cdi[VAR_8].instance);
   break;
  }
 }
 if (VAR_7 == -1) {
  *VAR_5 = 0;
  return;
 }
 FUNC_0(VAR_6, 256, "%s/%s%d", VAR_3,
  VAR_0, VAR_7);
 FUNC_1(VAR_6, "cur_state", VAR_5);
}
