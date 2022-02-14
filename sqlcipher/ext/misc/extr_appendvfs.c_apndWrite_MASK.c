
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_12__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_13__ {scalar_t__ iPgOne; scalar_t__ iMark; } ;
struct TYPE_11__ {int (* xWrite ) (TYPE_2__*,void const*,int,scalar_t__) ;int (* xFileSize ) (TYPE_2__*,scalar_t__*) ;} ;
typedef TYPE_3__ ApndFile ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,void const*,int,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_file *VAR_4,
  const void *VAR_5,
  int VAR_6,
  sqlite_int64 VAR_7
){
  int VAR_8;
  ApndFile *VAR_9 = (ApndFile *)VAR_4;
  VAR_4 = FUNC_0(VAR_4);
  if( VAR_7+VAR_6>=VAR_1 ) return VAR_2;
  VAR_8 = VAR_4->pMethods->xWrite(VAR_4, VAR_5, VAR_6, VAR_7+VAR_9->iPgOne);
  if( VAR_8==VAR_3 && VAR_7 + VAR_6 + VAR_9->iPgOne > VAR_9->iMark ){
    sqlite3_int64 VAR_10 = 0;
    VAR_8 = VAR_4->pMethods->xFileSize(VAR_4, &VAR_10);
    if( VAR_8==VAR_3 ){
      VAR_9->iMark = VAR_10 - VAR_0;
      if( VAR_7 + VAR_6 + VAR_9->iPgOne > VAR_9->iMark ){
        VAR_9->iMark = VAR_9->iPgOne + VAR_7 + VAR_6;
        VAR_8 = FUNC_1(VAR_9, VAR_4);
      }
    }
  }
  return VAR_8;
}
