
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_4__ {scalar_t__ nTotalRow; } ;
typedef TYPE_1__ Fts5Storage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(Fts5Storage *VAR_2, i64 *VAR_3){
  int VAR_4 = FUNC_0(VAR_2, 0);
  if( VAR_4==VAR_1 ){





    *VAR_3 = VAR_2->nTotalRow;
    if( VAR_2->nTotalRow<=0 ) VAR_4 = VAR_0;
  }
  return VAR_4;
}
