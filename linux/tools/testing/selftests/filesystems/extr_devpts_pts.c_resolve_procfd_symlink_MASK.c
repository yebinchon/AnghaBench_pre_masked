
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 char VAR_4[4096];

 VAR_3 = FUNC_1(VAR_4, 4096, "/proc/self/fd/%d", VAR_0);
 if (VAR_3 < 0 || VAR_3 >= 4096)
  return -1;

 VAR_3 = FUNC_0(VAR_4, VAR_1, VAR_2);
 if (VAR_3 < 0 || (size_t)VAR_3 >= VAR_2)
  return -1;

 VAR_1[VAR_3] = '\0';

 return 0;
}
