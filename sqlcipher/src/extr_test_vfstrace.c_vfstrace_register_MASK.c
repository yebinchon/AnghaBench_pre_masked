
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* xOut ) (char const*,void*) ;char* zVfsName; TYPE_2__* pTraceVfs; void* pOutArg; TYPE_2__* pRootVfs; } ;
typedef TYPE_1__ vfstrace_info ;
typedef int vfstrace_file ;
struct TYPE_9__ {int iVersion; char* zName; scalar_t__ xDlOpen; scalar_t__ xDlError; scalar_t__ xDlSym; scalar_t__ xDlClose; scalar_t__ xGetLastError; scalar_t__ xCurrentTimeInt64; scalar_t__ xSetSystemCall; scalar_t__ xGetSystemCall; scalar_t__ xNextSystemCall; int xCurrentTime; int xSleep; int xRandomness; int xFullPathname; int xAccess; int xDelete; int xOpen; TYPE_1__* pAppData; int mxPathname; scalar_t__ szOsFile; } ;
typedef TYPE_2__ sqlite3_vfs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (TYPE_1__*,char*,char*,char*) ;

int FUNC_7(
   const char *VAR_18,
   const char *VAR_19,
   int (*VAR_20)(const char*,void*),
   void *VAR_21,
   int VAR_22
){
  sqlite3_vfs *VAR_23;
  sqlite3_vfs *VAR_24;
  vfstrace_info *VAR_25;
  int VAR_26;
  int VAR_27;

  VAR_24 = FUNC_3(VAR_19);
  if( VAR_24==0 ) return VAR_1;
  VAR_26 = FUNC_5(VAR_18);
  VAR_27 = sizeof(*VAR_23) + sizeof(*VAR_25) + VAR_26 + 1;
  VAR_23 = FUNC_2( VAR_27 );
  if( VAR_23==0 ) return VAR_0;
  FUNC_1(VAR_23, 0, VAR_27);
  VAR_25 = (vfstrace_info*)&VAR_23[1];
  VAR_23->iVersion = VAR_24->iVersion;
  VAR_23->szOsFile = VAR_24->szOsFile + sizeof(vfstrace_file);
  VAR_23->mxPathname = VAR_24->mxPathname;
  VAR_23->zName = (char*)&VAR_25[1];
  FUNC_0((char*)&VAR_25[1], VAR_18, VAR_26+1);
  VAR_23->pAppData = VAR_25;
  VAR_23->xOpen = VAR_14;
  VAR_23->xDelete = VAR_5;
  VAR_23->xAccess = VAR_2;
  VAR_23->xFullPathname = VAR_10;
  VAR_23->xDlOpen = VAR_24->xDlOpen==0 ? 0 : VAR_8;
  VAR_23->xDlError = VAR_24->xDlError==0 ? 0 : VAR_7;
  VAR_23->xDlSym = VAR_24->xDlSym==0 ? 0 : VAR_9;
  VAR_23->xDlClose = VAR_24->xDlClose==0 ? 0 : VAR_6;
  VAR_23->xRandomness = VAR_15;
  VAR_23->xSleep = VAR_17;
  VAR_23->xCurrentTime = VAR_3;
  VAR_23->xGetLastError = VAR_24->xGetLastError==0 ? 0 : VAR_11;
  if( VAR_23->iVersion>=2 ){
    VAR_23->xCurrentTimeInt64 = VAR_24->xCurrentTimeInt64==0 ? 0 :
                                   VAR_4;
    if( VAR_23->iVersion>=3 ){
      VAR_23->xSetSystemCall = VAR_24->xSetSystemCall==0 ? 0 :
                                   VAR_16;
      VAR_23->xGetSystemCall = VAR_24->xGetSystemCall==0 ? 0 :
                                   VAR_12;
      VAR_23->xNextSystemCall = VAR_24->xNextSystemCall==0 ? 0 :
                                   VAR_13;
    }
  }
  VAR_25->pRootVfs = VAR_24;
  VAR_25->xOut = VAR_20;
  VAR_25->pOutArg = VAR_21;
  VAR_25->zVfsName = VAR_23->zName;
  VAR_25->pTraceVfs = VAR_23;
  FUNC_6(VAR_25, "%s.enabled_for(\"%s\")\n",
       VAR_25->zVfsName, VAR_24->zName);
  return FUNC_4(VAR_23, VAR_22);
}
