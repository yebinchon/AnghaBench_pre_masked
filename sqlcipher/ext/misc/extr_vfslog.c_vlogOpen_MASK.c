
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_int64 ;
struct TYPE_7__ {int * pMethods; } ;
typedef TYPE_1__ sqlite3_file ;
struct TYPE_8__ {scalar_t__ pLog; TYPE_1__* pReal; } ;
typedef TYPE_2__ VLogFile ;
struct TYPE_9__ {int (* xOpen ) (TYPE_4__*,char const*,TYPE_1__*,int,int*) ;} ;


 TYPE_4__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,char const*,TYPE_1__*,int,int*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,char*,int,int,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(
  sqlite3_vfs *VAR_4,
  const char *VAR_5,
  sqlite3_file *VAR_6,
  int VAR_7,
  int *VAR_8
){
  int VAR_9;
  sqlite3_uint64 VAR_10, VAR_11;
  sqlite3_int64 VAR_12;
  VLogFile *VAR_13 = (VLogFile*)VAR_6;

  VAR_13->pReal = (sqlite3_file*)&VAR_13[1];
  if( (VAR_7 & (VAR_1|VAR_2))!=0 ){
    VAR_13->pLog = FUNC_3(VAR_5);
  }else{
    VAR_13->pLog = 0;
  }
  VAR_10 = FUNC_5();
  VAR_9 = FUNC_0(VAR_4)->xOpen(FUNC_0(VAR_4), VAR_5, VAR_13->pReal, VAR_7, VAR_8);
  VAR_11 = FUNC_5() - VAR_10;
  VAR_12 = VAR_8 ? *VAR_8 : -1;
  FUNC_4(VAR_13->pLog, VAR_10, VAR_11, "OPEN", VAR_7, VAR_12, 0, VAR_9);
  if( VAR_9==VAR_0 ){
    VAR_6->pMethods = &VAR_3;
  }else{
    if( VAR_13->pLog ) FUNC_2(VAR_13->pLog);
    VAR_13->pLog = 0;
  }
  return VAR_9;
}
