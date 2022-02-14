
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nLang; TYPE_1__ const* a; } ;
struct TYPE_6__ {int iLang; } ;
typedef TYPE_1__ EditDist3Lang ;
typedef TYPE_2__ EditDist3Config ;


 TYPE_1__ const VAR_0 ;

__attribute__((used)) static const EditDist3Lang *FUNC_0(
  EditDist3Config *VAR_1,
  int VAR_2
){
  int VAR_3;
  for(VAR_3=0; VAR_3<VAR_1->nLang; VAR_3++){
    if( VAR_1->a[VAR_3].iLang==VAR_2 ) return &VAR_1->a[VAR_3];
  }
  return &VAR_0;
}
