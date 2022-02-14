
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pBt; } ;
typedef TYPE_1__ BtDb ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(BtDb *VAR_1, int VAR_2, int *VAR_3){
  int VAR_4;
  int VAR_5 = VAR_0;

  VAR_4 = FUNC_1(VAR_1->pBt);
  if( VAR_4<VAR_2 ){
    VAR_5 = FUNC_0(VAR_1->pBt, VAR_2);
    *VAR_3 = VAR_4;
  }else{
    *VAR_3 = -1;
  }

  return VAR_5;
}
