
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
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_5){
  static sqlite3_vfs VAR_6;
  sqlite3_vfs *VAR_7 = FUNC_0(0);
  VAR_6.iVersion = 3;
  VAR_6.szOsFile = sizeof(VHandle);
  VAR_6.mxPathname = 200;
  VAR_6.zName = "inmem";
  VAR_6.xOpen = VAR_3;
  VAR_6.xDelete = VAR_1;
  VAR_6.xAccess = VAR_0;
  VAR_6.xFullPathname = VAR_2;
  VAR_6.xRandomness = VAR_4;
  VAR_6.xSleep = VAR_7->xSleep;
  VAR_6.xCurrentTimeInt64 = VAR_7->xCurrentTimeInt64;
  FUNC_1(&VAR_6, VAR_5);
}
