
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bt_file ;
struct TYPE_6__ {int pFile; TYPE_2__* pVfs; TYPE_1__* pBt; } ;
struct TYPE_5__ {int (* xShmUnmap ) (int ,int) ;} ;
struct TYPE_4__ {scalar_t__ bCrash; } ;
typedef TYPE_3__ BtFile ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(bt_file *VAR_1, int VAR_2){
  BtFile *VAR_3 = (BtFile*)VAR_1;
  if( VAR_3->pBt && VAR_3->pBt->bCrash ) return VAR_0;
  return VAR_3->pVfs->xShmUnmap(VAR_3->pFile, VAR_2);
}
