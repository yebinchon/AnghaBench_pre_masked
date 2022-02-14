
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 char* VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,int ) ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct rlimit*) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int VAR_6 ;

int FUNC_7(int VAR_7, char **VAR_8)
{
 struct rlimit VAR_9 = {VAR_1, VAR_1};
 char VAR_10[256];
 int VAR_11 = 8;

 FUNC_6(VAR_10, sizeof(VAR_10), "%s_kern.o", VAR_8[0]);
 FUNC_5(VAR_0, &VAR_9);

 if (VAR_7 > 1)
  VAR_6 = FUNC_0(VAR_8[1]) ? : VAR_6;

 if (VAR_7 > 2)
  VAR_11 = FUNC_0(VAR_8[2]) ? : VAR_11;

 if (VAR_7 > 3)
  VAR_5 = FUNC_0(VAR_8[3]);

 if (VAR_7 > 4)
  VAR_4 = FUNC_0(VAR_8[4]);

 if (FUNC_2(VAR_10, VAR_3)) {
  FUNC_3("%s", VAR_2);
  return 1;
 }

 FUNC_1();

 FUNC_4(VAR_11);

 return 0;
}
