
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int * pMethods; } ;
struct TYPE_24__ {char const* zName; int nBlob; unsigned char nDatabase; int nJournal; TYPE_6__* pFile; int nRef; struct TYPE_24__** ppThis; struct TYPE_24__* pNext; TYPE_1__ base; } ;
typedef TYPE_4__ tmp_file ;
struct TYPE_25__ {int szOsFile; int (* xOpen ) (TYPE_5__*,char const*,TYPE_6__*,int,int*) ;} ;
typedef TYPE_5__ sqlite3_vfs ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_26__ {TYPE_3__* pMethods; } ;
typedef TYPE_6__ sqlite3_file ;
struct TYPE_27__ {TYPE_4__* pFileList; TYPE_5__* pParent; } ;
typedef TYPE_7__ fs_vfs_t ;
typedef TYPE_4__ fs_real_file ;
struct TYPE_22__ {int * pMethods; } ;
struct TYPE_28__ {int eType; TYPE_4__* pReal; TYPE_2__ base; } ;
typedef TYPE_9__ fs_file ;
struct TYPE_23__ {int (* xFileSize ) (TYPE_6__*,scalar_t__*) ;int (* xWrite ) (TYPE_6__*,char*,int,int) ;int (* xRead ) (TYPE_6__*,unsigned char*,int,int) ;int (* xClose ) (TYPE_6__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;
 int FUNC_6 (TYPE_5__*,char const*,TYPE_6__*,int,int*) ;
 int FUNC_7 (TYPE_6__*,scalar_t__*) ;
 int FUNC_8 (TYPE_6__*,char*,int,int) ;
 int FUNC_9 (TYPE_6__*,unsigned char*,int,int) ;
 int FUNC_10 (TYPE_6__*,unsigned char*,int,int) ;
 int FUNC_11 (TYPE_6__*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_12(
  sqlite3_vfs *VAR_10,
  const char *VAR_11,
  sqlite3_file *VAR_12,
  int VAR_13,
  int *VAR_14
){
  fs_vfs_t *VAR_15 = (fs_vfs_t *)VAR_10;
  fs_file *VAR_16 = (fs_file *)VAR_12;
  fs_real_file *VAR_17 = 0;
  int VAR_18;
  int VAR_19;
  int VAR_20 = VAR_4;

  if( 0==(VAR_13&(VAR_5|VAR_6)) ){
    tmp_file *VAR_21 = (tmp_file *)VAR_12;
    FUNC_1(VAR_21, 0, sizeof(*VAR_21));
    VAR_21->base.pMethods = &VAR_9;
    return VAR_4;
  }

  VAR_18 = ((VAR_13&(VAR_5))?VAR_1:VAR_2);
  VAR_16->base.pMethods = &VAR_8;
  VAR_16->eType = VAR_18;

  FUNC_0(FUNC_4("-journal")==8);
  VAR_19 = (int)FUNC_4(VAR_11)-((VAR_18==VAR_2)?8:0);
  VAR_17=VAR_15->pFileList;
  for(; VAR_17 && FUNC_5(VAR_17->zName, VAR_11, VAR_19); VAR_17=VAR_17->pNext);

  if( !VAR_17 ){
    int VAR_22 = (VAR_13&~(VAR_5))|VAR_7;
    sqlite3_int64 VAR_23;
    sqlite3_file *VAR_24;
    sqlite3_vfs *VAR_25 = VAR_15->pParent;
    FUNC_0(VAR_18==VAR_1);

    VAR_17 = (fs_real_file *)FUNC_3(sizeof(*VAR_17)+VAR_25->szOsFile);
    if( !VAR_17 ){
      VAR_20 = VAR_3;
      goto open_out;
    }
    FUNC_1(VAR_17, 0, sizeof(*VAR_17)+VAR_25->szOsFile);
    VAR_17->zName = VAR_11;
    VAR_17->pFile = (sqlite3_file *)(&VAR_17[1]);

    VAR_20 = VAR_25->xOpen(VAR_25, VAR_11, VAR_17->pFile, VAR_22, VAR_14);
    if( VAR_20!=VAR_4 ){
      goto open_out;
    }
    VAR_24 = VAR_17->pFile;

    VAR_20 = VAR_24->pMethods->xFileSize(VAR_24, &VAR_23);
    if( VAR_20!=VAR_4 ){
      goto open_out;
    }
    if( VAR_23==0 ){
      VAR_20 = VAR_24->pMethods->xWrite(VAR_24, "\0", 1, VAR_0-1);
      VAR_17->nBlob = VAR_0;
    }else{
      unsigned char VAR_26[4];
      VAR_17->nBlob = (int)VAR_23;
      VAR_20 = VAR_24->pMethods->xRead(VAR_24, VAR_26, 4, 0);
      VAR_17->nDatabase = (VAR_26[0]<<24)+(VAR_26[1]<<16)+(VAR_26[2]<<8)+VAR_26[3];
      if( VAR_20==VAR_4 ){
        VAR_20 = VAR_24->pMethods->xRead(VAR_24, VAR_26, 4, VAR_17->nBlob-4);
        if( VAR_26[0] || VAR_26[1] || VAR_26[2] || VAR_26[3] ){
          VAR_17->nJournal = VAR_17->nBlob;
        }
      }
    }

    if( VAR_20==VAR_4 ){
      VAR_17->pNext = VAR_15->pFileList;
      if( VAR_17->pNext ){
        VAR_17->pNext->ppThis = &VAR_17->pNext;
      }
      VAR_17->ppThis = &VAR_15->pFileList;
      VAR_15->pFileList = VAR_17;
    }
  }

open_out:
  if( VAR_17 ){
    if( VAR_20==VAR_4 ){
      VAR_16->pReal = VAR_17;
      VAR_17->nRef++;
    }else{
      if( VAR_17->pFile->pMethods ){
        VAR_17->pFile->pMethods->xClose(VAR_17->pFile);
      }
      FUNC_2(VAR_17);
    }
  }
  return VAR_20;
}
