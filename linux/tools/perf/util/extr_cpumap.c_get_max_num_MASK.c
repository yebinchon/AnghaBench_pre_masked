
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char**,size_t*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, int *VAR_1)
{
 size_t VAR_2;
 char *VAR_3;
 int VAR_4 = 0;

 if (FUNC_0(VAR_0, &VAR_3, &VAR_2))
  return -1;

 VAR_3[VAR_2] = '\0';


 while (--VAR_2) {
  if ((VAR_3[VAR_2] == ',') || (VAR_3[VAR_2] == '-')) {
   VAR_2++;
   break;
  }
 }
 if (FUNC_2(&VAR_3[VAR_2], "%d", VAR_1) < 1) {
  VAR_4 = -1;
  goto out;
 }


 (*VAR_1)++;

out:
 FUNC_1(VAR_3);
 return VAR_4;
}
