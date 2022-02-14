
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_api_routines ;
typedef int sqlite3 ;
struct TYPE_3__ {int szOsFile; int pAppData; } ;
typedef int MemFile ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *,char**,int const*) ;
 int FUNC_2 (void (*) ()) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int) ;

int FUNC_5(
  sqlite3 *VAR_3,
  char **VAR_4,
  const sqlite3_api_routines *VAR_5
){
  int VAR_6 = VAR_0;
  FUNC_0(VAR_5);
  VAR_2.pAppData = FUNC_3(0);
  VAR_2.szOsFile = sizeof(MemFile);
  VAR_6 = FUNC_4(&VAR_2, 1);
  if( VAR_6==VAR_0 ) VAR_6 = VAR_1;
  return VAR_6;
}
