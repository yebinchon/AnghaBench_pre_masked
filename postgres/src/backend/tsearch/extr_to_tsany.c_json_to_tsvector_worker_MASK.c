
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
typedef int text ;
struct TYPE_6__ {scalar_t__ curwords; int * words; } ;
struct TYPE_5__ {int cfgId; TYPE_2__* prs; } ;
typedef TYPE_1__ TSVectorBuildState ;
typedef int TSVector ;
typedef TYPE_2__ ParsedText ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static TSVector
FUNC_2(Oid VAR_1, text *VAR_2, uint32 VAR_3)
{
 TSVectorBuildState VAR_4;
 ParsedText VAR_5;

 VAR_5.words = ((void*)0);
 VAR_5.curwords = 0;
 VAR_4.prs = &VAR_5;
 VAR_4.cfgId = VAR_1;

 FUNC_0(VAR_2, VAR_3, &VAR_4, VAR_0);

 return FUNC_1(&VAR_5);
}
