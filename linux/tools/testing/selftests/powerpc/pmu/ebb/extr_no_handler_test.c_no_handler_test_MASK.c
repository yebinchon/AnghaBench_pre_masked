
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int exclude_kernel; int exclude_hv; int exclude_idle; } ;
struct event {TYPE_1__ attr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (struct event*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct event*) ;
 int FUNC_6 (struct event*,int,char*) ;
 int FUNC_7 (struct event*) ;
 int FUNC_8 (struct event*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_13(void)
{
 struct event VAR_4;
 u64 VAR_5;
 int VAR_6;

 FUNC_1(!FUNC_4());

 FUNC_6(&VAR_4, 0x1001e, "cycles");
 FUNC_7(&VAR_4);

 VAR_4.attr.exclude_kernel = 1;
 VAR_4.attr.exclude_hv = 1;
 VAR_4.attr.exclude_idle = 1;

 FUNC_0(FUNC_8(&VAR_4));
 FUNC_0(FUNC_3(&VAR_4));

 VAR_5 = FUNC_10(VAR_0);
 FUNC_0(VAR_5 != 0);


 VAR_3 = 1000;
 FUNC_11(VAR_2, FUNC_12(VAR_3));


 for (VAR_6 = 0; VAR_6 < 1000; VAR_6++)
  FUNC_9();

 FUNC_2();


 VAR_5 = FUNC_10(VAR_1);
 FUNC_0(VAR_5 != 0x0000000080000080);

 FUNC_5(&VAR_4);

 FUNC_2();



 return 0;
}
