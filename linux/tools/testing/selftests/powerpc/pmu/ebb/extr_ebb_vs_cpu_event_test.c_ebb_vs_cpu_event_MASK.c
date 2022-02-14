
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union pipe {int fds; } ;
struct TYPE_2__ {scalar_t__ enabled; scalar_t__ running; } ;
struct event {TYPE_1__ result; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (union pipe,union pipe) ;
 int FUNC_4 () ;
 int FUNC_5 (struct event*) ;
 int FUNC_6 (struct event*) ;
 int FUNC_7 (struct event*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct event*,int) ;
 int FUNC_14 (union pipe,union pipe) ;
 int FUNC_15 (scalar_t__) ;

int FUNC_16(void)
{
 union pipe VAR_0, VAR_1;
 struct event VAR_2;
 int VAR_3, VAR_4;
 pid_t VAR_5;

 FUNC_1(!FUNC_4());

 VAR_3 = FUNC_11();
 FUNC_0(VAR_3 < 0);
 FUNC_0(FUNC_2(VAR_3));

 FUNC_0(FUNC_12(VAR_0.fds) == -1);
 FUNC_0(FUNC_12(VAR_1.fds) == -1);

 VAR_5 = FUNC_9();
 if (VAR_5 == 0) {

  FUNC_8(FUNC_3(VAR_1, VAR_0));
 }


 FUNC_0(FUNC_14(VAR_0, VAR_1));


 VAR_4 = FUNC_13(&VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_10(VAR_5);
  return VAR_4;
 }


 FUNC_0(FUNC_14(VAR_0, VAR_1));


 FUNC_0(FUNC_15(VAR_5));
 FUNC_0(FUNC_5(&VAR_2));
 FUNC_0(FUNC_6(&VAR_2));

 FUNC_7(&VAR_2);


 FUNC_0(VAR_2.result.enabled >= VAR_2.result.running);

 return 0;
}
