
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double y; double C; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ GeoSegment ;



__attribute__((used)) static GeoSegment *FUNC_0(GeoSegment *VAR_0, GeoSegment *VAR_1){
  GeoSegment VAR_2, *VAR_3;
  VAR_2.pNext = 0;
  VAR_3 = &VAR_2;
  while( VAR_1 && VAR_0 ){
    double VAR_4 = VAR_1->y - VAR_0->y;
    if( VAR_4==0.0 ) VAR_4 = VAR_1->C - VAR_0->C;
    if( VAR_4<0.0 ){
      VAR_3->pNext = VAR_1;
      VAR_3 = VAR_1;
      VAR_1 = VAR_1->pNext;
    }else{
      VAR_3->pNext = VAR_0;
      VAR_3 = VAR_0;
      VAR_0 = VAR_0->pNext;
    }
  }
  VAR_3->pNext = VAR_1 ? VAR_1 : VAR_0;
  return VAR_2.pNext;
}
