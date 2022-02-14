
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tg_event; } ;
typedef TYPE_1__ TriggerData ;
struct TYPE_6__ {scalar_t__ context; } ;
typedef TYPE_2__* FunctionCallInfo ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char const*) ;

__attribute__((used)) static void
FUNC_9(FunctionCallInfo VAR_2, const char *VAR_3, int VAR_4)
{
 TriggerData *VAR_5 = (TriggerData *) VAR_2->context;

 if (!FUNC_0(VAR_2))
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_8("function \"%s\" was not called by trigger manager", VAR_3)));




 if (!FUNC_1(VAR_5->tg_event) ||
  !FUNC_5(VAR_5->tg_event))
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_8("function \"%s\" must be fired AFTER ROW", VAR_3)));

 switch (VAR_4)
 {
  case 129:
   if (!FUNC_3(VAR_5->tg_event))
    FUNC_6(VAR_1,
      (FUNC_7(VAR_0),
       FUNC_8("function \"%s\" must be fired for INSERT", VAR_3)));
   break;
  case 128:
   if (!FUNC_4(VAR_5->tg_event))
    FUNC_6(VAR_1,
      (FUNC_7(VAR_0),
       FUNC_8("function \"%s\" must be fired for UPDATE", VAR_3)));
   break;
  case 130:
   if (!FUNC_2(VAR_5->tg_event))
    FUNC_6(VAR_1,
      (FUNC_7(VAR_0),
       FUNC_8("function \"%s\" must be fired for DELETE", VAR_3)));
   break;
 }
}
