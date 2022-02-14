
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int zVfsName; TYPE_3__* pRootVfs; } ;
typedef TYPE_1__ vfstrace_info ;
struct TYPE_15__ {char* zFName; TYPE_5__* pReal; TYPE_1__* pInfo; } ;
typedef TYPE_2__ vfstrace_file ;
struct TYPE_16__ {int (* xOpen ) (TYPE_3__*,char const*,TYPE_5__*,int,int*) ;scalar_t__ pAppData; } ;
typedef TYPE_3__ sqlite3_vfs ;
struct TYPE_17__ {int iVersion; scalar_t__ xShmUnmap; scalar_t__ xShmBarrier; scalar_t__ xShmLock; scalar_t__ xShmMap; int xDeviceCharacteristics; int xSectorSize; int xFileControl; int xCheckReservedLock; int xUnlock; int xLock; int xFileSize; int xSync; int xTruncate; int xWrite; int xRead; int xClose; } ;
typedef TYPE_4__ sqlite3_io_methods ;
struct TYPE_18__ {TYPE_4__* pMethods; } ;
typedef TYPE_5__ sqlite3_file ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,char const*,TYPE_5__*,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;

__attribute__((used)) static int FUNC_6(
  sqlite3_vfs *VAR_16,
  const char *VAR_17,
  sqlite3_file *VAR_18,
  int VAR_19,
  int *VAR_20
){
  int VAR_21;
  vfstrace_file *VAR_22 = (vfstrace_file *)VAR_18;
  vfstrace_info *VAR_23 = (vfstrace_info*)VAR_16->pAppData;
  sqlite3_vfs *VAR_24 = VAR_23->pRootVfs;
  VAR_22->pInfo = VAR_23;
  VAR_22->zFName = VAR_17 ? FUNC_0(VAR_17) : "<temp>";
  VAR_22->pReal = (sqlite3_file *)&VAR_22[1];
  VAR_21 = VAR_24->xOpen(VAR_24, VAR_17, VAR_22->pReal, VAR_19, VAR_20);
  FUNC_5(VAR_23, "%s.xOpen(%s,flags=0x%x)",
                  VAR_23->zVfsName, VAR_22->zFName, VAR_19);
  if( VAR_22->pReal->pMethods ){
    sqlite3_io_methods *VAR_25 = FUNC_2( sizeof(*VAR_25) );
    const sqlite3_io_methods *VAR_26 = VAR_22->pReal->pMethods;
    FUNC_1(VAR_25, 0, sizeof(*VAR_25));
    VAR_25->iVersion = VAR_26->iVersion;
    VAR_25->xClose = VAR_1;
    VAR_25->xRead = VAR_6;
    VAR_25->xWrite = VAR_15;
    VAR_25->xTruncate = VAR_13;
    VAR_25->xSync = VAR_12;
    VAR_25->xFileSize = VAR_4;
    VAR_25->xLock = VAR_5;
    VAR_25->xUnlock = VAR_14;
    VAR_25->xCheckReservedLock = VAR_0;
    VAR_25->xFileControl = VAR_3;
    VAR_25->xSectorSize = VAR_7;
    VAR_25->xDeviceCharacteristics = VAR_2;
    if( VAR_25->iVersion>=2 ){
      VAR_25->xShmMap = VAR_26->xShmMap ? VAR_10 : 0;
      VAR_25->xShmLock = VAR_26->xShmLock ? VAR_9 : 0;
      VAR_25->xShmBarrier = VAR_26->xShmBarrier ? VAR_8 : 0;
      VAR_25->xShmUnmap = VAR_26->xShmUnmap ? VAR_11 : 0;
    }
    VAR_18->pMethods = VAR_25;
  }
  FUNC_4(VAR_23, " -> %s", VAR_21);
  if( VAR_20 ){
    FUNC_5(VAR_23, ", outFlags=0x%x\n", *VAR_20);
  }else{
    FUNC_5(VAR_23, "\n");
  }
  return VAR_21;
}
