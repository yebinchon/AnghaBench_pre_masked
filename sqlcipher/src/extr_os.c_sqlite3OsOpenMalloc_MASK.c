
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int szOsFile; } ;
typedef TYPE_1__ sqlite3_vfs ;
typedef int sqlite3_file ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char const*,int *,int,int*) ;
 int FUNC_2 (int *) ;

int FUNC_3(
  sqlite3_vfs *VAR_2,
  const char *VAR_3,
  sqlite3_file **VAR_4,
  int VAR_5,
  int *VAR_6
){
  int VAR_7;
  sqlite3_file *VAR_8;
  VAR_8 = (sqlite3_file *)FUNC_0(VAR_2->szOsFile);
  if( VAR_8 ){
    VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_8, VAR_5, VAR_6);
    if( VAR_7!=VAR_1 ){
      FUNC_2(VAR_8);
    }else{
      *VAR_4 = VAR_8;
    }
  }else{
    VAR_7 = VAR_0;
  }
  return VAR_7;
}
