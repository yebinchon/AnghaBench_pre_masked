
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char chtype ;
typedef int WINDOW ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int) ;

void
FUNC_3(WINDOW * VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10,
  chtype VAR_11, chtype VAR_12)
{
 int VAR_13, VAR_14;

 FUNC_1(VAR_6, 0);
 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  FUNC_2(VAR_6, VAR_7 + VAR_13, VAR_8);
  for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
   if (!VAR_13 && !VAR_14)
    FUNC_0(VAR_6, VAR_12 | VAR_3);
   else if (VAR_13 == VAR_9 - 1 && !VAR_14)
    FUNC_0(VAR_6, VAR_12 | VAR_1);
   else if (!VAR_13 && VAR_14 == VAR_10 - 1)
    FUNC_0(VAR_6, VAR_11 | VAR_4);
   else if (VAR_13 == VAR_9 - 1 && VAR_14 == VAR_10 - 1)
    FUNC_0(VAR_6, VAR_11 | VAR_2);
   else if (!VAR_13)
    FUNC_0(VAR_6, VAR_12 | VAR_0);
   else if (VAR_13 == VAR_9 - 1)
    FUNC_0(VAR_6, VAR_11 | VAR_0);
   else if (!VAR_14)
    FUNC_0(VAR_6, VAR_12 | VAR_5);
   else if (VAR_14 == VAR_10 - 1)
    FUNC_0(VAR_6, VAR_11 | VAR_5);
   else
    FUNC_0(VAR_6, VAR_11 | ' ');
 }
}
