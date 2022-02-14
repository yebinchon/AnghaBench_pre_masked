
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int,char const* const*,int const*,int const*,int) ;

PGresult *
FUNC_3(PGconn *VAR_0,
      const char *VAR_1,
      int VAR_2,
      const char *const *VAR_3,
      const int *VAR_4,
      const int *VAR_5,
      int VAR_6)
{
 if (!FUNC_1(VAR_0))
  return ((void*)0);
 if (!FUNC_2(VAR_0, VAR_1,
        VAR_2, VAR_3, VAR_4,
        VAR_5, VAR_6))
  return ((void*)0);
 return FUNC_0(VAR_0);
}
