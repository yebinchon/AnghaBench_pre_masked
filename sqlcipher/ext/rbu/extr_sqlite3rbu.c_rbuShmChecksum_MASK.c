
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {scalar_t__ rc; TYPE_2__* pTargetFd; } ;
typedef TYPE_3__ sqlite3rbu ;
struct TYPE_10__ {TYPE_1__* pMethods; } ;
typedef TYPE_4__ sqlite3_file ;
typedef int i64 ;
struct TYPE_8__ {TYPE_4__* pReal; } ;
struct TYPE_7__ {scalar_t__ (* xShmMap ) (TYPE_4__*,int ,int,int ,void volatile**) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,int,int ,void volatile**) ;

__attribute__((used)) static i64 FUNC_1(sqlite3rbu *VAR_1){
  i64 VAR_2 = 0;
  if( VAR_1->rc==VAR_0 ){
    sqlite3_file *VAR_3 = VAR_1->pTargetFd->pReal;
    u32 volatile *VAR_4;
    VAR_1->rc = VAR_3->pMethods->xShmMap(VAR_3, 0, 32*1024, 0, (void volatile**)&VAR_4);
    if( VAR_1->rc==VAR_0 ){
      VAR_2 = ((i64)VAR_4[10] << 32) + VAR_4[11];
    }
  }
  return VAR_2;
}
