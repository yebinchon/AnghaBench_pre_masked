
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int zVfsName; } ;
typedef TYPE_2__ vfstrace_info ;
struct TYPE_9__ {TYPE_6__* pReal; int zFName; TYPE_2__* pInfo; } ;
typedef TYPE_3__ vfstrace_file ;
typedef int sqlite3_file ;
struct TYPE_10__ {TYPE_1__* pMethods; } ;
struct TYPE_7__ {int (* xShmMap ) (TYPE_6__*,int,int,int,void volatile**) ;} ;


 int FUNC_0 (TYPE_6__*,int,int,int,void volatile**) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_file *VAR_0,
  int VAR_1,
  int VAR_2,
  int VAR_3,
  void volatile **VAR_4
){
  vfstrace_file *VAR_5 = (vfstrace_file *)VAR_0;
  vfstrace_info *VAR_6 = VAR_5->pInfo;
  int VAR_7;
  FUNC_2(VAR_6, "%s.xShmMap(%s,iRegion=%d,szRegion=%d,isWrite=%d,*)",
                  VAR_6->zVfsName, VAR_5->zFName, VAR_1, VAR_2, VAR_3);
  VAR_7 = VAR_5->pReal->pMethods->xShmMap(VAR_5->pReal, VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_1(VAR_6, " -> %s\n", VAR_7);
  return VAR_7;
}
