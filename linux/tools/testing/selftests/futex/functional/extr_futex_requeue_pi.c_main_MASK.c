
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,int) ;
 int VAR_5 ;
 int FUNC_10 (int,int,int,int ) ;
 int FUNC_11 (int ) ;

int FUNC_12(int VAR_6, char *VAR_7[])
{
 int VAR_8, VAR_9;

 while ((VAR_8 = FUNC_3(VAR_6, VAR_7, "bchlot:v:")) != -1) {
  switch (VAR_8) {
  case 'b':
   VAR_1 = 1;
   break;
  case 'c':
   FUNC_7(1);
   break;
  case 'h':
   FUNC_11(FUNC_1(VAR_7[0]));
   FUNC_2(0);
  case 'l':
   VAR_2 = 1;
   break;
  case 'o':
   VAR_4 = 1;
   VAR_2 = 0;
   break;
  case 't':
   VAR_5 = FUNC_0(VAR_3);
   break;
  case 'v':
   FUNC_8(FUNC_0(VAR_3));
   break;
  default:
   FUNC_11(FUNC_1(VAR_7[0]));
   FUNC_2(1);
  }
 }

 FUNC_4();
 FUNC_6(1);
 FUNC_5("%s: Test requeue functionality\n", FUNC_1(VAR_7[0]));
 FUNC_5(
  "\tArguments: broadcast=%d locked=%d owner=%d timeout=%ldns\n",
  VAR_1, VAR_2, VAR_4, VAR_5);






 VAR_9 = FUNC_10(VAR_1, VAR_2, VAR_4, VAR_5);

 FUNC_9(VAR_0, VAR_9);
 return VAR_9;
}
