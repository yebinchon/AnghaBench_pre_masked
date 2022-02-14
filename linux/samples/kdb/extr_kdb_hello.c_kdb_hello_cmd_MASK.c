
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(int VAR_1, const char **VAR_2)
{
 if (VAR_1 > 1)
  return VAR_0;

 if (VAR_1)
  FUNC_0("Hello %s.\n", VAR_2[1]);
 else
  FUNC_0("Hello world!\n");

 return 0;
}
