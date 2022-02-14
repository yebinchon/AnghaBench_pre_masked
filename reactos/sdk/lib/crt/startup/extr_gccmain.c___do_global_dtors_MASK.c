
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* func_ptr ) () ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void
FUNC_2 (void)
{
  static func_ptr *VAR_0 = FUNC_0 + 1;

  while (*VAR_0)
    {
      (*(VAR_0)) ();
      VAR_0++;
    }
}
