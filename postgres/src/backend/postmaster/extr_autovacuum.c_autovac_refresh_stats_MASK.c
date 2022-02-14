
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
 if (FUNC_1())
 {
  static TimestampTz VAR_1 = 0;
  TimestampTz VAR_2;

  VAR_2 = FUNC_0();

  if (!FUNC_2(VAR_1, VAR_2,
          VAR_0))
   return;

  VAR_1 = VAR_2;
 }

 FUNC_3();
}
