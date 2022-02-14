
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ sqlite_int64 ;
struct TYPE_8__ {scalar_t__ eStage; scalar_t__ iOalSz; } ;
typedef TYPE_2__ sqlite3rbu ;
typedef int sqlite3_file ;
struct TYPE_9__ {int openFlags; scalar_t__ sz; int iWriteVer; int iCookie; TYPE_4__* pReal; TYPE_2__* pRbu; } ;
typedef TYPE_3__ rbu_file ;
typedef scalar_t__ i64 ;
struct TYPE_10__ {TYPE_1__* pMethods; } ;
struct TYPE_7__ {int (* xWrite ) (TYPE_4__*,void const*,int,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,void const*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(
  sqlite3_file *VAR_6,
  const void *VAR_7,
  int VAR_8,
  sqlite_int64 VAR_9
){
  rbu_file *VAR_10 = (rbu_file*)VAR_6;
  sqlite3rbu *VAR_11 = VAR_10->pRbu;
  int VAR_12;

  if( VAR_11 && VAR_11->eStage==VAR_0 ){
    FUNC_0( VAR_10->openFlags & VAR_4 );
    VAR_12 = FUNC_1(VAR_10->pRbu, VAR_9);
  }else{
    if( VAR_11 ){
      if( VAR_11->eStage==VAR_1
       && (VAR_10->openFlags & VAR_5)
       && VAR_9>=VAR_11->iOalSz
      ){
        VAR_11->iOalSz = VAR_8 + VAR_9;
      }else if( VAR_10->openFlags & VAR_3 ){
        i64 VAR_13 = VAR_8+VAR_9;
        if( VAR_13>VAR_10->sz ){
          VAR_12 = FUNC_3(VAR_10, VAR_13);
          if( VAR_12!=VAR_2 ) return VAR_12;
        }
      }
    }
    VAR_12 = VAR_10->pReal->pMethods->xWrite(VAR_10->pReal, VAR_7, VAR_8, VAR_9);
    if( VAR_12==VAR_2 && VAR_9==0 && (VAR_10->openFlags & VAR_4) ){


      u8 *VAR_14 = (u8*)VAR_7;
      VAR_10->iCookie = FUNC_2(&VAR_14[24]);
      VAR_10->iWriteVer = VAR_14[19];
    }
  }
  return VAR_12;
}
