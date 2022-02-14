
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,char*,int ) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

unsigned long FUNC_5(const char *VAR_2)
{
 char VAR_3[VAR_0];
 unsigned long VAR_4;
 unsigned int VAR_5;

 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = FUNC_1(VAR_5, VAR_3, FUNC_0(VAR_3));

  if (FUNC_4(VAR_3, VAR_2) == 0)
   return FUNC_2(VAR_4);
 }
 return FUNC_3(VAR_2);
}
