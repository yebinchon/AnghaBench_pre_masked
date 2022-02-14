
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pNext; } ;
typedef TYPE_1__ GeoEvent ;


 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static GeoEvent *FUNC_1(GeoEvent *VAR_0, int VAR_1){
  int VAR_2 = 0;
  int VAR_3, VAR_4;
  GeoEvent *VAR_5;
  GeoEvent *VAR_6[50];
  for(VAR_3=0; VAR_3<VAR_1; VAR_3++){
    VAR_5 = &VAR_0[VAR_3];
    VAR_5->pNext = 0;
    for(VAR_4=0; VAR_4<VAR_2 && VAR_6[VAR_4]; VAR_4++){
      VAR_5 = FUNC_0(VAR_6[VAR_4], VAR_5);
      VAR_6[VAR_4] = 0;
    }
    VAR_6[VAR_4] = VAR_5;
    if( VAR_4>=VAR_2 ) VAR_2 = VAR_4+1;
  }
  VAR_5 = 0;
  for(VAR_3=0; VAR_3<VAR_2; VAR_3++){
    VAR_5 = FUNC_0(VAR_6[VAR_3], VAR_5);
  }
  return VAR_5;
}
