
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ rc; } ;
struct TYPE_10__ {int nSeg; TYPE_1__* aSeg; } ;
struct TYPE_9__ {int (* xNext ) (TYPE_3__*,TYPE_1__*,int ) ;} ;
typedef TYPE_1__ Fts5SegIter ;
typedef TYPE_2__ Fts5Iter ;
typedef TYPE_3__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(
  Fts5Index *VAR_1,
  Fts5Iter *VAR_2,
  int VAR_3,
  int VAR_4
){
  int VAR_5;
  for(VAR_5=(VAR_2->nSeg+VAR_3)/2; VAR_5>=VAR_4 && VAR_1->rc==VAR_0; VAR_5=VAR_5/2){
    int VAR_6;
    if( (VAR_6 = FUNC_1(VAR_2, VAR_5)) ){
      Fts5SegIter *VAR_7 = &VAR_2->aSeg[VAR_6];
      FUNC_0( VAR_1->rc==VAR_0 );
      VAR_7->xNext(VAR_1, VAR_7, 0);
      VAR_5 = VAR_2->nSeg + VAR_6;
    }
  }
}
