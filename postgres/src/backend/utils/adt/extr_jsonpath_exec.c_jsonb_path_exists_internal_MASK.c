
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Jsonb ;
typedef scalar_t__ JsonPathExecResult ;
typedef int JsonPath ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,int *,int *,int,int *,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static Datum
FUNC_9(FunctionCallInfo VAR_1, bool VAR_2)
{
 Jsonb *VAR_3 = FUNC_2(0);
 JsonPath *VAR_4 = FUNC_3(1);
 JsonPathExecResult VAR_5;
 Jsonb *VAR_6 = ((void*)0);
 bool VAR_7 = 1;

 if (FUNC_4() == 4)
 {
  VAR_6 = FUNC_2(2);
  VAR_7 = FUNC_1(3);
 }

 VAR_5 = FUNC_7(VAR_4, VAR_6, VAR_3, !VAR_7, ((void*)0), VAR_2);

 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_4, 1);

 if (FUNC_8(VAR_5))
  FUNC_6();

 FUNC_5(VAR_5 == VAR_0);
}
