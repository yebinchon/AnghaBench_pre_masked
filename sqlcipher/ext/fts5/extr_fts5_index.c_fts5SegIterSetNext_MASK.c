
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pConfig; } ;
struct TYPE_7__ {int flags; int xNext; } ;
struct TYPE_6__ {scalar_t__ eDetail; } ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(Fts5Index *VAR_5, Fts5SegIter *VAR_6){
  if( VAR_6->flags & VAR_1 ){
    VAR_6->xNext = VAR_4;
  }else if( VAR_5->pConfig->eDetail==VAR_0 ){
    VAR_6->xNext = VAR_3;
  }else{
    VAR_6->xNext = VAR_2;
  }
}
