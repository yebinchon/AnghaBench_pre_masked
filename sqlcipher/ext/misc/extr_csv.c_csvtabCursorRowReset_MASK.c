
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pVtab; } ;
struct TYPE_7__ {scalar_t__* aLen; scalar_t__* azVal; TYPE_1__ base; } ;
struct TYPE_6__ {int nCol; } ;
typedef TYPE_2__ CsvTable ;
typedef TYPE_3__ CsvCursor ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(CsvCursor *VAR_0){
  CsvTable *VAR_1 = (CsvTable*)VAR_0->base.pVtab;
  int VAR_2;
  for(VAR_2=0; VAR_2<VAR_1->nCol; VAR_2++){
    FUNC_0(VAR_0->azVal[VAR_2]);
    VAR_0->azVal[VAR_2] = 0;
    VAR_0->aLen[VAR_2] = 0;
  }
}
