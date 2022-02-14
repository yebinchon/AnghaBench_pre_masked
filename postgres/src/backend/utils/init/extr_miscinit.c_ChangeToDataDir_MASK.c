
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;

void
FUNC_5(void)
{
 FUNC_0(VAR_0);

 if (FUNC_1(VAR_0) < 0)
  FUNC_2(VAR_1,
    (FUNC_3(),
     FUNC_4("could not change directory to \"%s\": %m",
      VAR_0)));
}
