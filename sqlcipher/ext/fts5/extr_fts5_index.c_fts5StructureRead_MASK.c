
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ iStructVersion; scalar_t__ rc; TYPE_3__* pStruct; } ;
struct TYPE_13__ {scalar_t__ nSegment; int nLevel; TYPE_1__* aLevel; } ;
struct TYPE_12__ {scalar_t__ iSegid; scalar_t__ pgnoFirst; scalar_t__ pgnoLast; } ;
struct TYPE_11__ {scalar_t__ nMerge; int nSeg; TYPE_2__* aSeg; } ;
typedef TYPE_2__ Fts5StructureSegment ;
typedef TYPE_3__ Fts5Structure ;
typedef TYPE_4__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 void* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static Fts5Structure *FUNC_6(Fts5Index *VAR_1){

  if( VAR_1->pStruct==0 ){
    VAR_1->iStructVersion = FUNC_2(VAR_1);
    if( VAR_1->rc==VAR_0 ){
      VAR_1->pStruct = FUNC_3(VAR_1);
    }
  }
  if( VAR_1->rc!=VAR_0 ) return 0;
  FUNC_0( VAR_1->iStructVersion!=0 );
  FUNC_0( VAR_1->pStruct!=0 );
  FUNC_4(VAR_1->pStruct);
  return VAR_1->pStruct;
}
