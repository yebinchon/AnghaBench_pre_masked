
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char**,char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int VAR_4 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char*,char*) ;

Oid
FUNC_9(List *VAR_5, char **VAR_6)
{
 char *VAR_7;
 Oid VAR_8;


 FUNC_1(VAR_5, &VAR_7, VAR_6);

 if (VAR_7)
 {

  if (FUNC_8(VAR_7, "pg_temp") == 0)
  {

   FUNC_0(0);
   return VAR_4;
  }

  VAR_8 = FUNC_6(VAR_7, 0);

 }
 else
 {

  FUNC_7();
  if (VAR_3)
  {

   FUNC_0(1);
   return VAR_4;
  }
  VAR_8 = VAR_2;
  if (!FUNC_2(VAR_8))
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_5("no schema has been selected to create in")));
 }

 return VAR_8;
}
