
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nVertex; } ;
typedef TYPE_1__ GeoPoly ;


 double FUNC_0 (TYPE_1__*,int) ;
 double FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static double FUNC_2(GeoPoly *VAR_0){
  double VAR_1 = 0.0;
  int VAR_2;
  for(VAR_2=0; VAR_2<VAR_0->nVertex-1; VAR_2++){
    VAR_1 += (FUNC_0(VAR_0,VAR_2) - FUNC_0(VAR_0,VAR_2+1))
              * (FUNC_1(VAR_0,VAR_2) + FUNC_1(VAR_0,VAR_2+1))
              * 0.5;
  }
  VAR_1 += (FUNC_0(VAR_0,VAR_2) - FUNC_0(VAR_0,0))
           * (FUNC_1(VAR_0,VAR_2) + FUNC_1(VAR_0,0))
           * 0.5;
  return VAR_1;
}
