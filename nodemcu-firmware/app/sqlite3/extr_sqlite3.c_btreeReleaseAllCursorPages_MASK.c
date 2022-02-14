
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iPage; scalar_t__* apPage; } ;
typedef TYPE_1__ BtCursor ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(BtCursor *VAR_0){
  int VAR_1;
  for(VAR_1=0; VAR_1<=VAR_0->iPage; VAR_1++){
    FUNC_0(VAR_0->apPage[VAR_1]);
    VAR_0->apPage[VAR_1] = 0;
  }
  VAR_0->iPage = -1;
}
