
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
typedef int Jsonb ;
typedef TYPE_1__ JsonValueList ;
typedef int JsonPath ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int *,int,TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static Datum
FUNC_7(FunctionCallInfo VAR_0, bool VAR_1)
{
 Jsonb *VAR_2 = FUNC_2(0);
 JsonPath *VAR_3 = FUNC_3(1);
 JsonValueList VAR_4 = {0};
 Jsonb *VAR_5 = FUNC_2(2);
 bool VAR_6 = FUNC_1(3);

 (void) FUNC_5(VAR_3, VAR_5, VAR_2, !VAR_6, &VAR_4, VAR_1);

 FUNC_4(FUNC_0(FUNC_6(&VAR_4)));
}
