
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0)
{
 if (VAR_0 == ((void*)0))
 {

  VAR_0 = FUNC_1("off");
 }
 else if (VAR_0[0] == '\0')
 {

  FUNC_0(VAR_0);
  VAR_0 = FUNC_1("on");
 }
 return VAR_0;
}
