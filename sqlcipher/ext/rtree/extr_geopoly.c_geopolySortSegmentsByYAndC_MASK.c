
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_1__ GeoSegment ;


 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static GeoSegment *FUNC_1(GeoSegment *VAR_0){
  int VAR_1 = 0;
  int VAR_2;
  GeoSegment *VAR_3;
  GeoSegment *VAR_4[50];
  while( VAR_0 ){
    VAR_3 = VAR_0;
    VAR_0 = VAR_0->pNext;
    VAR_3->pNext = 0;
    for(VAR_2=0; VAR_2<VAR_1 && VAR_4[VAR_2]; VAR_2++){
      VAR_3 = FUNC_0(VAR_4[VAR_2], VAR_3);
      VAR_4[VAR_2] = 0;
    }
    VAR_4[VAR_2] = VAR_3;
    if( VAR_2>=VAR_1 ) VAR_1 = VAR_2+1;
  }
  VAR_3 = 0;
  for(VAR_2=0; VAR_2<VAR_1; VAR_2++){
    VAR_3 = FUNC_0(VAR_4[VAR_2], VAR_3);
  }
  return VAR_3;
}
