
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exclude_kernel; int exclude_hv; int exclude_idle; } ;
struct event {TYPE_1__ attr; } ;
struct TYPE_5__ {int ebb_count; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct event*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 TYPE_3__ VAR_1 ;
 int FUNC_13 (struct event*) ;
 int FUNC_14 (struct event*,int,char*) ;
 int FUNC_15 (struct event*) ;
 int FUNC_16 (struct event*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int VAR_2 ;
 int FUNC_19 (int ) ;
 int VAR_3 ;

int FUNC_20(void)
{
 struct event VAR_4;

 FUNC_1(!FUNC_12());

 FUNC_14(&VAR_4, 0x1001e, "cycles");
 FUNC_15(&VAR_4);

 VAR_4.attr.exclude_kernel = 1;
 VAR_4.attr.exclude_hv = 1;
 VAR_4.attr.exclude_idle = 1;

 FUNC_0(FUNC_16(&VAR_4));

 FUNC_7(1);
 FUNC_19(VAR_3);
 FUNC_11();
 FUNC_0(FUNC_8(&VAR_4));

 FUNC_17(VAR_0, FUNC_18(VAR_2));

 while (VAR_1.stats.ebb_count < 10) {
  FUNC_0(FUNC_2());
  FUNC_0(FUNC_6());
 }

 FUNC_10();
 FUNC_9();

 FUNC_3(1, VAR_2);

 FUNC_4();

 FUNC_13(&VAR_4);

 FUNC_0(VAR_1.stats.ebb_count == 0);
 FUNC_0(!FUNC_5(1, VAR_2, 100));

 return 0;
}
