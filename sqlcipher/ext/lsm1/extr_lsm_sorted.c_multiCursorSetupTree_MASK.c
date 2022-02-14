
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nTree; } ;
typedef TYPE_1__ MultiCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_6(MultiCursor *VAR_1, int VAR_2){
  int VAR_3;

  VAR_3 = FUNC_3(VAR_1);
  if( VAR_3==VAR_0 ){
    int VAR_4;
    for(VAR_4=VAR_1->nTree-1; VAR_4>0; VAR_4--){
      FUNC_5(VAR_1, VAR_4, VAR_2);
    }
  }

  FUNC_0(VAR_1);
  FUNC_4(VAR_1, &VAR_3);

  if( VAR_3==VAR_0 && FUNC_1(VAR_1, 0)==0 ){
    VAR_3 = FUNC_2(VAR_1, VAR_2);
  }
  return VAR_3;
}
