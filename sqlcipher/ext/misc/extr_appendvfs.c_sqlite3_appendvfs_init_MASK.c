
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ szOsFile; int iVersion; } ;
typedef TYPE_1__ sqlite3_vfs ;
typedef int sqlite3_api_routines ;
typedef int sqlite3 ;
struct TYPE_6__ {scalar_t__ szOsFile; TYPE_1__* pAppData; int iVersion; } ;
typedef int ApndFile ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void (*) ()) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

int FUNC_4(
  sqlite3 *VAR_4,
  char **VAR_5,
  const sqlite3_api_routines *VAR_6
){
  int VAR_7 = VAR_0;
  sqlite3_vfs *VAR_8;
  FUNC_0(VAR_6);
  (void)VAR_5;
  (void)VAR_4;
  VAR_8 = FUNC_2(0);
  VAR_2.iVersion = VAR_8->iVersion;
  VAR_2.pAppData = VAR_8;
  VAR_2.szOsFile = VAR_8->szOsFile + sizeof(ApndFile);
  VAR_7 = FUNC_3(&VAR_2, 0);





  if( VAR_7==VAR_0 ) VAR_7 = VAR_1;
  return VAR_7;
}
