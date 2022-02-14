
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int MemoryContext ;
typedef int FunctionCallInfo ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static StringInfo
FUNC_4(FunctionCallInfo VAR_1)
{
 StringInfo VAR_2;
 MemoryContext VAR_3;
 MemoryContext VAR_4;

 if (!FUNC_0(VAR_1, &VAR_3))
 {

  FUNC_2(VAR_0, "string_agg_transfn called in non-aggregate context");
 }





 VAR_4 = FUNC_1(VAR_3);
 VAR_2 = FUNC_3();
 FUNC_1(VAR_4);

 return VAR_2;
}
