
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,int) ;

int FUNC_3(void *VAR_1, void *VAR_2, int VAR_3, int VAR_4, char *VAR_5)
{
 char *VAR_6, *VAR_7;

 VAR_6 = VAR_1;
 VAR_6 += VAR_4;
 VAR_7 = VAR_2;
 VAR_7 += VAR_4;

 if (FUNC_1(VAR_6, VAR_7, VAR_3)) {
  if (VAR_0) {
   FUNC_2("\n  Compare failed. Offset:%i length:%i\n",
          VAR_4, VAR_3);
   FUNC_0(VAR_6, VAR_7, VAR_3, VAR_5);
  }
  return 1;
 }
 return 0;
}
