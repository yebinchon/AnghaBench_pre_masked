
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct region {int dummy; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 long FUNC_2 (struct region*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,struct region*) ;
 long FUNC_5 (struct region*,unsigned long*,int) ;
 int FUNC_6 (unsigned long*,int) ;

int FUNC_7(const char *VAR_0, unsigned long *VAR_1, int VAR_2)
{
 struct region VAR_3;
 long VAR_4;

 FUNC_6(VAR_1, VAR_2);

 while (VAR_0) {
  VAR_0 = FUNC_3(VAR_0);
  if (VAR_0 == ((void*)0))
   return 0;

  VAR_0 = FUNC_4(VAR_0, &VAR_3);
  if (FUNC_0(VAR_0))
   return FUNC_1(VAR_0);

  VAR_4 = FUNC_2(&VAR_3);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_5(&VAR_3, VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
