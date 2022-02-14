
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int member_0; } ;
struct TYPE_8__ {int boolean; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ val; } ;
typedef TYPE_2__ JsonbValue ;
typedef int Jsonb ;
typedef TYPE_3__ JsonValueList ;
typedef int JsonPath ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int) ;
 int * FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int *,int *,int,TYPE_3__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static Datum
FUNC_13(FunctionCallInfo VAR_4, bool VAR_5)
{
 Jsonb *VAR_6 = FUNC_4(0);
 JsonPath *VAR_7 = FUNC_5(1);
 JsonValueList VAR_8 = {0};
 Jsonb *VAR_9 = ((void*)0);
 bool VAR_10 = 1;

 if (FUNC_6() == 4)
 {
  VAR_9 = FUNC_4(2);
  VAR_10 = FUNC_3(3);
 }

 (void) FUNC_12(VAR_7, VAR_9, VAR_6, !VAR_10, &VAR_8, VAR_5);

 FUNC_2(VAR_6, 0);
 FUNC_2(VAR_7, 1);

 if (FUNC_1(&VAR_8) == 1)
 {
  JsonbValue *VAR_11 = FUNC_0(&VAR_8);

  if (VAR_11->type == VAR_2)
   FUNC_7(VAR_11->val.boolean);

  if (VAR_11->type == VAR_3)
   FUNC_8();
 }

 if (!VAR_10)
  FUNC_9(VAR_1,
    (FUNC_10(VAR_0),
     FUNC_11("single boolean result is expected")));

 FUNC_8();
}
