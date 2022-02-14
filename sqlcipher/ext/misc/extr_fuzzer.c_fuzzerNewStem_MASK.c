
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {char* zBasis; int n; struct TYPE_12__* pHash; int rCostX; int rBaseCost; TYPE_3__* pRule; scalar_t__ nBasis; } ;
typedef TYPE_2__ fuzzer_stem ;
struct TYPE_13__ {struct TYPE_13__* pNext; } ;
typedef TYPE_3__ fuzzer_rule ;
typedef scalar_t__ fuzzer_len ;
struct TYPE_14__ {int nStem; TYPE_2__** apHash; int iRuleset; TYPE_1__* pVtab; } ;
typedef TYPE_4__ fuzzer_cursor ;
typedef int fuzzer_cost ;
struct TYPE_11__ {TYPE_3__* pRule; } ;


 unsigned int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_2 (char*,char const*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static fuzzer_stem *FUNC_6(
  fuzzer_cursor *VAR_0,
  const char *VAR_1,
  fuzzer_cost VAR_2
){
  fuzzer_stem *VAR_3;
  fuzzer_rule *VAR_4;
  unsigned int VAR_5;

  VAR_3 = FUNC_4( sizeof(*VAR_3) + FUNC_5(VAR_1) + 1 );
  if( VAR_3==0 ) return 0;
  FUNC_3(VAR_3, 0, sizeof(*VAR_3));
  VAR_3->zBasis = (char*)&VAR_3[1];
  VAR_3->nBasis = (fuzzer_len)FUNC_5(VAR_1);
  FUNC_2(VAR_3->zBasis, VAR_1, VAR_3->nBasis+1);
  VAR_4 = VAR_0->pVtab->pRule;
  while( FUNC_1(VAR_4, VAR_3, VAR_0->iRuleset) ){
    VAR_4 = VAR_4->pNext;
  }
  VAR_3->pRule = VAR_4;
  VAR_3->n = -1;
  VAR_3->rBaseCost = VAR_3->rCostX = VAR_2;
  VAR_5 = FUNC_0(VAR_3->zBasis);
  VAR_3->pHash = VAR_0->apHash[VAR_5];
  VAR_0->apHash[VAR_5] = VAR_3;
  VAR_0->nStem++;
  return VAR_3;
}
