
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_5__ {int pLog; TYPE_3__* pReal; } ;
typedef TYPE_2__ VLogFile ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xFileControl ) (TYPE_3__*,int,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_3__*,int,void*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,char*,int,int,char const*,int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int FUNC_4(sqlite3_file *VAR_5, int VAR_6, void *VAR_7){
  VLogFile *VAR_8 = (VLogFile *)VAR_5;
  sqlite3_uint64 VAR_9, VAR_10;
  int VAR_11;
  VAR_9 = FUNC_3();
  VAR_11 = VAR_8->pReal->pMethods->xFileControl(VAR_8->pReal, VAR_6, VAR_7);
  if( VAR_6==VAR_3 && VAR_11==VAR_4 ){
    *(char**)VAR_7 = FUNC_0("vlog/%z", *(char**)VAR_7);
  }
  VAR_10 = FUNC_3() - VAR_9;
  if( VAR_6==VAR_2 ){
    FUNC_2(VAR_8->pLog, VAR_9, VAR_10, "TRACE", VAR_6, -1, VAR_7, VAR_11);
  }else if( VAR_6==VAR_0 ){
    const char **VAR_12 = (const char **)VAR_7;
    FUNC_2(VAR_8->pLog, VAR_9, VAR_10, "FILECONTROL", VAR_6, -1, VAR_12[1], VAR_11);
  }else if( VAR_6==VAR_1 ){
    sqlite3_int64 VAR_13 = *(sqlite3_int64*)VAR_7;
    FUNC_2(VAR_8->pLog, VAR_9, VAR_10, "FILECONTROL", VAR_6, VAR_13, 0, VAR_11);
  }else{
    FUNC_2(VAR_8->pLog, VAR_9, VAR_10, "FILECONTROL", VAR_6, -1, 0, VAR_11);
  }
  return VAR_11;
}
