
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite4_env ;
typedef int bt_file ;
struct TYPE_9__ {scalar_t__ pVfsCtx; } ;
typedef TYPE_2__ bt_env ;
struct TYPE_11__ {int nRef; TYPE_1__* pVfs; TYPE_3__** apFile; scalar_t__ bCrash; } ;
struct TYPE_10__ {int pFile; TYPE_1__* pVfs; TYPE_4__* pBt; } ;
struct TYPE_8__ {int (* xOpen ) (int *,TYPE_2__*,char const*,int,int *) ;} ;
typedef TYPE_3__ BtFile ;
typedef TYPE_4__ BtDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_2__*,char const*,int,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(
  sqlite4_env *VAR_6,
  bt_env *VAR_7,
  const char *VAR_8,
  int VAR_9, bt_file **VAR_10
){
  BtFile *VAR_11;
  BtDb *VAR_12 = (BtDb*)VAR_7->pVfsCtx;
  int VAR_13;

  if( VAR_12->bCrash ) return VAR_3;

  VAR_11 = (BtFile*)FUNC_2(sizeof(BtFile));
  if( !VAR_11 ) return VAR_4;
  if( VAR_9 & VAR_0 ){
    VAR_12->apFile[0] = VAR_11;
  }else if( VAR_9 & VAR_1 ){
    VAR_12->apFile[1] = VAR_11;
  }
  if( (VAR_9 & VAR_2)==0 ){
    VAR_11->pBt = VAR_12;
  }
  VAR_11->pVfs = VAR_12->pVfs;

  VAR_13 = VAR_12->pVfs->xOpen(VAR_6, VAR_7, VAR_8, VAR_9, &VAR_11->pFile);
  if( VAR_13!=VAR_5 ){
    FUNC_1(VAR_11);
    VAR_11 = 0;
  }else{
    VAR_12->nRef++;
  }

  *VAR_10 = (bt_file*)VAR_11;
  return VAR_13;
}
