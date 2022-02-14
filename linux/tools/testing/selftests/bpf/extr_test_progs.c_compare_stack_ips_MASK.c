
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int,int *,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;

int FUNC_4(int VAR_2, int VAR_3, int VAR_4)
{
 __u32 VAR_5, VAR_6, *VAR_7, *VAR_8;
 char *VAR_9, *VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_9 = FUNC_3(VAR_4);
 VAR_10 = FUNC_3(VAR_4);
 VAR_7 = ((void*)0);
 VAR_8 = &VAR_5;
 while (FUNC_0(VAR_2, VAR_7, VAR_8) == 0) {
  VAR_12 = FUNC_1(VAR_2, VAR_8, VAR_9);
  if (VAR_12)
   goto out;
  VAR_12 = FUNC_1(VAR_3, VAR_8, VAR_10);
  if (VAR_12)
   goto out;
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   if (VAR_9[VAR_11] != VAR_10[VAR_11]) {
    VAR_12 = -1;
    goto out;
   }
  }
  VAR_5 = *VAR_8;
  VAR_7 = &VAR_5;
  VAR_8 = &VAR_6;
 }
 if (VAR_1 != VAR_0)
  VAR_12 = -1;

out:
 FUNC_2(VAR_9);
 FUNC_2(VAR_10);
 return VAR_12;
}
