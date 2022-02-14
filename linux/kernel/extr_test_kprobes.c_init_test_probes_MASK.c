
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(void)
{
 int VAR_9;

 VAR_7 = VAR_3;
 VAR_8 = VAR_4;

 do {
  VAR_6 = FUNC_2();
 } while (VAR_6 <= VAR_0);

 FUNC_1("started\n");
 VAR_5++;
 VAR_9 = FUNC_3();
 if (VAR_9 < 0)
  VAR_1++;

 VAR_5++;
 VAR_9 = FUNC_4();
 if (VAR_9 < 0)
  VAR_1++;
 if (VAR_1)
  FUNC_0("BUG: %d out of %d tests failed\n", VAR_1, VAR_5);
 else if (VAR_2)
  FUNC_0("BUG: %d error(s) running handlers\n", VAR_2);
 else
  FUNC_1("passed successfully\n");

 return 0;
}
