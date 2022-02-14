
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zErr; } ;
typedef TYPE_1__ GState ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(GState *VAR_0){
  int VAR_1;
  int VAR_2;
  int VAR_3;
  int VAR_4;

  VAR_1 = FUNC_0(VAR_0, 3);
  for(VAR_2=0; VAR_2<VAR_1; VAR_2++){
    VAR_3 = FUNC_0(VAR_0, 12+VAR_2*2);
    VAR_4 = FUNC_1(VAR_0, VAR_3);
    FUNC_2(VAR_0, VAR_4);
    if( VAR_0->zErr ) return;
  }
  FUNC_2(VAR_0, FUNC_1(VAR_0, 8));
}
