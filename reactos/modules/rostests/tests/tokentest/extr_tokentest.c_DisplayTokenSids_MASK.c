
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t GroupCount; int * Groups; } ;
struct TYPE_5__ {int User; } ;
typedef TYPE_1__ TOKEN_USER ;
typedef int TOKEN_PRIMARY_GROUP ;
typedef int TOKEN_OWNER ;
typedef TYPE_2__ TOKEN_GROUPS ;
typedef size_t DWORD ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (char*) ;

void
FUNC_2(TOKEN_USER* VAR_0,
     TOKEN_GROUPS* VAR_1,
     TOKEN_OWNER* VAR_2,
     TOKEN_PRIMARY_GROUP* VAR_3)
{
 DWORD VAR_4;

 FUNC_1("\nSids:\n");
 FUNC_0(&VAR_0->User, VAR_2, VAR_3);
 FUNC_1("\nGroups:\n");
 for (VAR_4 = 0; VAR_4 < VAR_1->GroupCount; VAR_4++)
  FUNC_0(&VAR_1->Groups[VAR_4], VAR_2, VAR_3);
}
