
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static Datum
FUNC_6(FunctionCallInfo VAR_0, bool VAR_1)
{
 Datum VAR_2 = FUNC_1(0);
 int32 *VAR_3 = (int32 *) FUNC_2(1);
 Datum *VAR_4 = (Datum *) FUNC_5(sizeof(Datum));

 if (VAR_1)
  VAR_2 = FUNC_4(FUNC_0(VAR_2));
 VAR_4[0] = VAR_2;
 *VAR_3 = 1;

 FUNC_3(VAR_4);
}
