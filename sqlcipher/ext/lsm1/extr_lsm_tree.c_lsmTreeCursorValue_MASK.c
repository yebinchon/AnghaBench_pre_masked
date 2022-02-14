
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int nValue; } ;
typedef TYPE_1__ TreeKey ;
struct TYPE_9__ {int blob; } ;
typedef TYPE_2__ TreeCursor ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int *,int*) ;
 int FUNC_2 (TYPE_2__*,int*) ;

int FUNC_3(TreeCursor *VAR_2, void **VAR_3, int *VAR_4){
  int VAR_5 = 0;
  int VAR_6;

  VAR_6 = FUNC_2(VAR_2, &VAR_5);
  if( VAR_5==0 ){
    TreeKey *VAR_7 = FUNC_1(VAR_2, &VAR_2->blob, &VAR_6);
    if( VAR_6==VAR_1 ){
      if( VAR_7->flags & VAR_0 ){
        *VAR_4 = VAR_7->nValue;
        *VAR_3 = FUNC_0(VAR_7);
      }else{
        *VAR_3 = 0;
        *VAR_4 = -1;
      }
    }
  }else{
    *VAR_3 = 0;
    *VAR_4 = 0;
  }

  return VAR_6;
}
