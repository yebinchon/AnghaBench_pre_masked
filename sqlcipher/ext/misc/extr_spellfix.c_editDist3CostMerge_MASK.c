
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_1__ EditDist3Cost ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static EditDist3Cost *FUNC_1(
  EditDist3Cost *VAR_0,
  EditDist3Cost *VAR_1
){
  EditDist3Cost *VAR_2 = 0;
  EditDist3Cost **VAR_3 = &VAR_2;
  EditDist3Cost *VAR_4;
  while( VAR_0 && VAR_1 ){
    if( FUNC_0(VAR_0,VAR_1)<=0 ){
      VAR_4 = VAR_0;
      VAR_0 = VAR_0->pNext;
    }else{
      VAR_4 = VAR_1;
      VAR_1 = VAR_1->pNext;
    }
    *VAR_3 = VAR_4;
    VAR_3 = &VAR_4->pNext;
  }
  if( VAR_0 ){
    *VAR_3 = VAR_0;
  }else{
    *VAR_3 = VAR_1;
  }
  return VAR_2;
}
