
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zStr ;
typedef int sqlite_int64 ;
typedef scalar_t__ sqlite3_uint64 ;
typedef int sqlite3_file ;
struct TYPE_6__ {TYPE_3__* pLog; TYPE_4__* pReal; } ;
typedef TYPE_2__ VLogFile ;
struct TYPE_8__ {TYPE_1__* pMethods; } ;
struct TYPE_7__ {scalar_t__ zFilename; } ;
struct TYPE_5__ {int (* xRead ) (TYPE_4__*,void*,int,int) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int,char*,char*,unsigned int) ;
 int FUNC_2 (TYPE_4__*,void*,int,int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__,char*,unsigned int,unsigned int,char*,int) ;
 int FUNC_4 (void*,int,char*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(
  sqlite3_file *VAR_1,
  void *VAR_2,
  int VAR_3,
  sqlite_int64 VAR_4
){
  int VAR_5;
  sqlite3_uint64 VAR_6, VAR_7;
  VLogFile *VAR_8 = (VLogFile *)VAR_1;
  char VAR_9[40];

  VAR_6 = FUNC_5();
  VAR_5 = VAR_8->pReal->pMethods->xRead(VAR_8->pReal, VAR_2, VAR_3, VAR_4);
  VAR_7 = FUNC_5() - VAR_6;
  if( VAR_5==VAR_0 ){
    FUNC_4(VAR_2, VAR_3, VAR_9);
  }else{
    VAR_9[0] = 0;
  }
  FUNC_3(VAR_8->pLog, VAR_6, VAR_7, "READ", VAR_3, VAR_4, VAR_9, VAR_5);
  if( VAR_5==VAR_0
   && VAR_8->pLog
   && VAR_8->pLog->zFilename
   && VAR_4<=24
   && VAR_4+VAR_3>=28
  ){
    unsigned char *VAR_10 = ((unsigned char*)VAR_2)+(24-VAR_4);
    unsigned VAR_11, VAR_12 = -1;
    char *VAR_13 = 0;
    char VAR_14[12];
    VAR_11 = FUNC_0(VAR_10);
    if( VAR_4+VAR_3>=40 ){
      VAR_13 = VAR_14;
      FUNC_1(sizeof(VAR_14), VAR_14, "%d", FUNC_0(VAR_10+8));
      VAR_12 = FUNC_0(VAR_10+12);
    }
    FUNC_3(VAR_8->pLog, VAR_6, 0, "CHNGCTR-READ", VAR_11, VAR_12, VAR_13, 0);
  }
  return VAR_5;
}
