
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int sqlite3_vfs ;
typedef int sqlite3_int64 ;
struct TYPE_15__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_16__ {int szChunk; int nReal; scalar_t__ bTruncate; int bEnabled; } ;
typedef TYPE_3__ multiplexGroup ;
struct TYPE_17__ {TYPE_3__* pGroup; } ;
typedef TYPE_4__ multiplexConn ;
struct TYPE_14__ {int (* xTruncate ) (TYPE_2__*,int) ;} ;
struct TYPE_13__ {int * pOrigVfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_12__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int,int *) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int,int*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(sqlite3_file *VAR_3, sqlite3_int64 VAR_4){
  multiplexConn *VAR_5 = (multiplexConn*)VAR_3;
  multiplexGroup *VAR_6 = VAR_5->pGroup;
  int VAR_7 = VAR_1;
  if( !VAR_6->bEnabled ){
    sqlite3_file *VAR_8 = FUNC_1(VAR_6, 0, &VAR_7, ((void*)0), 0);
    if( VAR_8==0 ){
      VAR_7 = VAR_0;
    }else{
      VAR_7 = VAR_8->pMethods->xTruncate(VAR_8, VAR_4);
    }
  }else{
    int VAR_9;
    int VAR_10 = (int)(VAR_4 / VAR_6->szChunk);
    sqlite3_file *VAR_11;
    sqlite3_vfs *VAR_12 = VAR_2.pOrigVfs;

    for(VAR_9 = VAR_6->nReal-1; VAR_9>VAR_10 && VAR_7==VAR_1; VAR_9--){
      if( VAR_6->bTruncate ){
        FUNC_0(VAR_6, VAR_9, VAR_12);
      }else{
        VAR_11 = FUNC_1(VAR_6, VAR_9, &VAR_7, 0, 0);
        if( VAR_11 ){
          VAR_7 = VAR_11->pMethods->xTruncate(VAR_11, 0);
        }
      }
    }
    if( VAR_7==VAR_1 ){
      VAR_11 = FUNC_1(VAR_6, VAR_10, &VAR_7, 0, 0);
      if( VAR_11 ){
        VAR_7 = VAR_11->pMethods->xTruncate(VAR_11, VAR_4 % VAR_6->szChunk);
      }
    }
    if( VAR_7 ) VAR_7 = VAR_0;
  }
  return VAR_7;
}
