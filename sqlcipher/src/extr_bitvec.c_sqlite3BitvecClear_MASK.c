
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int* aBitmap; size_t* aHash; TYPE_2__** apSub; } ;
struct TYPE_5__ {int iDivisor; scalar_t__ iSize; TYPE_1__ u; scalar_t__ nSet; } ;
typedef TYPE_2__ Bitvec ;


 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (size_t*,size_t*,int) ;
 int FUNC_3 (size_t*,int ,int) ;

void FUNC_4(Bitvec *VAR_3, u32 VAR_4, void *VAR_5){
  if( VAR_3==0 ) return;
  FUNC_1( VAR_4>0 );
  VAR_4--;
  while( VAR_3->iDivisor ){
    u32 VAR_6 = VAR_4/VAR_3->iDivisor;
    VAR_4 = VAR_4%VAR_3->iDivisor;
    VAR_3 = VAR_3->u.apSub[VAR_6];
    if (!VAR_3) {
      return;
    }
  }
  if( VAR_3->iSize<=VAR_0 ){
    VAR_3->u.aBitmap[VAR_4/VAR_2] &= ~(1 << (VAR_4&(VAR_2-1)));
  }else{
    unsigned int VAR_7;
    u32 *VAR_8 = VAR_5;
    FUNC_2(VAR_8, VAR_3->u.aHash, sizeof(VAR_3->u.aHash));
    FUNC_3(VAR_3->u.aHash, 0, sizeof(VAR_3->u.aHash));
    VAR_3->nSet = 0;
    for(VAR_7=0; VAR_7<VAR_1; VAR_7++){
      if( VAR_8[VAR_7] && VAR_8[VAR_7]!=(VAR_4+1) ){
        u32 VAR_9 = FUNC_0(VAR_8[VAR_7]-1);
        VAR_3->nSet++;
        while( VAR_3->u.aHash[VAR_9] ){
          VAR_9++;
          if( VAR_9>=VAR_1 ) VAR_9 = 0;
        }
        VAR_3->u.aHash[VAR_9] = VAR_8[VAR_7];
      }
    }
  }
}
