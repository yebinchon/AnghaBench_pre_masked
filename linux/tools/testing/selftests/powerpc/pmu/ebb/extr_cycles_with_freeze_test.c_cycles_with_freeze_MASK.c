
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int exclude_kernel; int exclude_hv; int exclude_idle; } ;
struct event {TYPE_1__ attr; } ;
struct TYPE_5__ {int ebb_count; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (struct event*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct event*) ;
 int FUNC_11 (struct event*,int,char*) ;
 int FUNC_12 (struct event*) ;
 int FUNC_13 (struct event*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,int) ;
 int VAR_7 ;
 int FUNC_19 (int ) ;

int FUNC_20(void)
{
 struct event VAR_8;
 uint64_t VAR_9;
 bool VAR_10;

 FUNC_1(!FUNC_9());

 FUNC_11(&VAR_8, 0x1001e, "cycles");
 FUNC_12(&VAR_8);

 VAR_8.attr.exclude_kernel = 1;
 VAR_8.attr.exclude_hv = 1;
 VAR_8.attr.exclude_idle = 1;

 FUNC_0(FUNC_13(&VAR_8));

 FUNC_19(VAR_4);
 FUNC_8();
 FUNC_0(FUNC_5(&VAR_8));

 FUNC_16(VAR_2, FUNC_17(VAR_7));

 VAR_10 = 0;


 while ((VAR_5.stats.ebb_count < 20 && !VAR_10) ||
  VAR_5.stats.ebb_count < 1)
 {
  VAR_3 = 0;
  FUNC_14();
  FUNC_16(VAR_1, FUNC_15(VAR_1) & ~VAR_0);

  FUNC_0(FUNC_2());

  VAR_3 = 1;
  FUNC_14();
  FUNC_16(VAR_1, FUNC_15(VAR_1) | VAR_0);

  VAR_9 = FUNC_15(VAR_1);
  if (! (VAR_9 & VAR_0)) {
   FUNC_18("Outside of loop, FC NOT set MMCR0 0x%lx\n", VAR_9);
   VAR_10 = 1;
  }
 }

 FUNC_7();
 FUNC_6();

 FUNC_3(1, VAR_7);

 FUNC_4();

 FUNC_18("EBBs while frozen %d\n", VAR_6);

 FUNC_10(&VAR_8);

 FUNC_0(VAR_5.stats.ebb_count == 0);
 FUNC_0(VAR_10);

 return 0;
}
