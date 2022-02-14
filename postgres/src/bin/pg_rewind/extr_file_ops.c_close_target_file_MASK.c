
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;

void
FUNC_2(void)
{
 if (VAR_0 == -1)
  return;

 if (FUNC_0(VAR_0) != 0)
  FUNC_1("could not close target file \"%s\": %m",
     VAR_1);

 VAR_0 = -1;
}
