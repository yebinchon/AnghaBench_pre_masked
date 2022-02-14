
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ i16 ;
struct TYPE_3__ {int nColumn; scalar_t__* aiColumn; } ;
typedef TYPE_1__ Index ;



i16 FUNC_0(Index *VAR_0, i16 VAR_1){
  int VAR_2;
  for(VAR_2=0; VAR_2<VAR_0->nColumn; VAR_2++){
    if( VAR_1==VAR_0->aiColumn[VAR_2] ) return VAR_2;
  }
  return -1;
}
