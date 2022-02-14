
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PANEL ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;

void *FUNC_13(void *VAR_10)
{
 int VAR_11;

 FUNC_3(VAR_2, VAR_1);
 while ((VAR_11 = FUNC_12(VAR_2)) != VAR_0) {
  if (VAR_8)
   break;



  if (!VAR_3 || !VAR_5 ||
   !VAR_2 ||
   !VAR_6) {

   continue;
  }
  FUNC_5(&VAR_7);
  if (VAR_4) {
   FUNC_2(VAR_11);

   if (VAR_11 == 'q' || VAR_11 == 'Q')
    VAR_11 = 0;
  }
  switch (VAR_11) {
  case 128:
   FUNC_0(VAR_2, 10, 0);
   break;
  case 9:
   VAR_9 = (PANEL *)FUNC_4(VAR_9);
   FUNC_10(VAR_9);
   if (VAR_9 == VAR_5) {
    VAR_4 = 1;
    FUNC_9();
   } else {
    VAR_4 = 0;

    FUNC_8();
    FUNC_7();
   }
   break;
  case 'q':
  case 'Q':
   VAR_8 = 1;
   break;
  }
  FUNC_11();
  FUNC_1();
  FUNC_6(&VAR_7);
 }

 if (VAR_10)
  *(int *)VAR_10 = 0;

 return ((void*)0);
}
