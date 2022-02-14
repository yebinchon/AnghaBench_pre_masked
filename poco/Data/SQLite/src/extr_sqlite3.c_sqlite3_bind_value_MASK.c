
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nZero; int r; int i; } ;
struct TYPE_6__ {int flags; int enc; int n; int z; TYPE_1__ u; } ;
typedef TYPE_2__ sqlite3_value ;
typedef int sqlite3_stmt ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int,int ,int ,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (TYPE_2__*) ;

int FUNC_7(sqlite3_stmt *VAR_2, int VAR_3, const sqlite3_value *VAR_4){
  int VAR_5;
  switch( FUNC_6((sqlite3_value*)VAR_4) ){
    case 129: {
      VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4->u.i);
      break;
    }
    case 130: {
      VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4->u.r);
      break;
    }
    case 131: {
      if( VAR_4->flags & VAR_0 ){
        VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4->u.nZero);
      }else{
        VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4->z, VAR_4->n,VAR_1);
      }
      break;
    }
    case 128: {
      VAR_5 = FUNC_0(VAR_2,VAR_3, VAR_4->z, VAR_4->n, VAR_1,
                              VAR_4->enc);
      break;
    }
    default: {
      VAR_5 = FUNC_4(VAR_2, VAR_3);
      break;
    }
  }
  return VAR_5;
}
