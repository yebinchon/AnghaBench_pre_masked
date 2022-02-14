
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dispchar; int * keyword; } ;
typedef TYPE_1__ PQconninfoOption ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char) ;
 scalar_t__ FUNC_1 (int *,char const*) ;

__attribute__((used)) static bool
FUNC_2(const PQconninfoOption *VAR_2, const char *VAR_3,
        Oid VAR_4)
{
 const PQconninfoOption *VAR_5;


 for (VAR_5 = VAR_2; VAR_5->keyword; VAR_5++)
 {
  if (FUNC_1(VAR_5->keyword, VAR_3) == 0)
   break;
 }
 if (VAR_5->keyword == ((void*)0))
  return 0;


 if (FUNC_0(VAR_5->dispchar, 'D'))
  return 0;


 if (FUNC_1(VAR_5->keyword, "client_encoding") == 0)
  return 0;





 if (FUNC_1(VAR_5->keyword, "user") == 0 || FUNC_0(VAR_5->dispchar, '*'))
 {
  if (VAR_4 != VAR_1)
   return 0;
 }
 else
 {
  if (VAR_4 != VAR_0)
   return 0;
 }

 return 1;
}
