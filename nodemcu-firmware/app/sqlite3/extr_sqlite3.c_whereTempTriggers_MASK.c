
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_16__ {int zName; int const* pSchema; struct TYPE_16__* pNext; } ;
typedef TYPE_3__ Trigger ;
struct TYPE_17__ {int const* pSchema; } ;
typedef TYPE_4__ Table ;
struct TYPE_18__ {TYPE_2__* db; } ;
struct TYPE_14__ {int * pSchema; } ;
typedef int Schema ;
typedef TYPE_5__ Parse ;


 int FUNC_0 (TYPE_2__*,char*) ;
 char* FUNC_1 (TYPE_2__*,char*,char*) ;
 TYPE_3__* FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 char* FUNC_3 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static char *FUNC_4(Parse *VAR_0, Table *VAR_1){
  Trigger *VAR_2;
  char *VAR_3 = 0;
  const Schema *VAR_4 = VAR_0->db->aDb[1].pSchema;






  if( VAR_1->pSchema!=VAR_4 ){
    sqlite3 *VAR_5 = VAR_0->db;
    for(VAR_2=FUNC_2(VAR_0, VAR_1); VAR_2; VAR_2=VAR_2->pNext){
      if( VAR_2->pSchema==VAR_4 ){
        VAR_3 = FUNC_3(VAR_5, VAR_3, VAR_2->zName);
      }
    }
  }
  if( VAR_3 ){
    char *VAR_6 = FUNC_1(VAR_0->db, "type='trigger' AND (%s)", VAR_3);
    FUNC_0(VAR_0->db, VAR_3);
    VAR_3 = VAR_6;
  }
  return VAR_3;
}
