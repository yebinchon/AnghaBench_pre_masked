
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_11__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_12__ {int szChunk; int bEnabled; } ;
typedef TYPE_3__ multiplexGroup ;
struct TYPE_13__ {TYPE_3__* pGroup; } ;
typedef TYPE_4__ multiplexConn ;
struct TYPE_10__ {int (* xRead ) (TYPE_2__*,void*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int,int*,int *,int) ;
 int FUNC_1 (TYPE_2__*,void*,int,int) ;
 int FUNC_2 (TYPE_2__*,void*,int,int) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_file *VAR_2,
  void *VAR_3,
  int VAR_4,
  sqlite3_int64 VAR_5
){
  multiplexConn *VAR_6 = (multiplexConn*)VAR_2;
  multiplexGroup *VAR_7 = VAR_6->pGroup;
  int VAR_8 = VAR_1;
  if( !VAR_7->bEnabled ){
    sqlite3_file *VAR_9 = FUNC_0(VAR_7, 0, &VAR_8, ((void*)0), 0);
    if( VAR_9==0 ){
      VAR_8 = VAR_0;
    }else{
      VAR_8 = VAR_9->pMethods->xRead(VAR_9, VAR_3, VAR_4, VAR_5);
    }
  }else{
    while( VAR_4 > 0 ){
      int VAR_10 = (int)(VAR_5 / VAR_7->szChunk);
      sqlite3_file *VAR_11;
      VAR_11 = FUNC_0(VAR_7, VAR_10, &VAR_8, ((void*)0), 1);
      if( VAR_11 ){
        int VAR_12 = ((int)(VAR_5 % VAR_7->szChunk) + VAR_4) - VAR_7->szChunk;
        if( VAR_12<0 ) VAR_12 = 0;
        VAR_4 -= VAR_12;
        VAR_8 = VAR_11->pMethods->xRead(VAR_11, VAR_3, VAR_4,
                                       VAR_5 % VAR_7->szChunk);
        if( VAR_8!=VAR_1 ) break;
        VAR_3 = (char *)VAR_3 + VAR_4;
        VAR_5 += VAR_4;
        VAR_4 = VAR_12;
      }else{
        VAR_8 = VAR_0;
        break;
      }
    }
  }

  return VAR_8;
}
