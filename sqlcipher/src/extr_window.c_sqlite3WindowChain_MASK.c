
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_10__ {scalar_t__ pPartition; scalar_t__ pOrderBy; scalar_t__ bImplicitFrame; scalar_t__ zBase; } ;
typedef TYPE_1__ Window ;
struct TYPE_11__ {int * db; } ;
typedef TYPE_2__ Parse ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,char*,char const*,scalar_t__) ;
 void* FUNC_3 (int *,scalar_t__,int ) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,TYPE_1__*,scalar_t__) ;

void FUNC_5(Parse *VAR_0, Window *VAR_1, Window *VAR_2){
  if( VAR_1->zBase ){
    sqlite3 *VAR_3 = VAR_0->db;
    Window *VAR_4 = FUNC_4(VAR_0, VAR_2, VAR_1->zBase);
    if( VAR_4 ){
      const char *VAR_5 = 0;

      if( VAR_1->pPartition ){
        VAR_5 = "PARTITION clause";
      }else if( VAR_4->pOrderBy && VAR_1->pOrderBy ){
        VAR_5 = "ORDER BY clause";
      }else if( VAR_4->bImplicitFrame==0 ){
        VAR_5 = "frame specification";
      }
      if( VAR_5 ){
        FUNC_2(VAR_0,
            "cannot override %s of window: %s", VAR_5, VAR_1->zBase
        );
      }else{
        VAR_1->pPartition = FUNC_3(VAR_3, VAR_4->pPartition, 0);
        if( VAR_4->pOrderBy ){
          FUNC_0( VAR_1->pOrderBy==0 );
          VAR_1->pOrderBy = FUNC_3(VAR_3, VAR_4->pOrderBy, 0);
        }
        FUNC_1(VAR_3, VAR_1->zBase);
        VAR_1->zBase = 0;
      }
    }
  }
}
