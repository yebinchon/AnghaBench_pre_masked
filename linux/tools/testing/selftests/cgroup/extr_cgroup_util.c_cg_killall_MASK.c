
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,char*,int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char**,int) ;

int FUNC_3(const char *VAR_2)
{
 char VAR_3[VAR_0];
 char *VAR_4 = VAR_3;

 if (FUNC_0(VAR_2, "cgroup.procs", VAR_3, sizeof(VAR_3)))
  return -1;

 while (VAR_4 < VAR_3 + sizeof(VAR_3)) {
  int VAR_5 = FUNC_2(VAR_4, &VAR_4, 10);

  if (VAR_5 == 0)
   break;
  if (*VAR_4)
   VAR_4++;
  else
   break;
  if (FUNC_1(VAR_5, VAR_1))
   return -1;
 }

 return 0;
}
