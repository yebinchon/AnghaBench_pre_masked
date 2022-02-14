
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char**) ;

int
FUNC_6(int VAR_8, char **VAR_9)
{
 int VAR_10;

 while ((VAR_10 = FUNC_2(VAR_8, VAR_9, "lmps")) != VAR_0)
  switch(VAR_10) {
  case 'l':
   VAR_1 = 1;
   break;
  case 'm':
   VAR_2 = 1;
   break;
  case 'p':
   VAR_5 = 1;
   break;
  case 's':
   VAR_6 = 1;
   break;
  case '?':
  default:
   (void)FUNC_1(VAR_7,
       "usage: finger [-lmps] login [...]\n");
   FUNC_0(1);
  }
 VAR_8 -= VAR_4;
 VAR_9 += VAR_4;

 (void)FUNC_3(&VAR_3);
 if (!*VAR_9) {
  FUNC_4();
 } else {
  FUNC_5(VAR_8, VAR_9);





  if (!VAR_6)
   VAR_1 = 1;
 }
 return 0;
}
