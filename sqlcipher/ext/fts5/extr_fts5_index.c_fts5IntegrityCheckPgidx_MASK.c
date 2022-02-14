
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int n; int * p; int member_2; int member_1; int member_0; } ;
struct TYPE_12__ {int szLeaf; int nn; int * p; } ;
struct TYPE_11__ {scalar_t__ rc; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5Data ;
typedef TYPE_3__ Fts5Buffer ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,TYPE_3__*,int,int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__*,TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(Fts5Index *VAR_2, Fts5Data *VAR_3){
  int VAR_4 = 0;
  int VAR_5;

  Fts5Buffer VAR_6 = {0,0,0};
  Fts5Buffer VAR_7 = {0,0,0};

  VAR_5 = VAR_3->szLeaf;
  while( VAR_5<VAR_3->nn && VAR_2->rc==VAR_1 ){
    int VAR_8;
    int VAR_9;
    int VAR_10;

    VAR_5 += FUNC_4(&VAR_3->p[VAR_5], VAR_10);
    VAR_4 += VAR_10;
    VAR_9 = VAR_4;

    if( VAR_9>=VAR_3->szLeaf ){
      VAR_2->rc = VAR_0;
    }else if( VAR_4==VAR_10 ){
      int VAR_11;
      VAR_9 += FUNC_4(&VAR_3->p[VAR_9], VAR_11);
      if( (VAR_9+VAR_11)>VAR_3->szLeaf ){
        VAR_2->rc = VAR_0;
      }else{
        FUNC_3(&VAR_2->rc, &VAR_6, VAR_11, &VAR_3->p[VAR_9]);
      }
    }else{
      int VAR_12, VAR_13;
      VAR_9 += FUNC_4(&VAR_3->p[VAR_9], VAR_12);
      VAR_9 += FUNC_4(&VAR_3->p[VAR_9], VAR_13);
      if( VAR_12>VAR_6 || (VAR_9+VAR_13)>VAR_3->szLeaf ){
        VAR_2->rc = VAR_0;
      }else{
        VAR_6 = VAR_12;
        FUNC_0(&VAR_2->rc, &VAR_6, VAR_13, &VAR_3->p[VAR_9]);
      }

      if( VAR_2->rc==VAR_1 ){
        VAR_8 = FUNC_1(&VAR_6, &VAR_7);
        if( VAR_8<=0 ) VAR_2->rc = VAR_0;
      }
    }
    FUNC_3(&VAR_2->rc, &VAR_7, VAR_6, VAR_6);
  }

  FUNC_2(&VAR_6);
  FUNC_2(&VAR_7);
}
