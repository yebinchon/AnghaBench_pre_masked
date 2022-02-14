
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQconninfoOption ;
typedef int PQExpBuffer ;


 int * FUNC_0 (char const*,int ,int) ;
 int * FUNC_1 (char const*,int ,int) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static PQconninfoOption *
FUNC_3(const char *VAR_0, PQExpBuffer VAR_1,
      bool VAR_2)
{

 if (FUNC_2(VAR_0) != 0)
  return FUNC_1(VAR_0, VAR_1, VAR_2);


 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
