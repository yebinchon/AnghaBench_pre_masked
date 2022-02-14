
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nRate; int ixMask; } ;
typedef TYPE_1__ SHA3Context ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(SHA3Context *VAR_0, int VAR_1){
  FUNC_0(VAR_0, 0, sizeof(*VAR_0));
  if( VAR_1>=128 && VAR_1<=512 ){
    VAR_0->nRate = (1600 - ((VAR_1 + 31)&~31)*2)/8;
  }else{
    VAR_0->nRate = (1600 - 2*256)/8;
  }





  {
    static unsigned int VAR_2 = 1;
    if( 1==*(unsigned char*)&VAR_2 ){

      VAR_0->ixMask = 0;
    }else{

      VAR_0->ixMask = 7;
    }
  }

}
