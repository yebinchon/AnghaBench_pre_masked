
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_16__ {int buf; } ;
struct TYPE_15__ {scalar_t__ rc; } ;
struct TYPE_12__ {int n; } ;
struct TYPE_14__ {int pgno; TYPE_11__ pgidx; TYPE_11__ buf; TYPE_11__ term; } ;
struct TYPE_13__ {int nDlidx; TYPE_4__* aDlidx; TYPE_11__ btterm; TYPE_2__ writer; } ;
typedef TYPE_1__ Fts5SegWriter ;
typedef TYPE_2__ Fts5PageWriter ;
typedef TYPE_3__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_6(
  Fts5Index *VAR_1,
  Fts5SegWriter *VAR_2,
  int *VAR_3
){
  int VAR_4;
  Fts5PageWriter *VAR_5 = &VAR_2->writer;
  if( VAR_1->rc==VAR_0 ){
    FUNC_0( VAR_5->pgno>=1 );
    if( VAR_5->buf.n>4 ){
      FUNC_3(VAR_1, VAR_2);
    }
    *VAR_3 = VAR_5->pgno-1;
    if( VAR_5->pgno>1 ){
      FUNC_2(VAR_1, VAR_2);
    }
  }
  FUNC_1(&VAR_5->term);
  FUNC_1(&VAR_5->buf);
  FUNC_1(&VAR_5->pgidx);
  FUNC_1(&VAR_2->btterm);

  for(VAR_4=0; VAR_4<VAR_2->nDlidx; VAR_4++){
    FUNC_4(&VAR_2->aDlidx[VAR_4].buf);
  }
  FUNC_5(VAR_2->aDlidx);
}
