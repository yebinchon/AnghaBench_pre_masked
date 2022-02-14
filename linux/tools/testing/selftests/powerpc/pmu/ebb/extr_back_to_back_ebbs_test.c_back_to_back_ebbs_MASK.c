
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exclude_kernel; int exclude_hv; int exclude_idle; } ;
struct event {TYPE_1__ attr; } ;
struct TYPE_5__ {scalar_t__ ebb_count; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (struct event*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_3__ VAR_3 ;
 int FUNC_10 () ;
 int FUNC_11 (struct event*) ;
 int FUNC_12 (struct event*,int,char*) ;
 int FUNC_13 (struct event*) ;
 int FUNC_14 (struct event*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int) ;
 int VAR_4 ;
 int FUNC_17 (int ) ;

int FUNC_18(void)
{
 struct event VAR_5;

 FUNC_1(!FUNC_9());

 FUNC_12(&VAR_5, 0x1001e, "cycles");
 FUNC_13(&VAR_5);

 VAR_5.attr.exclude_kernel = 1;
 VAR_5.attr.exclude_hv = 1;
 VAR_5.attr.exclude_idle = 1;

 FUNC_0(FUNC_14(&VAR_5));

 FUNC_17(VAR_2);

 FUNC_0(FUNC_5(&VAR_5));

 VAR_4 = 5;

 FUNC_6();
 FUNC_15(VAR_1, FUNC_16(VAR_4));
 FUNC_8();
 FUNC_10();

 while (VAR_3.stats.ebb_count < VAR_0)
  FUNC_0(FUNC_2());

 FUNC_7();
 FUNC_6();

 FUNC_3(1, VAR_4);

 FUNC_4();

 FUNC_11(&VAR_5);

 FUNC_0(VAR_3.stats.ebb_count != VAR_0);

 return 0;
}
