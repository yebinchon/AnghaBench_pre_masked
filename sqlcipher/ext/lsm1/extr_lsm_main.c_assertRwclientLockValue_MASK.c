
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {scalar_t__ iRwclient; int mLock; } ;
typedef TYPE_1__ lsm_db ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(lsm_db *VAR_1){

  u64 VAR_2;
  u64 VAR_3 = 0;

  if( VAR_1->iRwclient>=0 ){
    VAR_3 = ((u64)1 << (FUNC_0(VAR_1->iRwclient)-1));
  }
  VAR_2 = ((u64)1 << (FUNC_0(VAR_0)-1)) - 1;
  VAR_2 -= (((u64)1 << (FUNC_0(0)-1)) - 1);

  FUNC_1( (VAR_1->mLock & VAR_2)==VAR_3 );

}
