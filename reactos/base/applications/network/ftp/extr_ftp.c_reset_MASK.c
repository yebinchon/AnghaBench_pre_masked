
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

void FUNC_5(int VAR_1, const char *VAR_2[])
{

 fd_set VAR_3;
 int VAR_4 = 1;

 FUNC_0(&VAR_3);
 while (VAR_4 > 0) {

  if ((VAR_4 = FUNC_1(&VAR_3,0)) < 0) {
   FUNC_4("reset");
   VAR_0 = -1;
   FUNC_3();
  }
  else if (VAR_4) {
   (void) FUNC_2(0);
  }
 }
}
