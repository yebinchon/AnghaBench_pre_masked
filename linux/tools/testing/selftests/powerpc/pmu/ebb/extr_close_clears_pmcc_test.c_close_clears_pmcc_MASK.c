
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct event {int dummy; } ;
struct TYPE_3__ {int ebb_count; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct event*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_2__ VAR_4 ;
 int FUNC_9 (struct event*) ;
 int FUNC_10 (struct event*,int,char*) ;
 int FUNC_11 (struct event*) ;
 int FUNC_12 (struct event*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int VAR_5 ;
 int FUNC_16 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_17(void)
{
 struct event VAR_8;

 FUNC_1(!FUNC_8());

 FUNC_10(&VAR_8, 0x1001e, "cycles");
 FUNC_11(&VAR_8);

 FUNC_0(FUNC_12(&VAR_8));

 FUNC_4(1);
 FUNC_16(VAR_6);
 FUNC_7();
 FUNC_0(FUNC_5(&VAR_8));

 FUNC_14(VAR_3, FUNC_15(VAR_5));

 while (VAR_4.stats.ebb_count < 1)
  FUNC_0(FUNC_3());

 FUNC_6();
 FUNC_9(&VAR_8);

 FUNC_0(VAR_4.stats.ebb_count == 0);




 FUNC_0(FUNC_2(VAR_7));


 FUNC_13(VAR_1);
 FUNC_13(VAR_2);
 FUNC_13(VAR_0);

 return 0;
}
