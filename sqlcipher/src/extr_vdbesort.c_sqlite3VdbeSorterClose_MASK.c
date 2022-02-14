
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_8__ {int aMemory; } ;
struct TYPE_10__ {TYPE_1__ list; } ;
typedef TYPE_3__ VdbeSorter ;
struct TYPE_9__ {TYPE_3__* pSorter; } ;
struct TYPE_11__ {scalar_t__ eCurType; TYPE_2__ uc; } ;
typedef TYPE_4__ VdbeCursor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int ) ;

void FUNC_4(sqlite3 *VAR_1, VdbeCursor *VAR_2){
  VdbeSorter *VAR_3;
  FUNC_0( VAR_2->eCurType==VAR_0 );
  VAR_3 = VAR_2->uc.pSorter;
  if( VAR_3 ){
    FUNC_2(VAR_1, VAR_3);
    FUNC_3(VAR_3->list.aMemory);
    FUNC_1(VAR_1, VAR_3);
    VAR_2->uc.pSorter = 0;
  }
}
