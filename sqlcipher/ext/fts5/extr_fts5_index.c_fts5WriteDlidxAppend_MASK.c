
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_19__ {scalar_t__ n; int* p; } ;
struct TYPE_18__ {int pgno; int bPrevValid; int iPrev; TYPE_6__ buf; } ;
struct TYPE_17__ {scalar_t__ rc; TYPE_1__* pConfig; } ;
struct TYPE_15__ {int pgno; } ;
struct TYPE_16__ {TYPE_2__ writer; TYPE_5__* aDlidx; int iSegid; } ;
struct TYPE_14__ {scalar_t__ pgsz; } ;
typedef TYPE_3__ Fts5SegWriter ;
typedef TYPE_4__ Fts5Index ;
typedef TYPE_5__ Fts5DlidxWriter ;


 int FUNC_0 (int ,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,int*,scalar_t__) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_5 (scalar_t__*,TYPE_6__*,int) ;
 int FUNC_6 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_7(
  Fts5Index *VAR_1,
  Fts5SegWriter *VAR_2,
  i64 VAR_3
){
  int VAR_4;
  int VAR_5 = 0;

  for(VAR_4=0; VAR_1->rc==VAR_0 && VAR_5==0; VAR_4++){
    i64 VAR_6;
    Fts5DlidxWriter *VAR_7 = &VAR_2->aDlidx[VAR_4];

    if( VAR_7->buf.n>=VAR_1->pConfig->pgsz ){





      VAR_7->buf.p[0] = 0x01;
      FUNC_2(VAR_1,
          FUNC_0(VAR_2->iSegid, VAR_4, VAR_7->pgno),
          VAR_7->buf.p, VAR_7->buf.n
      );
      FUNC_4(VAR_1, VAR_2, VAR_4+2);
      VAR_7 = &VAR_2->aDlidx[VAR_4];
      if( VAR_1->rc==VAR_0 && VAR_7[1].buf.n==0 ){
        i64 VAR_8 = FUNC_3(&VAR_7->buf);


        VAR_7[1].pgno = VAR_7->pgno;
        FUNC_5(&VAR_1->rc, &VAR_7[1].buf, 0);
        FUNC_5(&VAR_1->rc, &VAR_7[1].buf, VAR_7->pgno);
        FUNC_5(&VAR_1->rc, &VAR_7[1].buf, VAR_8);
        VAR_7[1].bPrevValid = 1;
        VAR_7[1].iPrev = VAR_8;
      }

      FUNC_6(&VAR_7->buf);
      VAR_7->bPrevValid = 0;
      VAR_7->pgno++;
    }else{
      VAR_5 = 1;
    }

    if( VAR_7->bPrevValid ){
      VAR_6 = VAR_3 - VAR_7->iPrev;
    }else{
      i64 VAR_9 = (VAR_4==0 ? VAR_2->writer.pgno : VAR_7[-1].pgno);
      FUNC_1( VAR_7->buf.n==0 );
      FUNC_5(&VAR_1->rc, &VAR_7->buf, !VAR_5);
      FUNC_5(&VAR_1->rc, &VAR_7->buf, VAR_9);
      VAR_6 = VAR_3;
    }

    FUNC_5(&VAR_1->rc, &VAR_7->buf, VAR_6);
    VAR_7->bPrevValid = 1;
    VAR_7->iPrev = VAR_3;
  }
}
