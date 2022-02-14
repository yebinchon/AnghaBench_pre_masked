
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;

bool
FUNC_3(bool *VAR_2, void **VAR_3, GucSource VAR_4)
{
 if (FUNC_2())
 {
  FUNC_0(VAR_0);
  FUNC_1("SET TRANSACTION [NOT] DEFERRABLE cannot be called within a subtransaction");
  return 0;
 }
 if (VAR_1)
 {
  FUNC_0(VAR_0);
  FUNC_1("SET TRANSACTION [NOT] DEFERRABLE must be called before any query");
  return 0;
 }

 return 1;
}
