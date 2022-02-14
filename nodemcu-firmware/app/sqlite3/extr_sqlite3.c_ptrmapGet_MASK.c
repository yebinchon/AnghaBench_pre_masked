
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ usableSize; int pPager; int mutex; } ;
typedef int Pgno ;
typedef int DbPage ;
typedef TYPE_1__ BtShared ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int,int **,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(BtShared *VAR_2, Pgno VAR_3, u8 *VAR_4, Pgno *VAR_5){
  DbPage *VAR_6;
  int VAR_7;
  u8 *VAR_8;
  int VAR_9;
  int VAR_10;

  FUNC_2( FUNC_7(VAR_2->mutex) );

  VAR_7 = FUNC_0(VAR_2, VAR_3);
  VAR_10 = FUNC_4(VAR_2->pPager, VAR_7, &VAR_6, 0);
  if( VAR_10!=0 ){
    return VAR_10;
  }
  VAR_8 = (u8 *)FUNC_5(VAR_6);

  VAR_9 = FUNC_1(VAR_7, VAR_3);
  if( VAR_9<0 ){
    FUNC_6(VAR_6);
    return VAR_0;
  }
  FUNC_2( VAR_9 <= (int)VAR_2->usableSize-5 );
  FUNC_2( VAR_4!=0 );
  *VAR_4 = VAR_8[VAR_9];
  if( VAR_5 ) *VAR_5 = FUNC_3(&VAR_8[VAR_9+1]);

  FUNC_6(VAR_6);
  if( *VAR_4<1 || *VAR_4>5 ) return VAR_0;
  return VAR_1;
}
