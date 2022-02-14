
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* aTree; } ;
typedef TYPE_1__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int*) ;

int FUNC_2(MultiCursor *VAR_3){
  int VAR_4 = VAR_2;
  if( VAR_3->aTree ){
    int VAR_5 = VAR_3->aTree[1];
    if( VAR_5==VAR_0 || VAR_5==VAR_1 ){
      FUNC_1(VAR_3, &VAR_4);
    }
  }
  FUNC_0(VAR_3);
  return VAR_4;
}
