
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ rc; } ;
struct TYPE_19__ {scalar_t__ nSegment; TYPE_1__* aLevel; } ;
struct TYPE_18__ {scalar_t__ nSeg; } ;
typedef TYPE_2__ Fts5Structure ;
typedef TYPE_3__ Fts5Index ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__**,int,int*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_2__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;

int FUNC_9(Fts5Index *VAR_2){
  Fts5Structure *VAR_3;
  Fts5Structure *VAR_4 = 0;

  FUNC_0( VAR_2->rc==VAR_1 );
  FUNC_1(VAR_2);
  VAR_3 = FUNC_6(VAR_2);
  FUNC_5(VAR_2);

  if( VAR_3 ){
    VAR_4 = FUNC_3(VAR_2, VAR_3);
  }
  FUNC_7(VAR_3);

  FUNC_0( VAR_4==0 || VAR_4->nSegment>0 );
  if( VAR_4 ){
    int VAR_5;
    for(VAR_5=0; VAR_4->aLevel[VAR_5].nSeg==0; VAR_5++){}
    while( VAR_2->rc==VAR_1 && VAR_4->aLevel[VAR_5].nSeg>0 ){
      int VAR_6 = VAR_0;
      FUNC_2(VAR_2, &VAR_4, VAR_5, &VAR_6);
    }

    FUNC_8(VAR_2, VAR_4);
    FUNC_7(VAR_4);
  }

  return FUNC_4(VAR_2);
}
