
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oper; int rel; int ctid; } ;
typedef TYPE_1__ XactLockTableWaitInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;






 int VAR_0 ;


 int FUNC_5 (char const*,int ,int ,int ) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 XactLockTableWaitInfo *VAR_2 = (XactLockTableWaitInfo *) VAR_1;





 if (VAR_2->oper != VAR_0 &&
  FUNC_2(VAR_2->ctid) && FUNC_4(VAR_2->rel))
 {
  const char *VAR_3;

  switch (VAR_2->oper)
  {
   case 128:
    VAR_3 = FUNC_6("while updating tuple (%u,%u) in relation \"%s\"");
    break;
   case 135:
    VAR_3 = FUNC_6("while deleting tuple (%u,%u) in relation \"%s\"");
    break;
   case 131:
    VAR_3 = FUNC_6("while locking tuple (%u,%u) in relation \"%s\"");
    break;
   case 130:
    VAR_3 = FUNC_6("while locking updated version (%u,%u) of tuple in relation \"%s\"");
    break;
   case 133:
    VAR_3 = FUNC_6("while inserting index tuple (%u,%u) in relation \"%s\"");
    break;
   case 132:
    VAR_3 = FUNC_6("while checking uniqueness of tuple (%u,%u) in relation \"%s\"");
    break;
   case 134:
    VAR_3 = FUNC_6("while rechecking updated tuple (%u,%u) in relation \"%s\"");
    break;
   case 129:
    VAR_3 = FUNC_6("while checking exclusion constraint on tuple (%u,%u) in relation \"%s\"");
    break;

   default:
    return;
  }

  FUNC_5(VAR_3,
       FUNC_0(VAR_2->ctid),
       FUNC_1(VAR_2->ctid),
       FUNC_3(VAR_2->rel));
 }
}
