
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_11__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_12__ {scalar_t__ szChunk; int bEnabled; } ;
typedef TYPE_3__ multiplexGroup ;
struct TYPE_13__ {TYPE_3__* pGroup; } ;
typedef TYPE_4__ multiplexConn ;
struct TYPE_10__ {int (* xFileSize ) (TYPE_2__*,scalar_t__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int*,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,int*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_2, sqlite3_int64 *VAR_3){
  multiplexConn *VAR_4 = (multiplexConn*)VAR_2;
  multiplexGroup *VAR_5 = VAR_4->pGroup;
  int VAR_6 = VAR_1;
  int VAR_7;
  if( !VAR_5->bEnabled ){
    sqlite3_file *VAR_8 = FUNC_0(VAR_5, 0, &VAR_6, ((void*)0), 0);
    if( VAR_8==0 ){
      VAR_6 = VAR_0;
    }else{
      VAR_6 = VAR_8->pMethods->xFileSize(VAR_8, VAR_3);
    }
  }else{
    *VAR_3 = 0;
    for(VAR_7=0; VAR_6==VAR_1; VAR_7++){
      sqlite3_int64 VAR_9 = FUNC_1(VAR_5, VAR_7, &VAR_6);
      if( VAR_9==0 ) break;
      *VAR_3 = VAR_7*(sqlite3_int64)VAR_5->szChunk + VAR_9;
    }
  }
  return VAR_6;
}
