
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite4_int64 ;
typedef int bt_file ;
struct TYPE_7__ {int pFile; TYPE_2__* pVfs; TYPE_1__* pBt; } ;
struct TYPE_6__ {int (* xWrite ) (int ,int ,void*,int) ;} ;
struct TYPE_5__ {scalar_t__ nCrashSync; scalar_t__ bCrash; } ;
typedef TYPE_3__ BtFile ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int ,int ,void*,int) ;

__attribute__((used)) static int FUNC_2(bt_file *VAR_1, sqlite4_int64 VAR_2, void *VAR_3, int VAR_4){
  BtFile *VAR_5 = (BtFile*)VAR_1;
  if( VAR_5->pBt && VAR_5->pBt->bCrash ) return VAR_0;
  if( VAR_5->pBt && VAR_5->pBt->nCrashSync ){
    FUNC_0(VAR_5, VAR_2, VAR_4);
  }
  return VAR_5->pVfs->xWrite(VAR_5->pFile, VAR_2, VAR_3, VAR_4);
}
