
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int iPKey; } ;
typedef TYPE_2__ Table ;
struct TYPE_8__ {int nCol; TYPE_1__* aCol; } ;
struct TYPE_6__ {int iFrom; } ;
typedef TYPE_3__ FKey ;



__attribute__((used)) static int FUNC_0(
  Table *VAR_0,
  FKey *VAR_1,
  int *VAR_2,
  int VAR_3
){
  int VAR_4;
  for(VAR_4=0; VAR_4<VAR_1->nCol; VAR_4++){
    int VAR_5 = VAR_1->aCol[VAR_4].iFrom;
    if( VAR_2[VAR_5]>=0 ) return 1;
    if( VAR_5==VAR_0->iPKey && VAR_3 ) return 1;
  }
  return 0;
}
