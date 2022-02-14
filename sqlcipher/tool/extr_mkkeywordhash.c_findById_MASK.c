
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef TYPE_1__ Keyword ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static Keyword *FUNC_0(int VAR_2){
  int VAR_3;
  for(VAR_3=0; VAR_3<VAR_1; VAR_3++){
    if( VAR_0[VAR_3].id==VAR_2 ) break;
  }
  return &VAR_0[VAR_3];
}
