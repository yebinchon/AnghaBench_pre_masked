
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_5__ {int nTab; } ;
typedef TYPE_1__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int ,int,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int,int) ;

void FUNC_3(Parse *VAR_3, int VAR_4){
  Vdbe *VAR_5 = FUNC_0(VAR_3);
  FUNC_1(VAR_3, VAR_4, VAR_1, 1, VAR_0);
  FUNC_2(VAR_5, VAR_2, 0, VAR_1, VAR_4, 5);
  if( VAR_3->nTab==0 ){
    VAR_3->nTab = 1;
  }
}
