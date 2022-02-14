
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MemoryContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 () ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (char*,int ,int,int ,int ) ;
 int FUNC_4 (int) ;

void
FUNC_5(void)
{
 MemoryContext VAR_16;




 FUNC_2();





 if (FUNC_0())
  return;




 VAR_16 = FUNC_1(VAR_2);





 if (!FUNC_4(1))
 {
  FUNC_3("pg_database", VAR_3, 1,
      VAR_11, VAR_6);
  FUNC_3("pg_authid", VAR_0, 1,
      VAR_10, VAR_5);
  FUNC_3("pg_auth_members", VAR_1, 1,
      VAR_9, VAR_4);
  FUNC_3("pg_shseclabel", VAR_14, 1,
      VAR_12, VAR_7);
  FUNC_3("pg_subscription", VAR_15, 1,
      VAR_13, VAR_8);


 }

 FUNC_1(VAR_16);
}
