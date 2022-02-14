
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bt_file ;
struct TYPE_7__ {int bCrash; scalar_t__ nCrashSync; TYPE_2__** apFile; } ;
struct TYPE_6__ {int pFile; TYPE_1__* pVfs; TYPE_3__* pBt; } ;
struct TYPE_5__ {int (* xSync ) (int ) ;} ;
typedef TYPE_2__ BtFile ;
typedef TYPE_3__ BtDb ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(bt_file *VAR_2){
  int VAR_3 = VAR_1;
  BtFile *VAR_4 = (BtFile*)VAR_2;
  BtDb *VAR_5 = VAR_4->pBt;

  if( VAR_5 ){
    if( VAR_5->bCrash ) return VAR_0;
    if( VAR_5->nCrashSync ){
      VAR_5->nCrashSync--;
      VAR_5->bCrash = (VAR_5->nCrashSync==0);
      if( VAR_5->bCrash ){
        FUNC_0(VAR_5->apFile[0], 0);
        FUNC_0(VAR_5->apFile[1], 1);
        VAR_3 = VAR_0;
      }else{
        FUNC_0(VAR_4, 0);
      }
    }
  }

  if( VAR_3==VAR_1 ){
    VAR_3 = VAR_4->pVfs->xSync(VAR_4->pFile);
  }
  return VAR_3;
}
