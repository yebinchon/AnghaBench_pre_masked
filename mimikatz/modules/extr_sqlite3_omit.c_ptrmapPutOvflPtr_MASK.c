
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ nLocal; scalar_t__ nPayload; int nSize; } ;
struct TYPE_7__ {int pgno; int pBt; int aDataEnd; int (* xParseCell ) (TYPE_1__*,int *,TYPE_2__*) ;} ;
typedef int Pgno ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ CellInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,int*) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_2__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(MemPage *VAR_2, MemPage *VAR_3, u8 *VAR_4,int *VAR_5){
  CellInfo VAR_6;
  if( *VAR_5 ) return;
  FUNC_1( VAR_4!=0 );
  VAR_2->xParseCell(VAR_2, VAR_4, &VAR_6);
  if( VAR_6.nLocal<VAR_6.nPayload ){
    Pgno VAR_7;
    if( FUNC_0(VAR_3->aDataEnd, VAR_4, VAR_4+VAR_6.nLocal) ){
      FUNC_5( VAR_3!=VAR_2 );
      *VAR_5 = VAR_1;
      return;
    }
    VAR_7 = FUNC_2(&VAR_4[VAR_6.nSize-4]);
    FUNC_3(VAR_2->pBt, VAR_7, VAR_0, VAR_2->pgno, VAR_5);
  }
}
