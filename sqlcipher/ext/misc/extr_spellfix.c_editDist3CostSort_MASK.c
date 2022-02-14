
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_1__ EditDist3Cost ;


 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static EditDist3Cost *FUNC_1(EditDist3Cost *VAR_0){
  EditDist3Cost *VAR_1[60], *VAR_2;
  int VAR_3;
  int VAR_4 = 0;
  VAR_1[0] = 0;
  VAR_1[1] = 0;
  while( VAR_0 ){
    VAR_2 = VAR_0;
    VAR_0 = VAR_2->pNext;
    VAR_2->pNext = 0;
    for(VAR_3=0; VAR_1[VAR_3]; VAR_3++){
      VAR_2 = FUNC_0(VAR_1[VAR_3],VAR_2);
      VAR_1[VAR_3] = 0;
    }
    VAR_1[VAR_3] = VAR_2;
    if( VAR_3>VAR_4 ){
      VAR_4 = VAR_3;
      VAR_1[VAR_3+1] = 0;
    }
  }
  VAR_2 = 0;
  for(VAR_3=0; VAR_3<=VAR_4; VAR_3++){
    if( VAR_1[VAR_3] ) VAR_2 = FUNC_0(VAR_2,VAR_1[VAR_3]);
  }
  return VAR_2;
}
