
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,char*,char*) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_2, char **VAR_3)
{
 int VAR_4;

 while ((VAR_4 = FUNC_1(VAR_2, VAR_3, "l:")) != -1) {
  switch (VAR_4) {
  case 'l':
   VAR_0 = FUNC_2(VAR_1, ((void*)0), 0);
   break;
  default:
   FUNC_0(1, 0, "%s: parse error", VAR_3[0]);
  }
 }
}
