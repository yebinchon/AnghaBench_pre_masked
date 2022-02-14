
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 () ;
 char* FUNC_1 (char*,int ,int,int,int,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 () ;

int FUNC_5(int VAR_8, char *VAR_9[])
{
 char *VAR_10[VAR_5];
 char *VAR_11[VAR_4];
 char *VAR_12;
 unsigned long VAR_13, VAR_14, VAR_15;

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_10[VAR_13] = FUNC_1(((void*)0), VAR_1, VAR_6 | VAR_7,
     VAR_3 | VAR_0, -1, 0);

  if (VAR_10[VAR_13] == VAR_2) {
   if (FUNC_4())
    return 1;
   break;
  }

  if (FUNC_3(VAR_10[VAR_13], 0))
   return 1;
 }
 VAR_14 = VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_12 = FUNC_0();
  VAR_11[VAR_13] = FUNC_1(VAR_12, VAR_1, VAR_6 | VAR_7,
     VAR_3 | VAR_0, -1, 0);

  if (VAR_11[VAR_13] == VAR_2)
   break;

  if (FUNC_3(VAR_11[VAR_13], 1))
   return 1;
 }
 VAR_15 = VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  FUNC_2(VAR_10[VAR_13], VAR_1);

 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
  FUNC_2(VAR_11[VAR_13], VAR_1);

 return 0;
}
