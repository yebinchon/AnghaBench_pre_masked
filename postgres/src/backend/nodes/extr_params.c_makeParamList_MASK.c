
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numParams; int * parserSetupArg; int * parserSetup; int * paramCompileArg; int * paramCompile; int * paramFetchArg; int * paramFetch; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__* ParamListInfo ;
typedef int ParamExternData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;

ParamListInfo
FUNC_2(int VAR_2)
{
 ParamListInfo VAR_3;
 Size VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1) +
  VAR_2 * sizeof(ParamExternData);

 VAR_3 = (ParamListInfo) FUNC_1(VAR_4);
 VAR_3->paramFetch = ((void*)0);
 VAR_3->paramFetchArg = ((void*)0);
 VAR_3->paramCompile = ((void*)0);
 VAR_3->paramCompileArg = ((void*)0);
 VAR_3->parserSetup = ((void*)0);
 VAR_3->parserSetupArg = ((void*)0);
 VAR_3->numParams = VAR_2;

 return VAR_3;
}
