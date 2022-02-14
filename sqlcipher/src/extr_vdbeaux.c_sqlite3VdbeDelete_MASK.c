
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* pVdbe; int mutex; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_11__ {TYPE_2__* db; int magic; TYPE_1__* pPrev; struct TYPE_11__* pNext; } ;
typedef TYPE_3__ Vdbe ;
struct TYPE_9__ {TYPE_3__* pNext; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(Vdbe *VAR_1){
  sqlite3 *VAR_2;

  FUNC_0( VAR_1!=0 );
  VAR_2 = VAR_1->db;
  FUNC_0( FUNC_3(VAR_2->mutex) );
  FUNC_2(VAR_2, VAR_1);
  if( VAR_1->pPrev ){
    VAR_1->pPrev->pNext = VAR_1->pNext;
  }else{
    FUNC_0( VAR_2->pVdbe==VAR_1 );
    VAR_2->pVdbe = VAR_1->pNext;
  }
  if( VAR_1->pNext ){
    VAR_1->pNext->pPrev = VAR_1->pPrev;
  }
  VAR_1->magic = VAR_0;
  VAR_1->db = 0;
  FUNC_1(VAR_2, VAR_1);
}
