
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iVersion; int szOsFile; int mxPathname; char* zName; int xCurrentTimeInt64; int xSleep; int xRandomness; int xFullPathname; int xAccess; int xDelete; int xOpen; } ;
typedef TYPE_1__ sqlite3_vfs ;
typedef int VHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(void){
  static sqlite3_vfs VAR_4;
  sqlite3_vfs *VAR_5 = FUNC_0(0);
  VAR_4.iVersion = 3;
  VAR_4.szOsFile = sizeof(VHandle);
  VAR_4.mxPathname = 200;
  VAR_4.zName = "inmem";
  VAR_4.xOpen = VAR_3;
  VAR_4.xDelete = VAR_1;
  VAR_4.xAccess = VAR_0;
  VAR_4.xFullPathname = VAR_2;
  VAR_4.xRandomness = VAR_5->xRandomness;
  VAR_4.xSleep = VAR_5->xSleep;
  VAR_4.xCurrentTimeInt64 = VAR_5->xCurrentTimeInt64;
  FUNC_1(&VAR_4, 0);
}
