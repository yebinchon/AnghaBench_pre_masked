
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;

void
FUNC_5(void)
{
 if (FUNC_4())
 {
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("stack depth limit exceeded"),
     FUNC_2("Increase the configuration parameter \"max_stack_depth\" (currently %dkB), "
       "after ensuring the platform's stack depth limit is adequate.",
       VAR_2)));
 }
}
