
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bt_file ;
struct TYPE_9__ {TYPE_2__** apFile; } ;
struct TYPE_8__ {TYPE_3__* pBt; int pFile; TYPE_1__* pVfs; struct TYPE_8__* apSector; } ;
struct TYPE_7__ {int (* xClose ) (int ) ;} ;
typedef TYPE_2__ BtFile ;
typedef TYPE_3__ BtDb ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(bt_file *VAR_0){
  BtFile *VAR_1 = (BtFile*)VAR_0;
  BtDb *VAR_2 = VAR_1->pBt;
  int VAR_3;
  if( VAR_2 ){
    FUNC_1(VAR_1, 0);
    if( VAR_1==VAR_2->apFile[0] ) VAR_2->apFile[0] = 0;
    if( VAR_1==VAR_2->apFile[1] ) VAR_2->apFile[1] = 0;
  }
  FUNC_3(VAR_1->apSector);
  VAR_3 = VAR_1->pVfs->xClose(VAR_1->pFile);



  FUNC_3(VAR_1);
  return VAR_3;
}
