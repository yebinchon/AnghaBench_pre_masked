
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
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct event*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 TYPE_3__ VAR_1 ;
 int FUNC_12 (struct event*) ;
 int FUNC_13 (struct event*,int,char*) ;
 int FUNC_14 (struct event*) ;
 int FUNC_15 (struct event*) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int) ;
 int VAR_2 ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_20(void)
{
 int VAR_4, VAR_5, VAR_6;
 struct event VAR_7;

 FUNC_1(!FUNC_11());


 FUNC_13(&VAR_7, 0x40002, "instructions");
 FUNC_14(&VAR_7);

 VAR_7.attr.exclude_kernel = 1;
 VAR_7.attr.exclude_hv = 1;
 VAR_7.attr.exclude_idle = 1;

 FUNC_0(FUNC_15(&VAR_7));

 FUNC_6(4);
 FUNC_19(VAR_3);
 FUNC_10();
 FUNC_0(FUNC_7(&VAR_7));







 VAR_5 = VAR_6 = VAR_2 = 400;

 FUNC_16(VAR_0, FUNC_17(VAR_2));

 while (VAR_1.stats.ebb_count < 1000000) {
  for (VAR_4 = 0; VAR_4 < 100000; VAR_4++)
   FUNC_18();


  if (VAR_2 >= (VAR_5 + 200))
   VAR_2 = VAR_5;
  else
   VAR_2++;

  if (VAR_2 > VAR_6)
   VAR_6 = VAR_2;
 }

 FUNC_8();
 FUNC_9();

 FUNC_2(4, VAR_2);
 FUNC_16(VAR_0, 0xdead);

 FUNC_4();
 FUNC_3();

 FUNC_12(&VAR_7);

 FUNC_0(VAR_1.stats.ebb_count == 0);


 FUNC_0(!FUNC_5(4, VAR_5, 2 * (VAR_6 - VAR_5)));

 return 0;
}
