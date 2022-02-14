
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3 ;
typedef int Token ;
struct TYPE_13__ {scalar_t__ zName; } ;
struct TYPE_12__ {TYPE_9__* a; int nId; } ;
struct TYPE_11__ {int * db; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ IdList ;


 scalar_t__ VAR_0 ;
 TYPE_9__* FUNC_0 (int *,TYPE_9__*,int,int *,int*) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,void*,int *) ;

IdList *FUNC_5(Parse *VAR_1, IdList *VAR_2, Token *VAR_3){
  sqlite3 *VAR_4 = VAR_1->db;
  int VAR_5;
  if( VAR_2==0 ){
    VAR_2 = FUNC_1(VAR_4, sizeof(IdList) );
    if( VAR_2==0 ) return 0;
  }
  VAR_2->a = FUNC_0(
      VAR_4,
      VAR_2->a,
      sizeof(VAR_2->a[0]),
      &VAR_2->nId,
      &VAR_5
  );
  if( VAR_5<0 ){
    FUNC_2(VAR_4, VAR_2);
    return 0;
  }
  VAR_2->a[VAR_5].zName = FUNC_3(VAR_4, VAR_3);
  if( VAR_0 && VAR_2->a[VAR_5].zName ){
    FUNC_4(VAR_1, (void*)VAR_2->a[VAR_5].zName, VAR_3);
  }
  return VAR_2;
}
