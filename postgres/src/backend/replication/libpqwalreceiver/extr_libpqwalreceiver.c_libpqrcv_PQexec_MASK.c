
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static PGresult *
FUNC_5(PGconn *VAR_4, const char *VAR_5)
{
 PGresult *VAR_6 = ((void*)0);
 if (!FUNC_2(VAR_4, VAR_5))
  return ((void*)0);

 for (;;)
 {

  PGresult *VAR_7;

  VAR_7 = FUNC_4(VAR_4);
  if (VAR_7 == ((void*)0))
   break;





  FUNC_0(VAR_6);
  VAR_6 = VAR_7;

  if (FUNC_1(VAR_6) == VAR_2 ||
   FUNC_1(VAR_6) == VAR_3 ||
   FUNC_1(VAR_6) == VAR_1 ||
   FUNC_3(VAR_4) == VAR_0)
   break;
 }

 return VAR_6;
}
