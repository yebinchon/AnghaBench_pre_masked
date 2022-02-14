
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lsm_db ;
typedef int i64 ;
struct TYPE_2__ {int iRet; int bNotOne; int iInUse; } ;
typedef TYPE_1__ FindFreeblockCtx ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,void*) ;

__attribute__((used)) static int FUNC_1(lsm_db *VAR_1, i64 VAR_2, int VAR_3, int *VAR_4){
  int VAR_5;
  FindFreeblockCtx VAR_6;

  VAR_6.iInUse = VAR_2;
  VAR_6.iRet = 0;
  VAR_6.bNotOne = VAR_3;
  VAR_5 = FUNC_0(VAR_1, 0, VAR_0, (void *)&VAR_6);
  *VAR_4 = VAR_6.iRet;

  return VAR_5;
}
