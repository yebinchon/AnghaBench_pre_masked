
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;

bool
FUNC_6(int *VAR_5, void **VAR_6, GucSource VAR_7)
{
 int VAR_8 = *VAR_5;

 if (VAR_8 != VAR_4 && FUNC_4())
 {
  if (VAR_2)
  {
   FUNC_0(VAR_0);
   FUNC_2("SET TRANSACTION ISOLATION LEVEL must be called before any query");
   return 0;
  }

  if (FUNC_3())
  {
   FUNC_0(VAR_0);
   FUNC_2("SET TRANSACTION ISOLATION LEVEL must not be called in a subtransaction");
   return 0;
  }

  if (VAR_8 == VAR_3 && FUNC_5())
  {
   FUNC_0(VAR_1);
   FUNC_2("cannot use serializable mode in a hot standby");
   FUNC_1("You can use REPEATABLE READ instead.");
   return 0;
  }
 }

 return 1;
}
