
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_2__ {size_t eOp; scalar_t__ nDelta; scalar_t__ aDelta; scalar_t__ a1; scalar_t__ a2; } ;
typedef TYPE_1__ deltaparsevtab_cursor ;






 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vtab_cursor *VAR_6,
  sqlite3_context *VAR_7,
  int VAR_8
){
  deltaparsevtab_cursor *VAR_9 = (deltaparsevtab_cursor*)VAR_6;
  switch( VAR_8 ){
    case 128: {
      FUNC_2(VAR_7, VAR_5[VAR_9->eOp], -1, VAR_3);
      break;
    }
    case 131: {
      FUNC_1(VAR_7, VAR_9->a1);
      break;
    }
    case 130: {
      if( VAR_9->eOp==VAR_0 ){
        FUNC_1(VAR_7, VAR_9->a2);
      }else if( VAR_9->eOp==VAR_1 ){
        FUNC_0(VAR_7, VAR_9->aDelta+VAR_9->a2, VAR_9->a1,
                            VAR_4);
      }
      break;
    }
    case 129: {
      FUNC_0(VAR_7, VAR_9->aDelta, VAR_9->nDelta, VAR_4);
      break;
    }
  }
  return VAR_2;
}
