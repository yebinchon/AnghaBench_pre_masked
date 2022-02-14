
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* aPage; scalar_t__ zErr; } ;
typedef TYPE_1__ GState ;


 int FUNC_0 (TYPE_1__*,char*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(GState *VAR_0, int VAR_1){
  if( VAR_0->zErr ) return;
  FUNC_2(VAR_0, VAR_1);
  if( VAR_0->zErr ) return;
  if( VAR_0->aPage[0]==5 ){
    FUNC_3(VAR_0);
  }else if( VAR_0->aPage[0]==13 ){
    FUNC_4(VAR_0);
  }else{
    FUNC_0(VAR_0, "page %d has a faulty type byte: %d", VAR_1, VAR_0->aPage[0]);
  }
  FUNC_1(VAR_0);
}
