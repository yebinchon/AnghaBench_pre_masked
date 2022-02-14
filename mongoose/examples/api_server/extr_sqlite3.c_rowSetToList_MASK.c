
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct RowSetEntry {int dummy; } ;
struct TYPE_5__ {int rsFlags; TYPE_1__* pForest; int pEntry; } ;
struct TYPE_4__ {struct TYPE_4__* pRight; struct RowSetEntry* pLeft; } ;
typedef TYPE_2__ RowSet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct RowSetEntry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct RowSetEntry*,struct RowSetEntry**,struct RowSetEntry**) ;

__attribute__((used)) static void FUNC_4(RowSet *VAR_2){


  FUNC_0( VAR_2!=0 && (VAR_2->rsFlags & VAR_0)==0 );

  if( (VAR_2->rsFlags & VAR_1)==0 ){
    VAR_2->pEntry = FUNC_2(VAR_2->pEntry);
  }





  FUNC_0( VAR_2->pForest==0 );
  VAR_2->rsFlags |= VAR_0;
}
