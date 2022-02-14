
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_4__ {int * pVdbe; } ;
typedef TYPE_1__ Parse ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static void FUNC_2(Parse *VAR_0, int VAR_1){
  Vdbe *VAR_2 = VAR_0->pVdbe;
  if( VAR_2 ){
    FUNC_0(VAR_0, VAR_1);
    FUNC_1(VAR_0->pVdbe, VAR_1, 0);
    if( VAR_1!=1 ) FUNC_1(VAR_0->pVdbe, 1, 0);
  }
}
