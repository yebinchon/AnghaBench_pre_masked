
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ynVar ;
struct SrcList_item {int colUsed; int iCursor; TYPE_1__* pTab; } ;
typedef int sqlite3 ;
struct TYPE_9__ {TYPE_1__* pTab; } ;
struct TYPE_11__ {int iColumn; TYPE_2__ y; int iTable; } ;
struct TYPE_10__ {struct SrcList_item* a; } ;
struct TYPE_8__ {int iPKey; } ;
typedef TYPE_3__ SrcList ;
typedef TYPE_4__ Expr ;
typedef int Bitmask ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int) ;

Expr *FUNC_2(sqlite3 *VAR_2, SrcList *VAR_3, int VAR_4, int VAR_5){
  Expr *VAR_6 = FUNC_0(VAR_2, VAR_1, 0, 0);
  if( VAR_6 ){
    struct SrcList_item *VAR_7 = &VAR_3->a[VAR_4];
    VAR_6->y.pTab = VAR_7->pTab;
    VAR_6->iTable = VAR_7->iCursor;
    if( VAR_6->y.pTab->iPKey==VAR_5 ){
      VAR_6->iColumn = -1;
    }else{
      VAR_6->iColumn = (ynVar)VAR_5;
      FUNC_1( VAR_5==VAR_0 );
      FUNC_1( VAR_5==VAR_0-1 );
      VAR_7->colUsed |= ((Bitmask)1)<<(VAR_5>=VAR_0 ? VAR_0-1 : VAR_5);
    }
  }
  return VAR_6;
}
