
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eFileLock; int lastErrno; scalar_t__ lockingContext; } ;
typedef TYPE_1__ unixFile ;
typedef int sqlite3_file ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,int *) ;

__attribute__((used)) static int FUNC_5(sqlite3_file *VAR_6, int VAR_7) {
  unixFile *VAR_8 = (unixFile*)VAR_6;
  char *VAR_9 = (char *)VAR_8->lockingContext;
  int VAR_10 = VAR_4;





  if( VAR_8->eFileLock > VAR_1 ){
    VAR_8->eFileLock = VAR_7;




    FUNC_4(VAR_9, ((void*)0));

    return VAR_4;
  }


  VAR_10 = FUNC_1(VAR_9, 0777);
  if( VAR_10<0 ){

    int VAR_11 = VAR_5;
    if( VAR_0 == VAR_11 ){
      VAR_10 = VAR_2;
    } else {
      VAR_10 = FUNC_2(VAR_11, VAR_3);
      if( FUNC_0(VAR_10) ){
        VAR_8->lastErrno = VAR_11;
      }
    }
    return VAR_10;
  }


  VAR_8->eFileLock = VAR_7;
  return VAR_10;
}
