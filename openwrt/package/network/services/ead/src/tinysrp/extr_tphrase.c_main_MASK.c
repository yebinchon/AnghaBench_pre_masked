
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_5(int VAR_6, char **VAR_7)
{
 int VAR_8;

 VAR_3 = *VAR_7;



 while ((VAR_8 = FUNC_4(VAR_6, VAR_7, "n:p:")) != VAR_1) {
  switch (VAR_8) {

  case 'n':
   VAR_0 = FUNC_1(VAR_4);
   break;

  case 'p':
   VAR_2 = VAR_4;
   break;

  default:
   FUNC_0();
   FUNC_3(1);
  }
 }
 VAR_6 -= VAR_5;
 VAR_7 += VAR_5;

 if (VAR_6 != 1) {
  FUNC_0();
  FUNC_3(1);
 }
 FUNC_2(VAR_7[0]);

 return 0;
}
