
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_12__ {char* zFile; scalar_t__ pFirstEntry; scalar_t__ pLastEntry; scalar_t__ pWriteFd; } ;
typedef TYPE_2__ ZipfileTab ;
struct TYPE_14__ {scalar_t__ nEntry; int iOffset; } ;
struct TYPE_13__ {scalar_t__ pFreeEntry; scalar_t__ pFile; int bEof; int bNoop; scalar_t__ pCurrent; TYPE_6__ eocd; int iNextOff; } ;
typedef TYPE_3__ ZipfileCsr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,char*,...) ;
 int FUNC_7 (TYPE_2__*,int const*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,int ,int ,scalar_t__,TYPE_6__*) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_11(
  sqlite3_vtab_cursor *VAR_3,
  int VAR_4, const char *VAR_5,
  int VAR_6, sqlite3_value **VAR_7
){
  ZipfileTab *VAR_8 = (ZipfileTab*)VAR_3->pVtab;
  ZipfileCsr *VAR_9 = (ZipfileCsr*)VAR_3;
  const char *VAR_10 = 0;
  int VAR_11 = VAR_2;
  int VAR_12 = 0;

  FUNC_10(VAR_9);

  if( VAR_8->zFile ){
    VAR_10 = VAR_8->zFile;
  }else if( VAR_4==0 ){
    FUNC_6(VAR_9, "zipfile() function requires an argument");
    return VAR_1;
  }else if( FUNC_5(VAR_7[0])==VAR_0 ){
    const u8 *VAR_13 = (const u8*)FUNC_2(VAR_7[0]);
    int VAR_14 = FUNC_3(VAR_7[0]);
    FUNC_0( VAR_8->pFirstEntry==0 );
    VAR_11 = FUNC_7(VAR_8, VAR_13, VAR_14);
    VAR_9->pFreeEntry = VAR_8->pFirstEntry;
    VAR_8->pFirstEntry = VAR_8->pLastEntry = 0;
    if( VAR_11!=VAR_2 ) return VAR_11;
    VAR_12 = 1;
  }else{
    VAR_10 = (const char*)FUNC_4(VAR_7[0]);
  }

  if( 0==VAR_8->pWriteFd && 0==VAR_12 ){
    VAR_9->pFile = FUNC_1(VAR_10, "rb");
    if( VAR_9->pFile==0 ){
      FUNC_6(VAR_9, "cannot open file: %s", VAR_10);
      VAR_11 = VAR_1;
    }else{
      VAR_11 = FUNC_9(VAR_8, 0, 0, VAR_9->pFile, &VAR_9->eocd);
      if( VAR_11==VAR_2 ){
        if( VAR_9->eocd.nEntry==0 ){
          VAR_9->bEof = 1;
        }else{
          VAR_9->iNextOff = VAR_9->eocd.iOffset;
          VAR_11 = FUNC_8(VAR_3);
        }
      }
    }
  }else{
    VAR_9->bNoop = 1;
    VAR_9->pCurrent = VAR_9->pFreeEntry ? VAR_9->pFreeEntry : VAR_8->pFirstEntry;
    VAR_11 = FUNC_8(VAR_3);
  }

  return VAR_11;
}
