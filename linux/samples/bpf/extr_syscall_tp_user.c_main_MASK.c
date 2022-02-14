
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct rlimit*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;

int FUNC_6(int VAR_3, char **VAR_4)
{
 struct rlimit VAR_5 = {VAR_1, VAR_1};
 int VAR_6, VAR_7 = 1;
 char VAR_8[256];

 while ((VAR_6 = FUNC_1(VAR_3, VAR_4, "i:h")) != -1) {
  switch (VAR_6) {
  case 'i':
   VAR_7 = FUNC_0(VAR_2);
   break;
  case 'h':
  default:
   FUNC_5(VAR_4[0]);
   return 0;
  }
 }

 FUNC_2(VAR_0, &VAR_5);
 FUNC_3(VAR_8, sizeof(VAR_8), "%s_kern.o", VAR_4[0]);

 return FUNC_4(VAR_8, VAR_7);
}
