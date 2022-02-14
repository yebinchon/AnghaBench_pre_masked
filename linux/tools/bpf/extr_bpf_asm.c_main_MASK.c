
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (char*,char*) ;
 int * VAR_0 ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3(int VAR_1, char **VAR_2)
{
 FILE *VAR_3 = VAR_0;
 bool VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5++) {
  if (!FUNC_2("-c", VAR_2[VAR_5], 2)) {
   VAR_4 = 1;
   continue;
  }

  VAR_3 = FUNC_1(VAR_2[VAR_5], "r");
  if (!VAR_3) {
   VAR_3 = VAR_0;
   continue;
  }

  break;
 }

 FUNC_0(VAR_3, VAR_4);

 return 0;
}
