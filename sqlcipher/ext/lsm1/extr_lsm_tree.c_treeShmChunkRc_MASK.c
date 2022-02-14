
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nShm; scalar_t__* apShm; } ;
typedef TYPE_1__ lsm_db ;
typedef int ShmChunk ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static ShmChunk * FUNC_2(lsm_db *VAR_1, int VAR_2, int *VAR_3){
  FUNC_0( *VAR_3==VAR_0 );
  if( VAR_2<VAR_1->nShm || VAR_0==(*VAR_3 = FUNC_1(VAR_1, VAR_2+1)) ){
    return (ShmChunk *)(VAR_1->apShm[VAR_2]);
  }
  return 0;
}
