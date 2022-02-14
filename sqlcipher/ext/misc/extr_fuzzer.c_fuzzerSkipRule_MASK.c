
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nBasis; } ;
typedef TYPE_1__ fuzzer_stem ;
struct TYPE_6__ {int iRuleset; scalar_t__ nTo; scalar_t__ nFrom; } ;
typedef TYPE_2__ fuzzer_rule ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(
  const fuzzer_rule *VAR_1,
  fuzzer_stem *VAR_2,
  int VAR_3
){
  return VAR_1 && (
      (VAR_1->iRuleset!=VAR_3)
   || (VAR_2->nBasis + VAR_1->nTo - VAR_1->nFrom)>VAR_0
  );
}
