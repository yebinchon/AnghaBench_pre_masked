
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int errorMessage; } ;
typedef TYPE_1__ PGconn ;
typedef int Oid ;


 int FUNC_0 (TYPE_1__*,char const*,char*,int,int const*,char const* const*,int const*,int const*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(PGconn *VAR_0,
      const char *VAR_1,
      int VAR_2,
      const Oid *VAR_3,
      const char *const *VAR_4,
      const int *VAR_5,
      const int *VAR_6,
      int VAR_7)
{
 if (!FUNC_1(VAR_0))
  return 0;


 if (!VAR_1)
 {
  FUNC_3(&VAR_0->errorMessage,
        FUNC_2("command string is a null pointer\n"));
  return 0;
 }
 if (VAR_2 < 0 || VAR_2 > 65535)
 {
  FUNC_3(&VAR_0->errorMessage,
        FUNC_2("number of parameters must be between 0 and 65535\n"));
  return 0;
 }

 return FUNC_0(VAR_0,
         VAR_1,
         "",
         VAR_2,
         VAR_3,
         VAR_4,
         VAR_5,
         VAR_6,
         VAR_7);
}
