
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int sqlite3 ;
struct TYPE_6__ {scalar_t__ iReadOff; scalar_t__ iEof; int nKey; int aKey; } ;
typedef TYPE_1__ VdbeSorterIter ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int,int *) ;
 int FUNC_1 (int *,TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(
  sqlite3 *VAR_1,
  VdbeSorterIter *VAR_2
){
  int VAR_3;
  u64 VAR_4 = 0;

  if( VAR_2->iReadOff>=VAR_2->iEof ){

    FUNC_2(VAR_1, VAR_2);
    return VAR_0;
  }

  VAR_3 = FUNC_1(VAR_1, VAR_2, &VAR_4);
  if( VAR_3==VAR_0 ){
    VAR_2->nKey = (int)VAR_4;
    VAR_3 = FUNC_0(VAR_1, VAR_2, (int)VAR_4, &VAR_2->aKey);
  }

  return VAR_3;
}
