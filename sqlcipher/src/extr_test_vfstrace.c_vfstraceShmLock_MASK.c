
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zLck ;
struct TYPE_8__ {int zVfsName; } ;
typedef TYPE_2__ vfstrace_info ;
struct TYPE_9__ {TYPE_6__* pReal; int zFName; TYPE_2__* pInfo; } ;
typedef TYPE_3__ vfstrace_file ;
typedef int sqlite3_file ;
struct TYPE_10__ {TYPE_1__* pMethods; } ;
struct TYPE_7__ {int (* xShmLock ) (TYPE_6__*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,char*,char*,int) ;
 int FUNC_2 (char*,int*,char*) ;
 int FUNC_3 (TYPE_6__*,int,int,int) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_2__*,char*,int ,int ,int,int,char*) ;

__attribute__((used)) static int FUNC_6(sqlite3_file *VAR_4, int VAR_5, int VAR_6, int VAR_7){
  vfstrace_file *VAR_8 = (vfstrace_file *)VAR_4;
  vfstrace_info *VAR_9 = VAR_8->pInfo;
  int VAR_10;
  char VAR_11[100];
  int VAR_12 = 0;
  FUNC_0(VAR_11, "|0", 3);
  if( VAR_7 & VAR_3 ) FUNC_2(VAR_11, &VAR_12, "|UNLOCK");
  if( VAR_7 & VAR_1 ) FUNC_2(VAR_11, &VAR_12, "|LOCK");
  if( VAR_7 & VAR_2 ) FUNC_2(VAR_11, &VAR_12, "|SHARED");
  if( VAR_7 & VAR_0 ) FUNC_2(VAR_11, &VAR_12, "|EXCLUSIVE");
  if( VAR_7 & ~(0xf) ){
     FUNC_1(sizeof(VAR_11)-VAR_12, &VAR_11[VAR_12], "|0x%x", VAR_7);
  }
  FUNC_5(VAR_9, "%s.xShmLock(%s,ofst=%d,n=%d,%s)",
                  VAR_9->zVfsName, VAR_8->zFName, VAR_5, VAR_6, &VAR_11[1]);
  VAR_10 = VAR_8->pReal->pMethods->xShmLock(VAR_8->pReal, VAR_5, VAR_6, VAR_7);
  FUNC_4(VAR_9, " -> %s\n", VAR_10);
  return VAR_10;
}
