
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ x; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ GeoEvent ;



__attribute__((used)) static GeoEvent *FUNC_0(GeoEvent *VAR_0, GeoEvent *VAR_1){
  GeoEvent VAR_2, *VAR_3;
  VAR_2.pNext = 0;
  VAR_3 = &VAR_2;
  while( VAR_1 && VAR_0 ){
    if( VAR_1->x <= VAR_0->x ){
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
