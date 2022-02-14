
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {int* aBitmap; int* aHash; TYPE_2__** apSub; } ;
struct TYPE_7__ {size_t iSize; size_t iDivisor; int nSet; TYPE_1__ u; } ;
typedef TYPE_2__ Bitvec ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (size_t*,size_t*,int) ;
 int FUNC_3 (TYPE_2__**,int ,int) ;
 TYPE_2__* FUNC_4 (size_t) ;
 size_t* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,size_t*) ;

int FUNC_7(Bitvec *VAR_7, u32 VAR_8){
  u32 VAR_9;
  if( VAR_7==0 ) return VAR_6;
  FUNC_1( VAR_8>0 );
  FUNC_1( VAR_8<=VAR_7->iSize );
  VAR_8--;
  while((VAR_7->iSize > VAR_1) && VAR_7->iDivisor) {
    u32 VAR_10 = VAR_8/VAR_7->iDivisor;
    VAR_8 = VAR_8%VAR_7->iDivisor;
    if( VAR_7->u.apSub[VAR_10]==0 ){
      VAR_7->u.apSub[VAR_10] = FUNC_4( VAR_7->iDivisor );
      if( VAR_7->u.apSub[VAR_10]==0 ) return VAR_5;
    }
    VAR_7 = VAR_7->u.apSub[VAR_10];
  }
  if( VAR_7->iSize<=VAR_1 ){
    VAR_7->u.aBitmap[VAR_8/VAR_4] |= 1 << (VAR_8&(VAR_4-1));
    return VAR_6;
  }
  VAR_9 = FUNC_0(VAR_8++);



  if( !VAR_7->u.aHash[VAR_9] ){
    if (VAR_7->nSet<(VAR_2-1)) {
      goto bitvec_set_end;
    } else {
      goto bitvec_set_rehash;
    }
  }


  do {
    if( VAR_7->u.aHash[VAR_9]==VAR_8 ) return VAR_6;
    VAR_9++;
    if( VAR_9>=VAR_2 ) VAR_9 = 0;
  } while( VAR_7->u.aHash[VAR_9] );



bitvec_set_rehash:
  if( VAR_7->nSet>=VAR_0 ){
    unsigned int VAR_11;
    int VAR_12;
    u32 *VAR_13 = FUNC_5(0, sizeof(VAR_7->u.aHash));
    if( VAR_13==0 ){
      return VAR_5;
    }else{
      FUNC_2(VAR_13, VAR_7->u.aHash, sizeof(VAR_7->u.aHash));
      FUNC_3(VAR_7->u.apSub, 0, sizeof(VAR_7->u.apSub));
      VAR_7->iDivisor = (VAR_7->iSize + VAR_3 - 1)/VAR_3;
      VAR_12 = FUNC_7(VAR_7, VAR_8);
      for(VAR_11=0; VAR_11<VAR_2; VAR_11++){
        if( VAR_13[VAR_11] ) VAR_12 |= FUNC_7(VAR_7, VAR_13[VAR_11]);
      }
      FUNC_6(0, VAR_13);
      return VAR_12;
    }
  }
bitvec_set_end:
  VAR_7->nSet++;
  VAR_7->u.aHash[VAR_9] = VAR_8;
  return VAR_6;
}
