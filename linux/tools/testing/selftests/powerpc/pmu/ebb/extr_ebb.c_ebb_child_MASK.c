
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union pipe {int dummy; } pipe ;
typedef int uint64_t ;
struct TYPE_4__ {int exclude_kernel; int exclude_hv; int exclude_idle; } ;
struct event {TYPE_1__ attr; } ;
struct TYPE_5__ {int ebb_count; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_3__ VAR_4 ;
 int FUNC_8 (struct event*) ;
 int FUNC_9 (struct event*) ;
 int FUNC_10 (struct event*,int,char*) ;
 int FUNC_11 (struct event*) ;
 int FUNC_12 (struct event*) ;
 scalar_t__ FUNC_13 (struct event*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (union pipe) ;
 int FUNC_17 (union pipe) ;
 int FUNC_18 (int ) ;
 int VAR_5 ;
 int FUNC_19 (int ) ;
 int VAR_6 ;
 int FUNC_20 (union pipe) ;

int FUNC_21(union pipe VAR_7, union pipe VAR_8)
{
 struct event VAR_9;
 uint64_t VAR_10;

 FUNC_0(FUNC_20(VAR_7));

 FUNC_10(&VAR_9, 0x1001e, "cycles");
 FUNC_11(&VAR_9);

 VAR_9.attr.exclude_kernel = 1;
 VAR_9.attr.exclude_hv = 1;
 VAR_9.attr.exclude_idle = 1;

 FUNC_0(FUNC_12(&VAR_9));

 FUNC_4(1);
 FUNC_19(VAR_6);
 FUNC_7();

 FUNC_0(FUNC_9(&VAR_9));

 if (FUNC_13(&VAR_9)) {





  FUNC_17(VAR_8);
  return 2;
 }

 FUNC_15(VAR_3, FUNC_18(VAR_5));

 FUNC_0(FUNC_16(VAR_8));
 FUNC_0(FUNC_20(VAR_7));
 FUNC_0(FUNC_16(VAR_8));

 while (VAR_4.stats.ebb_count < 20) {
  FUNC_0(FUNC_1());


  VAR_10 = FUNC_14(VAR_2);
  VAR_10 |= FUNC_14(VAR_1);
  VAR_10 |= FUNC_14(VAR_0);
 }

 FUNC_6();
 FUNC_5();

 FUNC_2(1, VAR_5);

 FUNC_3();

 FUNC_8(&VAR_9);

 FUNC_0(VAR_4.stats.ebb_count == 0);

 return 0;
}
