
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef int u8 ;
struct TYPE_26__ {scalar_t__ n; int * p; } ;
struct TYPE_25__ {scalar_t__ rc; TYPE_1__* pConfig; } ;
struct TYPE_18__ {int p; scalar_t__ n; } ;
struct TYPE_19__ {int n; } ;
struct TYPE_24__ {int iPrevPgidx; int pgno; TYPE_14__ term; TYPE_15__ buf; TYPE_7__ pgidx; } ;
struct TYPE_23__ {int bFirstRowidInDoclist; scalar_t__ nDlidx; TYPE_3__* aDlidx; scalar_t__ bFirstRowidInPage; scalar_t__ bFirstTermInPage; TYPE_5__ writer; } ;
struct TYPE_21__ {scalar_t__ n; } ;
struct TYPE_22__ {int pgno; TYPE_2__ buf; } ;
struct TYPE_20__ {scalar_t__ pgsz; } ;
typedef TYPE_4__ Fts5SegWriter ;
typedef TYPE_5__ Fts5PageWriter ;
typedef TYPE_6__ Fts5Index ;
typedef TYPE_7__ Fts5Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,TYPE_15__*,int,int const*) ;
 int FUNC_3 (scalar_t__*,TYPE_15__*,int) ;
 int FUNC_4 (scalar_t__*,TYPE_15__*,scalar_t__) ;
 int FUNC_5 (scalar_t__*,TYPE_14__*,int,int const*) ;
 int FUNC_6 (int,int ,int const*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_6__*,TYPE_4__*,int,int const*) ;
 int FUNC_9 (TYPE_6__*,TYPE_4__*) ;
 scalar_t__ FUNC_10 (int *,int) ;

__attribute__((used)) static void FUNC_11(
  Fts5Index *VAR_2,
  Fts5SegWriter *VAR_3,
  int VAR_4, const u8 *VAR_5
){
  int VAR_6;
  Fts5PageWriter *VAR_7 = &VAR_3->writer;
  Fts5Buffer *VAR_8 = &VAR_3->writer.pgidx;
  int VAR_9 = FUNC_0(VAR_7->term.n, VAR_4);

  FUNC_1( VAR_2->rc==VAR_1 );
  FUNC_1( VAR_7->buf.n>=4 );
  FUNC_1( VAR_7->buf.n>4 || VAR_3->bFirstTermInPage );


  if( (VAR_7->buf.n + VAR_8->n + VAR_4 + 2)>=VAR_2->pConfig->pgsz ){
    if( VAR_7->buf.n>4 ){
      FUNC_9(VAR_2, VAR_3);
      if( VAR_2->rc!=VAR_1 ) return;
    }
    FUNC_4(&VAR_2->rc, &VAR_7->buf, VAR_4+VAR_0);
  }


  VAR_8->n += FUNC_10(
      &VAR_8->p[VAR_8->n], VAR_7->buf.n - VAR_7->iPrevPgidx
  );
  VAR_7->iPrevPgidx = VAR_7->buf.n;





  if( VAR_3->bFirstTermInPage ){
    VAR_6 = 0;
    if( VAR_7->pgno!=1 ){
      int VAR_10 = VAR_4;
      if( VAR_7->term.n ){
        VAR_10 = 1 + FUNC_6(VAR_9, VAR_7->term.p, VAR_5);
      }
      FUNC_8(VAR_2, VAR_3, VAR_10, VAR_5);
      if( VAR_2->rc!=VAR_1 ) return;
      VAR_7 = &VAR_3->writer;
    }
  }else{
    VAR_6 = FUNC_6(VAR_9, VAR_7->term.p, VAR_5);
    FUNC_3(&VAR_2->rc, &VAR_7->buf, VAR_6);
  }



  FUNC_3(&VAR_2->rc, &VAR_7->buf, VAR_4 - VAR_6);
  FUNC_2(&VAR_2->rc, &VAR_7->buf, VAR_4 - VAR_6, &VAR_5[VAR_6]);


  FUNC_5(&VAR_2->rc, &VAR_7->term, VAR_4, VAR_5);
  VAR_3->bFirstTermInPage = 0;

  VAR_3->bFirstRowidInPage = 0;
  VAR_3->bFirstRowidInDoclist = 1;

  FUNC_1( VAR_2->rc || (VAR_3->nDlidx>0 && VAR_3->aDlidx[0].buf.n==0) );
  VAR_3->aDlidx[0].pgno = VAR_7->pgno;
}
