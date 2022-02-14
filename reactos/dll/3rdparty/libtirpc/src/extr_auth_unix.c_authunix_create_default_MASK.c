
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int machname ;
typedef int gid_t ;
typedef int AUTH ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (char*,int,int,int,int*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (char*,int) ;

AUTH *
FUNC_6()
{
 int VAR_2;
 char VAR_3[VAR_0 + 1];
 uid_t VAR_4;
 gid_t VAR_5;
 gid_t VAR_6[VAR_1];

 if (FUNC_5(VAR_3, sizeof VAR_3) == -1)
  FUNC_0();
 VAR_3[sizeof(VAR_3) - 1] = 0;







 VAR_4 = 666;
 VAR_5 = 777;
 VAR_6[0] = 0;
 VAR_2 = 0;


 return (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2, VAR_6));
}
