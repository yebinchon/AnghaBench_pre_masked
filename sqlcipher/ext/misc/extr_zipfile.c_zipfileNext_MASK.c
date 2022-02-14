
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;
typedef scalar_t__ i64 ;
typedef int ZipfileTab ;
struct TYPE_10__ {scalar_t__ nComment; scalar_t__ nFile; scalar_t__ nExtra; } ;
struct TYPE_12__ {struct TYPE_12__* pNext; TYPE_2__ cds; } ;
typedef TYPE_4__ ZipfileEntry ;
struct TYPE_9__ {scalar_t__ iOffset; scalar_t__ nSize; } ;
struct TYPE_13__ {scalar_t__ iNextOff; int bEof; scalar_t__ bNoop; TYPE_4__* pCurrent; scalar_t__ pFile; TYPE_1__ eocd; } ;
typedef TYPE_5__ ZipfileCsr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,int ,int ,scalar_t__,scalar_t__,TYPE_4__**) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_2){
  ZipfileCsr *VAR_3 = (ZipfileCsr*)VAR_2;
  int VAR_4 = VAR_0;

  if( VAR_3->pFile ){
    i64 VAR_5 = VAR_3->eocd.iOffset + VAR_3->eocd.nSize;
    FUNC_0(VAR_3->pCurrent);
    VAR_3->pCurrent = 0;
    if( VAR_3->iNextOff>=VAR_5 ){
      VAR_3->bEof = 1;
    }else{
      ZipfileEntry *VAR_6 = 0;
      ZipfileTab *VAR_7 = (ZipfileTab*)(VAR_2->pVtab);
      VAR_4 = FUNC_1(VAR_7, 0, 0, VAR_3->pFile, VAR_3->iNextOff, &VAR_6);
      if( VAR_4==VAR_0 ){
        VAR_3->iNextOff += VAR_1;
        VAR_3->iNextOff += (int)VAR_6->cds.nExtra + VAR_6->cds.nFile + VAR_6->cds.nComment;
      }
      VAR_3->pCurrent = VAR_6;
    }
  }else{
    if( !VAR_3->bNoop ){
      VAR_3->pCurrent = VAR_3->pCurrent->pNext;
    }
    if( VAR_3->pCurrent==0 ){
      VAR_3->bEof = 1;
    }
  }

  VAR_3->bNoop = 0;
  return VAR_4;
}
