
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int lsm_env ;
struct TYPE_3__ {int nArray; int nAlloc; int * aArray; } ;
typedef TYPE_1__ IntArray ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(lsm_env *VAR_2, IntArray *VAR_3, u32 VAR_4){
  FUNC_0( VAR_3->nArray<=VAR_3->nAlloc );
  if( VAR_3->nArray>=VAR_3->nAlloc ){
    u32 *VAR_5;
    int VAR_6 = VAR_3->nArray ? VAR_3->nArray*2 : 128;
    VAR_5 = FUNC_1(VAR_2, VAR_3->aArray, VAR_6*sizeof(u32));
    if( !VAR_5 ) return VAR_0;
    VAR_3->aArray = VAR_5;
    VAR_3->nAlloc = VAR_6;
  }

  VAR_3->aArray[VAR_3->nArray++] = VAR_4;
  return VAR_1;
}
