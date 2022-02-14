
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
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_4 ;

bool
FUNC_5(bool *VAR_5, void **VAR_6, GucSource VAR_7)
{
 if (*VAR_5 == 0 && VAR_4 && FUNC_3() && !VAR_3)
 {

  if (FUNC_2())
  {
   FUNC_0(VAR_0);
   FUNC_1("cannot set transaction read-write mode inside a read-only transaction");
   return 0;
  }

  if (VAR_2)
  {
   FUNC_0(VAR_0);
   FUNC_1("transaction read-write mode must be set before any query");
   return 0;
  }

  if (FUNC_4())
  {
   FUNC_0(VAR_1);
   FUNC_1("cannot set transaction read-write mode during recovery");
   return 0;
  }
 }

 return 1;
}
