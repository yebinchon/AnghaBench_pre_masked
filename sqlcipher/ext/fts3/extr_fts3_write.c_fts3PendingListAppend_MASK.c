
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_4__ {scalar_t__ iLastDocid; size_t nData; size_t nSpace; scalar_t__* aData; int iLastCol; scalar_t__ iLastPos; } ;
typedef TYPE_1__ PendingList ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__**,scalar_t__) ;

__attribute__((used)) static int FUNC_2(
  PendingList **VAR_1,
  sqlite3_int64 VAR_2,
  sqlite3_int64 VAR_3,
  sqlite3_int64 VAR_4,
  int *VAR_5
){
  PendingList *VAR_6 = *VAR_1;
  int VAR_7 = VAR_0;

  FUNC_0( !VAR_6 || VAR_6->iLastDocid<=VAR_2 );

  if( !VAR_6 || VAR_6->iLastDocid!=VAR_2 ){
    sqlite3_int64 VAR_8 = VAR_2 - (VAR_6 ? VAR_6->iLastDocid : 0);
    if( VAR_6 ){
      FUNC_0( VAR_6->nData<VAR_6->nSpace );
      FUNC_0( VAR_6->aData[VAR_6->nData]==0 );
      VAR_6->nData++;
    }
    if( VAR_0!=(VAR_7 = FUNC_1(&VAR_6, VAR_8)) ){
      goto pendinglistappend_out;
    }
    VAR_6->iLastCol = -1;
    VAR_6->iLastPos = 0;
    VAR_6->iLastDocid = VAR_2;
  }
  if( VAR_3>0 && VAR_6->iLastCol!=VAR_3 ){
    if( VAR_0!=(VAR_7 = FUNC_1(&VAR_6, 1))
     || VAR_0!=(VAR_7 = FUNC_1(&VAR_6, VAR_3))
    ){
      goto pendinglistappend_out;
    }
    VAR_6->iLastCol = VAR_3;
    VAR_6->iLastPos = 0;
  }
  if( VAR_3>=0 ){
    FUNC_0( VAR_4>VAR_6->iLastPos || (VAR_4==0 && VAR_6->iLastPos==0) );
    VAR_7 = FUNC_1(&VAR_6, 2+VAR_4-VAR_6->iLastPos);
    if( VAR_7==VAR_0 ){
      VAR_6->iLastPos = VAR_4;
    }
  }

 pendinglistappend_out:
  *VAR_5 = VAR_7;
  if( VAR_6!=*VAR_1 ){
    *VAR_1 = VAR_6;
    return 1;
  }
  return 0;
}
