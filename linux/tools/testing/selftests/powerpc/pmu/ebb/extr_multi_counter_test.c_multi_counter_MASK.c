
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exclude_kernel; int exclude_hv; int exclude_idle; } ;
struct event {int fd; TYPE_1__ attr; } ;
struct TYPE_5__ {int ebb_count; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_3__ VAR_8 ;
 int FUNC_11 (struct event*) ;
 int FUNC_12 (struct event*) ;
 int FUNC_13 (struct event*,int,char*) ;
 int FUNC_14 (struct event*) ;
 int FUNC_15 (struct event*,int) ;
 int FUNC_16 (struct event*) ;
 int FUNC_17 (int,int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int VAR_9 ;
 int FUNC_20 (int ) ;
 int VAR_10 ;

int FUNC_21(void)
{
 struct event VAR_11[6];
 int VAR_12, VAR_13;

 FUNC_1(!FUNC_10());

 FUNC_13(&VAR_11[0], 0x1001C, "PM_CMPLU_STALL_THRD");
 FUNC_13(&VAR_11[1], 0x2D016, "PM_CMPLU_STALL_FXU");
 FUNC_13(&VAR_11[2], 0x30006, "PM_CMPLU_STALL_OTHER_CMPL");
 FUNC_13(&VAR_11[3], 0x4000A, "PM_CMPLU_STALL");
 FUNC_13(&VAR_11[4], 0x600f4, "PM_RUN_CYC");
 FUNC_13(&VAR_11[5], 0x500fa, "PM_RUN_INST_CMPL");

 FUNC_14(&VAR_11[0]);
 for (VAR_12 = 1; VAR_12 < 6; VAR_12++)
  FUNC_12(&VAR_11[VAR_12]);

 VAR_13 = -1;
 for (VAR_12 = 0; VAR_12 < 6; VAR_12++) {
  VAR_11[VAR_12].attr.exclude_kernel = 1;
  VAR_11[VAR_12].attr.exclude_hv = 1;
  VAR_11[VAR_12].attr.exclude_idle = 1;

  FUNC_0(FUNC_15(&VAR_11[VAR_12], VAR_13));
  if (VAR_13 == -1)
   VAR_13 = VAR_11[0].fd;
 }

 FUNC_6(1);
 FUNC_6(2);
 FUNC_6(3);
 FUNC_6(4);
 FUNC_6(5);
 FUNC_6(6);
 FUNC_20(VAR_10);

 FUNC_0(FUNC_17(VAR_11[0].fd, VAR_0, VAR_1));
 FUNC_0(FUNC_16(&VAR_11[0]));

 FUNC_9();

 FUNC_18(VAR_2, FUNC_19(VAR_9));
 FUNC_18(VAR_3, FUNC_19(VAR_9));
 FUNC_18(VAR_4, FUNC_19(VAR_9));
 FUNC_18(VAR_5, FUNC_19(VAR_9));
 FUNC_18(VAR_6, FUNC_19(VAR_9));
 FUNC_18(VAR_7, FUNC_19(VAR_9));

 while (VAR_8.stats.ebb_count < 50) {
  FUNC_0(FUNC_2());
  FUNC_0(FUNC_5());
 }

 FUNC_8();
 FUNC_7();

 FUNC_3(1, VAR_9);
 FUNC_3(2, VAR_9);
 FUNC_3(3, VAR_9);
 FUNC_3(4, VAR_9);
 FUNC_3(5, VAR_9);
 FUNC_3(6, VAR_9);

 FUNC_4();

 for (VAR_12 = 0; VAR_12 < 6; VAR_12++)
  FUNC_11(&VAR_11[VAR_12]);

 FUNC_0(VAR_8.stats.ebb_count == 0);

 return 0;
}
