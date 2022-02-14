
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int* aBitmap; int* aHash; TYPE_2__** apSub; } ;
struct TYPE_5__ {size_t iSize; int iDivisor; TYPE_1__ u; } ;
typedef TYPE_2__ Bitvec ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int) ;

int FUNC_2(Bitvec *VAR_3, u32 VAR_4){
  FUNC_1( VAR_3!=0 );
  VAR_4--;
  if( VAR_4>=VAR_3->iSize ) return 0;
  while( VAR_3->iDivisor ){
    u32 VAR_5 = VAR_4/VAR_3->iDivisor;
    VAR_4 = VAR_4%VAR_3->iDivisor;
    VAR_3 = VAR_3->u.apSub[VAR_5];
    if (!VAR_3) {
      return 0;
    }
  }
  if( VAR_3->iSize<=VAR_0 ){
    return (VAR_3->u.aBitmap[VAR_4/VAR_2] & (1<<(VAR_4&(VAR_2-1))))!=0;
  } else{
    u32 VAR_6 = FUNC_0(VAR_4++);
    while( VAR_3->u.aHash[VAR_6] ){
      if( VAR_3->u.aHash[VAR_6]==VAR_4 ) return 1;
      VAR_6 = (VAR_6+1) % VAR_1;
    }
    return 0;
  }
}
