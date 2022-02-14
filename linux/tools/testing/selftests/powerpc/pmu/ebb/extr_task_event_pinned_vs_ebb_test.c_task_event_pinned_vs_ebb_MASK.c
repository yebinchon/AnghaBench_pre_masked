
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union pipe {int fds; } ;
struct TYPE_2__ {scalar_t__ value; scalar_t__ enabled; scalar_t__ running; } ;
struct event {TYPE_1__ result; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (union pipe,union pipe) ;
 int FUNC_3 () ;
 int FUNC_4 (struct event*) ;
 int FUNC_5 (struct event*) ;
 int FUNC_6 (struct event*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct event*,scalar_t__) ;
 int FUNC_12 (union pipe,union pipe) ;
 int FUNC_13 (scalar_t__) ;

int FUNC_14(void)
{
 union pipe VAR_0, VAR_1;
 struct event VAR_2;
 pid_t VAR_3;
 int VAR_4;

 FUNC_1(!FUNC_3());

 FUNC_0(FUNC_10(VAR_0.fds) == -1);
 FUNC_0(FUNC_10(VAR_1.fds) == -1);

 VAR_3 = FUNC_8();
 if (VAR_3 == 0) {

  FUNC_7(FUNC_2(VAR_1, VAR_0));
 }


 VAR_4 = FUNC_11(&VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_9(VAR_3);
  return VAR_4;
 }


 if (FUNC_12(VAR_0, VAR_1))

  goto wait;


 FUNC_0(FUNC_12(VAR_0, VAR_1));

wait:

 FUNC_0(FUNC_13(VAR_3) != 2);
 FUNC_0(FUNC_4(&VAR_2));
 FUNC_0(FUNC_5(&VAR_2));

 FUNC_6(&VAR_2);

 FUNC_0(VAR_2.result.value == 0);




 FUNC_0(VAR_2.result.enabled == 0);
 FUNC_0(VAR_2.result.running == 0);

 return 0;
}
