
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int bt_file ;
struct TYPE_4__ {int pFile; TYPE_1__* pVfs; } ;
struct TYPE_3__ {int (* xSectorSize ) (int ) ;} ;
typedef TYPE_2__ BtFile ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(bt_file *VAR_0){
  BtFile *VAR_1 = (BtFile*)VAR_0;
  return VAR_1->pVfs->xSectorSize(VAR_1->pFile);
}
