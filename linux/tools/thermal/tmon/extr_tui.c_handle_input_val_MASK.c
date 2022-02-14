
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_6__ {int t_target; } ;
struct TYPE_5__ {int nr_cooling_dev; TYPE_1__* cdi; } ;
struct TYPE_4__ {int instance; } ;
typedef int PANEL ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 TYPE_3__ VAR_7 ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_2__ VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,char*,...) ;
 int FUNC_8 (char*,char*,int) ;
 int * VAR_9 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int,char*) ;

__attribute__((used)) static void FUNC_12(int VAR_10)
{
 char VAR_11[32];
 int VAR_12;
 char VAR_13[256];
 WINDOW *VAR_14 = VAR_6;

 FUNC_1();
 FUNC_2(VAR_14, VAR_4);
 FUNC_10(VAR_14, VAR_11, 31);
 VAR_12 = FUNC_0(VAR_11);

 if (VAR_10 == VAR_8.nr_cooling_dev) {
  FUNC_7(VAR_11, 31, "Invalid Temp %d! %d-%d", VAR_12,
   VAR_2, VAR_1);
  if (VAR_12 < VAR_2 || VAR_12 > VAR_1)
   FUNC_11(40, VAR_11);
  else {
   VAR_7.t_target = VAR_12;
   FUNC_7(VAR_11, 31, "Set New Target Temp %d", VAR_12);
   FUNC_11(40, VAR_11);
  }
 } else {
  FUNC_7(VAR_13, 256, "%s/%s%d", VAR_3,
   VAR_0, VAR_8.cdi[VAR_10].instance);
  FUNC_8(VAR_13, "cur_state", VAR_12);
 }
 FUNC_3();
 VAR_5 = 0;
 FUNC_6();
 FUNC_5();

 VAR_9 = (PANEL *)FUNC_4(VAR_9);
 FUNC_9(VAR_9);
}
