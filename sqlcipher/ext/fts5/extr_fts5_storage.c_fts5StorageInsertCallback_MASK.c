
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ szCol; int iCol; TYPE_1__* pStorage; } ;
struct TYPE_3__ {int * pIndex; } ;
typedef TYPE_2__ Fts5InsertCtx ;
typedef int Fts5Index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ,scalar_t__,char const*,int) ;

__attribute__((used)) static int FUNC_2(
  void *VAR_2,
  int VAR_3,
  const char *VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7
){
  Fts5InsertCtx *VAR_8 = (Fts5InsertCtx*)VAR_2;
  Fts5Index *VAR_9 = VAR_8->pStorage->pIndex;
  FUNC_0(VAR_6, VAR_7);
  if( VAR_5>VAR_0 ) VAR_5 = VAR_0;
  if( (VAR_3 & VAR_1)==0 || VAR_8->szCol==0 ){
    VAR_8->szCol++;
  }
  return FUNC_1(VAR_9, VAR_8->iCol, VAR_8->szCol-1, VAR_4, VAR_5);
}
