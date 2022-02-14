
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,char*) ;
 unsigned int FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4()
{

 char VAR_1[256];


 if (VAR_0)
  return (VAR_0);

 if (FUNC_0(VAR_1, sizeof(VAR_1)) < 0)
  return (0);
 if ((int) FUNC_3(VAR_1) > 0) {
  VAR_0 = (char *)FUNC_1((FUNC_3(VAR_1)+(unsigned)1));
  if (VAR_0 == 0)
   return (((void*)0));
  (void) FUNC_2(VAR_0, VAR_1);
  return (VAR_0);
 }

 return (((void*)0));
}
