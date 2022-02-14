
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int exclude_kernel; int exclude_hv; int exclude_idle; } ;
struct event {TYPE_1__ attr; } ;
struct TYPE_5__ {int ebb_count; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct event*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_3__ VAR_4 ;
 int FUNC_11 (struct event*) ;
 int FUNC_12 (struct event*,int,char*) ;
 int FUNC_13 (struct event*) ;
 int FUNC_14 (struct event*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,scalar_t__) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (char*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_19 (int ) ;
 int VAR_6 ;

int FUNC_20(void)
{
 struct event VAR_7;
 uint64_t VAR_8, VAR_9[2], VAR_10;
 int VAR_11;
 bool VAR_12;

 FUNC_1(!FUNC_10());

 FUNC_12(&VAR_7, 0x1001e, "cycles");
 FUNC_13(&VAR_7);

 VAR_7.attr.exclude_kernel = 1;
 VAR_7.attr.exclude_hv = 1;
 VAR_7.attr.exclude_idle = 1;

 FUNC_0(FUNC_14(&VAR_7));

 FUNC_5(1);
 FUNC_19(VAR_6);
 FUNC_9();

 FUNC_0(FUNC_6(&VAR_7));

 FUNC_16(VAR_3, FUNC_17(VAR_5));


 VAR_9[0] = VAR_0;
 VAR_9[1] = VAR_1;
 VAR_11 = 0;
 VAR_12 = 0;


 while ((VAR_4.stats.ebb_count < 20 && !VAR_12) ||
  VAR_4.stats.ebb_count < 1)
 {
  FUNC_16(VAR_2, VAR_9[VAR_11 % 2]);

  FUNC_0(FUNC_2());

  VAR_8 = FUNC_15(VAR_2);
  if (VAR_8 != VAR_9[VAR_11 % 2]) {
   VAR_12 = 1;
   VAR_10 = VAR_8;
  }

  VAR_11++;
 }

 FUNC_8();
 FUNC_7();

 FUNC_3(1, VAR_5);

 FUNC_4();

 FUNC_11(&VAR_7);

 FUNC_0(VAR_4.stats.ebb_count == 0);

 if (VAR_12)
  FUNC_18("Bad MMCR2 value seen is 0x%lx\n", VAR_10);

 FUNC_0(VAR_12);

 return 0;
}
