
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ polcmd; scalar_t__ hassublinks; int with_check_qual; int qual; int roles; int policy_name; } ;
typedef TYPE_1__ RowSecurityPolicy ;
typedef scalar_t__ Oid ;


 scalar_t__ FUNC_0 (int ) ;
 int* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static bool
FUNC_4(RowSecurityPolicy *VAR_0, RowSecurityPolicy *VAR_1)
{
 int VAR_2;
 Oid *VAR_3,
      *VAR_4;

 if (VAR_0 != ((void*)0))
 {
  if (VAR_1 == ((void*)0))
   return 0;

  if (VAR_0->polcmd != VAR_1->polcmd)
   return 0;
  if (VAR_0->hassublinks != VAR_1->hassublinks)
   return 0;
  if (FUNC_3(VAR_0->policy_name, VAR_1->policy_name) != 0)
   return 0;
  if (FUNC_1(VAR_0->roles)[0] != FUNC_1(VAR_1->roles)[0])
   return 0;

  VAR_3 = (Oid *) FUNC_0(VAR_0->roles);
  VAR_4 = (Oid *) FUNC_0(VAR_1->roles);

  for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0->roles)[0]; VAR_2++)
  {
   if (VAR_3[VAR_2] != VAR_4[VAR_2])
    return 0;
  }

  if (!FUNC_2(VAR_0->qual, VAR_1->qual))
   return 0;
  if (!FUNC_2(VAR_0->with_check_qual, VAR_1->with_check_qual))
   return 0;
 }
 else if (VAR_1 != ((void*)0))
  return 0;

 return 1;
}
