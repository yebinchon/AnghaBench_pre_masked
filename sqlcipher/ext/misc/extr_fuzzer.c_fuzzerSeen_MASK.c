
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* pHash; int zBasis; } ;
typedef TYPE_1__ fuzzer_stem ;
struct TYPE_7__ {int zBuf; TYPE_1__** apHash; int nBuf; } ;
typedef TYPE_2__ fuzzer_cursor ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(fuzzer_cursor *VAR_1, fuzzer_stem *VAR_2){
  unsigned int VAR_3;
  fuzzer_stem *VAR_4;

  if( FUNC_1(VAR_2, &VAR_1->zBuf, &VAR_1->nBuf)==VAR_0 ){
    return -1;
  }
  VAR_3 = FUNC_0(VAR_1->zBuf);
  VAR_4 = VAR_1->apHash[VAR_3];
  while( VAR_4 && FUNC_2(VAR_4->zBasis, VAR_1->zBuf)!=0 ){
    VAR_4 = VAR_4->pHash;
  }
  return VAR_4!=0;
}
