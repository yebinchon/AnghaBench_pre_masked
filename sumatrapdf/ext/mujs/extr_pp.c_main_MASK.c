
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int js_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int,char*) ;
 int FUNC_9 (char*,char*) ;

int
FUNC_10(int VAR_0, char **VAR_1)
{
 js_State *VAR_2;
 int VAR_3 = 0;
 int VAR_4;

 VAR_2 = FUNC_3(((void*)0), ((void*)0), 0);

 for (VAR_4 = 1; VAR_4 < VAR_0; ++VAR_4) {
  if (!FUNC_9(VAR_1[VAR_4], "-m"))
   VAR_3 = 1;
  else if (!FUNC_9(VAR_1[VAR_4], "-mm"))
   VAR_3 = 2;
  else if (!FUNC_9(VAR_1[VAR_4], "-s"))
   VAR_3 = 3;
  else {
   if (FUNC_7(VAR_2)) {
    FUNC_6(VAR_2, FUNC_8(VAR_2, -1, "Error"));
    FUNC_4(VAR_2, 1);
    continue;
   }
   FUNC_5(VAR_2, VAR_1[VAR_4], VAR_3);
   FUNC_0(VAR_2);
  }
 }

 FUNC_2(VAR_2, 0);
 FUNC_1(VAR_2);

 return 0;
}
