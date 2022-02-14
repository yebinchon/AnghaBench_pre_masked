
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_3__ {int pEnv; struct TYPE_3__* apShm; int fd; int nMap; scalar_t__ pMap; } ;
typedef TYPE_1__ PosixFile ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(lsm_file *VAR_1){
   PosixFile *VAR_2 = (PosixFile *)VAR_1;
   FUNC_1(VAR_1, 0);
   if( VAR_2->pMap ) FUNC_3(VAR_2->pMap, VAR_2->nMap);
   FUNC_0(VAR_2->fd);
   FUNC_2(VAR_2->pEnv, VAR_2->apShm);
   FUNC_2(VAR_2->pEnv, VAR_2);
   return VAR_0;
}
