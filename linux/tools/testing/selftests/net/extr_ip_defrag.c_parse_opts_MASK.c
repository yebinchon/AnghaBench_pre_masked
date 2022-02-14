
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,char*,char*) ;
 int FUNC_1 (int,char**,char*) ;

__attribute__((used)) static void FUNC_2(int VAR_5, char **VAR_6)
{
 int VAR_7;

 while ((VAR_7 = FUNC_1(VAR_5, VAR_6, "46opv")) != -1) {
  switch (VAR_7) {
  case '4':
   VAR_0 = 1;
   break;
  case '6':
   VAR_1 = 1;
   break;
  case 'o':
   VAR_2 = 1;
   break;
  case 'p':
   VAR_3 = 1;
   break;
  case 'v':
   VAR_4 = 1;
   break;
  default:
   FUNC_0(1, 0, "%s: parse error", VAR_6[0]);
  }
 }
}
