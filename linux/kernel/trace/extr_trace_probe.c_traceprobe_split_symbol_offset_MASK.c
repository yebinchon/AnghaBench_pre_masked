
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,long*) ;
 char* FUNC_1 (char*,char*) ;

int FUNC_2(char *VAR_1, long *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1, "+-");
 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_3, 0, VAR_2);
  if (VAR_4)
   return VAR_4;
  *VAR_3 = '\0';
 } else
  *VAR_2 = 0;

 return 0;
}
