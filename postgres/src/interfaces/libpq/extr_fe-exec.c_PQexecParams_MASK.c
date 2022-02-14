
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;
typedef int Oid ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int,int const*,char const* const*,int const*,int const*,int) ;

PGresult *
FUNC_3(PGconn *VAR_0,
    const char *VAR_1,
    int VAR_2,
    const Oid *VAR_3,
    const char *const *VAR_4,
    const int *VAR_5,
    const int *VAR_6,
    int VAR_7)
{
 if (!FUNC_1(VAR_0))
  return ((void*)0);
 if (!FUNC_2(VAR_0, VAR_1,
         VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7))
  return ((void*)0);
 return FUNC_0(VAR_0);
}
