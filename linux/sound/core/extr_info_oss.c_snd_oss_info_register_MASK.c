
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 char*** VAR_5 ;
 int VAR_6 ;

int FUNC_5(int VAR_7, int VAR_8, char *VAR_9)
{
 char *VAR_10;

 if (FUNC_4(VAR_7 < 0 || VAR_7 >= VAR_4))
  return -VAR_1;
 if (FUNC_4(VAR_8 < 0 || VAR_8 >= VAR_3))
  return -VAR_1;
 FUNC_2(&VAR_6);
 if (VAR_9 == ((void*)0)) {
  if ((VAR_10 = VAR_5[VAR_8][VAR_7]) != ((void*)0)) {
   FUNC_0(VAR_10);
   VAR_10 = ((void*)0);
  }
 } else {
  VAR_10 = FUNC_1(VAR_9, VAR_2);
  if (VAR_10 == ((void*)0)) {
   FUNC_3(&VAR_6);
   return -VAR_0;
  }
 }
 VAR_5[VAR_8][VAR_7] = VAR_10;
 FUNC_3(&VAR_6);
 return 0;
}
