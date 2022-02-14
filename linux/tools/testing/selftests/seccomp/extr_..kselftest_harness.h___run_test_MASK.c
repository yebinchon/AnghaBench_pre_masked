
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __test_metadata {int passed; char* name; int termsig; int step; int (* fn ) (struct __test_metadata*) ;int timeout; scalar_t__ trigger; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,char*,char*,...) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct __test_metadata*) ;
 int FUNC_10 (scalar_t__,int*,int ) ;

void FUNC_11(struct __test_metadata *VAR_2)
{
 pid_t VAR_3;
 int VAR_4;

 VAR_2->passed = 1;
 VAR_2->trigger = 0;
 FUNC_8("[ RUN      ] %s\n", VAR_2->name);
 FUNC_5(VAR_2->timeout);
 VAR_3 = FUNC_6();
 if (VAR_3 < 0) {
  FUNC_8("ERROR SPAWNING TEST CHILD\n");
  VAR_2->passed = 0;
 } else if (VAR_3 == 0) {
  VAR_2->fn(VAR_2);

  FUNC_4(VAR_2->passed ? 0 : VAR_2->step);
 } else {

  FUNC_10(VAR_3, &VAR_4, 0);
  if (FUNC_1(VAR_4)) {
   VAR_2->passed = VAR_2->termsig == -1 ? !FUNC_0(VAR_4) : 0;
   if (VAR_2->termsig != -1) {
    FUNC_7(VAR_1,
     "%s: Test exited normally "
     "instead of by signal (code: %d)\n",
     VAR_2->name,
     FUNC_0(VAR_4));
   } else if (!VAR_2->passed) {
    FUNC_7(VAR_1,
     "%s: Test failed at step #%d\n",
     VAR_2->name,
     FUNC_0(VAR_4));
   }
  } else if (FUNC_2(VAR_4)) {
   VAR_2->passed = 0;
   if (FUNC_3(VAR_4) == VAR_0) {
    FUNC_7(VAR_1,
     "%s: Test terminated by assertion\n",
     VAR_2->name);
   } else if (FUNC_3(VAR_4) == VAR_2->termsig) {
    VAR_2->passed = 1;
   } else {
    FUNC_7(VAR_1,
     "%s: Test terminated unexpectedly "
     "by signal %d\n",
     VAR_2->name,
     FUNC_3(VAR_4));
   }
  } else {
   FUNC_7(VAR_1,
    "%s: Test ended in some other way [%u]\n",
    VAR_2->name,
    VAR_4);
  }
 }
 FUNC_8("[     %4s ] %s\n", (VAR_2->passed ? "OK" : "FAIL"), VAR_2->name);
 FUNC_5(0);
}
