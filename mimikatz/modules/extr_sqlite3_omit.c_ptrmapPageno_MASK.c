
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int usableSize; int mutex; } ;
typedef int Pgno ;
typedef TYPE_1__ BtShared ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static Pgno FUNC_3(BtShared *VAR_0, Pgno VAR_1){
  int VAR_2;
  Pgno VAR_3, VAR_4;
  FUNC_1( FUNC_2(VAR_0->mutex) );
  if( VAR_1<2 ) return 0;
  VAR_2 = (VAR_0->usableSize/5)+1;
  VAR_3 = (VAR_1-2)/VAR_2;
  VAR_4 = (VAR_3*VAR_2) + 2;
  if( VAR_4==FUNC_0(VAR_0) ){
    VAR_4++;
  }
  return VAR_4;
}
