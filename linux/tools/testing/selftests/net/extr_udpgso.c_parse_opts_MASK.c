
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,char*,char*) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_7 ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_8, char **VAR_9)
{
 int VAR_10;

 while ((VAR_10 = FUNC_1(VAR_8, VAR_9, "46cCmst:")) != -1) {
  switch (VAR_10) {
  case '4':
   VAR_2 = 1;
   break;
  case '6':
   VAR_3 = 1;
   break;
  case 'c':
   VAR_0 = 1;
   break;
  case 'C':
   VAR_1 = 1;
   break;
  case 'm':
   VAR_4 = 1;
   break;
  case 's':
   VAR_5 = 1;
   break;
  case 't':
   VAR_6 = FUNC_2(VAR_7, ((void*)0), 0);
   break;
  default:
   FUNC_0(1, 0, "%s: parse error", VAR_9[0]);
  }
 }
}
