
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct IdList_item {int idx; int zName; } ;
typedef int sqlite3 ;
struct TYPE_5__ {int nId; struct IdList_item* a; } ;
typedef TYPE_1__ IdList ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;

IdList *FUNC_4(sqlite3 *VAR_0, IdList *VAR_1){
  IdList *VAR_2;
  int VAR_3;
  FUNC_0( VAR_0!=0 );
  if( VAR_1==0 ) return 0;
  VAR_2 = FUNC_2(VAR_0, sizeof(*VAR_2) );
  if( VAR_2==0 ) return 0;
  VAR_2->nId = VAR_1->nId;
  VAR_2->a = FUNC_2(VAR_0, VAR_1->nId*sizeof(VAR_1->a[0]) );
  if( VAR_2->a==0 ){
    FUNC_1(VAR_0, VAR_2);
    return 0;
  }



  for(VAR_3=0; VAR_3<VAR_1->nId; VAR_3++){
    struct IdList_item *VAR_4 = &VAR_2->a[VAR_3];
    struct IdList_item *VAR_5 = &VAR_1->a[VAR_3];
    VAR_4->zName = FUNC_3(VAR_0, VAR_5->zName);
    VAR_4->idx = VAR_5->idx;
  }
  return VAR_2;
}
