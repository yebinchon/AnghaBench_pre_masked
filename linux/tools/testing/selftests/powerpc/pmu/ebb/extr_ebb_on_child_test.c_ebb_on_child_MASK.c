
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union pipe {int fds; } ;
struct TYPE_2__ {int exclude_kernel; int exclude_hv; int exclude_idle; } ;
struct event {TYPE_1__ attr; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct event*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct event*) ;
 int FUNC_5 (struct event*,int,char*) ;
 int FUNC_6 (struct event*) ;
 int FUNC_7 (struct event*,scalar_t__) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (union pipe,union pipe) ;
 int FUNC_12 (union pipe,union pipe) ;
 int FUNC_13 (scalar_t__) ;

int FUNC_14(void)
{
 union pipe VAR_0, VAR_1;
 struct event VAR_2;
 pid_t VAR_3;

 FUNC_1(!FUNC_3());

 FUNC_0(FUNC_10(VAR_0.fds) == -1);
 FUNC_0(FUNC_10(VAR_1.fds) == -1);

 VAR_3 = FUNC_9();
 if (VAR_3 == 0) {

  FUNC_8(FUNC_12(VAR_1, VAR_0));
 }

 FUNC_0(FUNC_11(VAR_0, VAR_1));



 FUNC_5(&VAR_2, 0x1001e, "cycles");
 FUNC_6(&VAR_2);

 VAR_2.attr.exclude_kernel = 1;
 VAR_2.attr.exclude_hv = 1;
 VAR_2.attr.exclude_idle = 1;

 FUNC_0(FUNC_7(&VAR_2, VAR_3));
 FUNC_0(FUNC_2(&VAR_2));

 FUNC_0(FUNC_11(VAR_0, VAR_1));


 FUNC_0(FUNC_13(VAR_3));

 FUNC_4(&VAR_2);

 return 0;
}
