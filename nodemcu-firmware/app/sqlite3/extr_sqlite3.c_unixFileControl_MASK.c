
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int eFileLock; int lastErrno; int szChunk; int dbUpdate; int mmapSize; int mmapSizeMax; int nFetchOut; TYPE_1__* pVfs; } ;
typedef TYPE_2__ unixFile ;
typedef int sqlite3_file ;
typedef int i64 ;
struct TYPE_11__ {int mxMmap; } ;
struct TYPE_9__ {int mxPathname; int zName; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int,void*) ;
 TYPE_6__ VAR_4 ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int ,int*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(sqlite3_file *VAR_5, int VAR_6, void *VAR_7){
  unixFile *VAR_8 = (unixFile*)VAR_5;
  switch( VAR_6 ){
    case 135: {
      *(int*)VAR_7 = VAR_8->eFileLock;
      return VAR_1;
    }
    case 136: {
      *(int*)VAR_7 = VAR_8->lastErrno;
      return VAR_1;
    }
    case 140: {
      VAR_8->szChunk = *(int *)VAR_7;
      return VAR_1;
    }
    case 130: {
      int VAR_9;
      FUNC_0(1);
      VAR_9 = FUNC_1(VAR_8, *(i64 *)VAR_7);
      FUNC_0(0);
      return VAR_9;
    }
    case 133: {
      FUNC_8(VAR_8, VAR_2, (int*)VAR_7);
      return VAR_1;
    }
    case 132: {
      FUNC_8(VAR_8, VAR_3, (int*)VAR_7);
      return VAR_1;
    }
    case 128: {
      *(char**)VAR_7 = FUNC_5("%s", VAR_8->pVfs->zName);
      return VAR_1;
    }
    case 129: {
      char *VAR_10 = FUNC_4( VAR_8->pVfs->mxPathname );
      if( VAR_10 ){
        FUNC_6(VAR_8->pVfs->mxPathname, VAR_10);
        *(char**)VAR_7 = VAR_10;
      }
      return VAR_1;
    }
    case 137: {
      *(int*)VAR_7 = FUNC_2(VAR_8);
      return VAR_1;
    }
  }
  return VAR_0;
}
