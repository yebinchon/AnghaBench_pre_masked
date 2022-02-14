
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_env ;
typedef int TreeCursor ;
struct TYPE_5__ {int val; int key; int eType; int flags; TYPE_1__* pDb; } ;
struct TYPE_4__ {int * pEnv; } ;
typedef TYPE_2__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,void**,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,void*,int,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,void**,int*) ;
 int FUNC_9 (int *,int *,void*,int) ;

__attribute__((used)) static int FUNC_10(
  MultiCursor *VAR_6,
  TreeCursor *VAR_7,
  void *VAR_8, int VAR_9,
  int VAR_10,
  int *VAR_11
){
  int VAR_12 = VAR_3;
  if( VAR_7 ){
    int VAR_13 = 0;
    FUNC_6(VAR_7, VAR_8, VAR_9, &VAR_13);
    switch( VAR_10 ){
      case 129: {
        int VAR_14 = FUNC_1(VAR_7);
        if( (VAR_13<0 && (VAR_14 & VAR_5))
         || (VAR_13>0 && (VAR_14 & VAR_1))
         || (VAR_13==0 && (VAR_14 & VAR_4))
        ){
          *VAR_11 = 1;
        }else if( VAR_13==0 && (VAR_14 & VAR_2) ){
          lsm_env *VAR_15 = VAR_6->pDb->pEnv;
          void *VAR_16; int VAR_17;
          *VAR_11 = 1;
          VAR_6->flags |= VAR_0;
          VAR_12 = FUNC_2(VAR_7, &VAR_6->eType, &VAR_16, &VAR_17);
          if( VAR_12==VAR_3 ) VAR_12 = FUNC_9(VAR_15, &VAR_6->key, VAR_16, VAR_17);
          if( VAR_12==VAR_3 ) VAR_12 = FUNC_8(VAR_7, &VAR_16, &VAR_17);
          if( VAR_12==VAR_3 ) VAR_12 = FUNC_9(VAR_15, &VAR_6->val, VAR_16, VAR_17);
        }
        FUNC_5(VAR_7);
        break;
      }
      case 128:
        if( VAR_13<0 && FUNC_7(VAR_7) ){
          FUNC_3(VAR_7);
        }
        break;
      default:
        if( VAR_13>0 ){
          FUNC_0( FUNC_7(VAR_7) );
          FUNC_4(VAR_7);
        }
        break;
    }
  }
  return VAR_12;
}
