
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int const mLock; } ;
typedef TYPE_1__ lsm_db ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(lsm_db *VAR_3, int VAR_4){
  const u64 VAR_5 = ((u64)1 << (VAR_4-1));
  const u64 VAR_6 = ((u64)1 << (VAR_4+32-1));

  if( VAR_3->mLock & VAR_5 ) return VAR_0;
  if( VAR_3->mLock & VAR_6 ) return VAR_1;
  return VAR_2;
}
