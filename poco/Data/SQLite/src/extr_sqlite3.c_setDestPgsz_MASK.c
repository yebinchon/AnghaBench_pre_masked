
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pSrc; int pDest; } ;
typedef TYPE_1__ sqlite3_backup ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_backup *VAR_0){
  int VAR_1;
  VAR_1 = FUNC_1(VAR_0->pDest,FUNC_0(VAR_0->pSrc),-1,0);
  return VAR_1;
}
