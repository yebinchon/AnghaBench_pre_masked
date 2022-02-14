
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (int *,int) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
 FUNC_0(VAR_5);
 unsigned long VAR_6;

 for (VAR_6 = 0; VAR_6 < 1000000; VAR_6++) {
  int VAR_7 = FUNC_2(&VAR_5, VAR_3);
  if (VAR_7 == -VAR_1) {
   FUNC_1(&VAR_5, ((VAR_6 % VAR_4) !=
       VAR_0) &&
      ((VAR_6 % VAR_4) != 0));
   VAR_7 = FUNC_2(&VAR_5, VAR_2);
  } else {
   FUNC_1(&VAR_5, (VAR_6 % VAR_4) ==
     VAR_0);
  }
  FUNC_1(&VAR_5, VAR_7 != VAR_6);
 }
 FUNC_3(&VAR_5);
}
