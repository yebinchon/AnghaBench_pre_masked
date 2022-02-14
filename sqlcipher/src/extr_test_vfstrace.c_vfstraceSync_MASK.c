
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zBuf ;
struct TYPE_7__ {int zVfsName; } ;
typedef TYPE_2__ vfstrace_info ;
struct TYPE_8__ {TYPE_5__* pReal; int zFName; TYPE_2__* pInfo; } ;
typedef TYPE_3__ vfstrace_file ;
typedef int sqlite3_file ;
struct TYPE_9__ {TYPE_1__* pMethods; } ;
struct TYPE_6__ {int (* xSync ) (TYPE_5__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,char*,char*,int) ;
 int FUNC_2 (char*,int*,char*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_2__*,char*,int,...) ;

__attribute__((used)) static int FUNC_5(sqlite3_file *VAR_3, int VAR_4){
  vfstrace_file *VAR_5 = (vfstrace_file *)VAR_3;
  vfstrace_info *VAR_6 = VAR_5->pInfo;
  int VAR_7;
  int VAR_8;
  char VAR_9[100];
  FUNC_0(VAR_9, "|0", 3);
  VAR_8 = 0;
  if( VAR_4 & VAR_1 ) FUNC_2(VAR_9, &VAR_8, "|FULL");
  else if( VAR_4 & VAR_2 ) FUNC_2(VAR_9, &VAR_8, "|NORMAL");
  if( VAR_4 & VAR_0 ) FUNC_2(VAR_9, &VAR_8, "|DATAONLY");
  if( VAR_4 & ~(VAR_1|VAR_0) ){
    FUNC_1(sizeof(VAR_9)-VAR_8, &VAR_9[VAR_8], "|0x%x", VAR_4);
  }
  FUNC_4(VAR_6, "%s.xSync(%s,%s)", VAR_6->zVfsName, VAR_5->zFName,
                  &VAR_9[1]);
  VAR_7 = VAR_5->pReal->pMethods->xSync(VAR_5->pReal, VAR_4);
  FUNC_4(VAR_6, " -> %d\n", VAR_7);
  return VAR_7;
}
