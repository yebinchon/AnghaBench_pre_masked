
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int lsm_env ;
struct TYPE_5__ {void* pData; int nData; } ;
typedef int Segment ;
typedef int Page ;
typedef TYPE_1__ LsmBlob ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *,int,int*,int*,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_3(
  lsm_env *VAR_1,
  Segment *VAR_2,
  Page *VAR_3,
  int VAR_4,
  int *VAR_5,
  LsmBlob *VAR_6
){
  int VAR_7 = VAR_0;
  int VAR_8;
  u8 *VAR_9;

  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_8, VAR_6);
  FUNC_0( (void *)VAR_9!=VAR_6->pData || VAR_8==VAR_6->nData );
  if( (void *)VAR_9!=VAR_6->pData ){
    VAR_7 = FUNC_2(VAR_1, VAR_6, VAR_9, VAR_8);
  }

  return VAR_7;
}
