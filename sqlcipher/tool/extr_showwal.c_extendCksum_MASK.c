
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bSwap; scalar_t__ s0; scalar_t__ s1; } ;
typedef TYPE_1__ Cksum ;


 int FUNC_0 (unsigned char*) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(
  Cksum *VAR_0,
  unsigned char *VAR_1,
  unsigned int VAR_2,
  int VAR_3
){
  unsigned int *VAR_4;
  if( VAR_3 ){
    int VAR_5 = 0;
    *((char*)&VAR_5) = 1;
    if( VAR_5==1 ){

      VAR_0->bSwap = FUNC_0(VAR_1)!=0x377f0682;
    }else{

      VAR_0->bSwap = FUNC_0(VAR_1)!=0x377f0683;
    }
    VAR_0->s0 = 0;
    VAR_0->s1 = 0;
  }
  VAR_4 = (unsigned int*)VAR_1;
  while( VAR_2>0 ){
    unsigned int VAR_6 = VAR_4[0];
    unsigned int VAR_7 = VAR_4[1];
    if( VAR_0->bSwap ){
      VAR_6 = FUNC_1(VAR_6);
      VAR_7 = FUNC_1(VAR_7);
    }
    VAR_0->s0 += VAR_6 + VAR_0->s1;
    VAR_0->s1 += VAR_7 + VAR_0->s0;
    VAR_2 -= 8;
    VAR_4 += 2;
  }
}
