
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*,char*) ;
 int FUNC_1 (int,char**,char*) ;

__attribute__((used)) static void FUNC_2(int VAR_2, char **VAR_3)
{
 int VAR_4;

 while ((VAR_4 = FUNC_1(VAR_2, VAR_3, "lv")) != -1) {
  switch (VAR_4) {
  case 'l':
   VAR_0 = 1;
   break;
  case 'v':
   VAR_1 = 1;
   break;
  default:
   FUNC_0(1, 0, "%s: parse error", VAR_3[0]);
  }
 }
}
