
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite4_env ;
struct TYPE_5__ {scalar_t__ pVfsCtx; } ;
typedef TYPE_1__ bt_env ;
struct TYPE_7__ {int (* xUnlink ) (int *,TYPE_3__*,char const*) ;} ;
struct TYPE_6__ {TYPE_3__* pVfs; scalar_t__ bCrash; } ;
typedef TYPE_2__ BtDb ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,char const*) ;

__attribute__((used)) static int FUNC_1(sqlite4_env *VAR_1, bt_env *VAR_2, const char *VAR_3){
  BtDb *VAR_4 = (BtDb*)VAR_2->pVfsCtx;
  if( VAR_4->bCrash ) return VAR_0;
  return VAR_4->pVfs->xUnlink(VAR_1, VAR_4->pVfs, VAR_3);
}
