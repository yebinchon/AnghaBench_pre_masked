
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ rc; } ;
struct TYPE_20__ {int bSkipEmpty; TYPE_2__* aSeg; TYPE_1__* aFirst; } ;
struct TYPE_19__ {scalar_t__ pLeaf; int (* xNext ) (TYPE_4__*,TYPE_2__*,int*) ;} ;
struct TYPE_18__ {int iFirst; } ;
typedef TYPE_2__ Fts5SegIter ;
typedef TYPE_3__ Fts5Iter ;
typedef TYPE_4__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int,TYPE_2__**) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*,int*) ;

__attribute__((used)) static void FUNC_7(
  Fts5Index *VAR_1,
  Fts5Iter *VAR_2,
  int *VAR_3
){
  FUNC_0( VAR_2->bSkipEmpty );
  if( VAR_1->rc==VAR_0 ){
    *VAR_3 = 0;
    do{
      int VAR_4 = VAR_2->aFirst[1].iFirst;
      Fts5SegIter *VAR_5 = &VAR_2->aSeg[VAR_4];
      int VAR_6 = 0;

      FUNC_0( VAR_1->rc==VAR_0 );
      VAR_5->xNext(VAR_1, VAR_5, &VAR_6);
      if( VAR_5->pLeaf==0 || VAR_6
       || FUNC_2(VAR_2, VAR_4, &VAR_5)
      ){
        FUNC_3(VAR_1, VAR_2, VAR_4, 1);
        FUNC_5(VAR_2);
        *VAR_3 = 1;
      }
      FUNC_1(VAR_1, VAR_2);

    }while( FUNC_4(VAR_1, VAR_2) );
  }
}
