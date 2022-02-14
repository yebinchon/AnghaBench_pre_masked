
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ n; TYPE_2__* p; } ;
struct TYPE_15__ {int pgsz; int zName; int zDb; } ;
struct TYPE_14__ {scalar_t__ rc; scalar_t__ pIdxWriter; TYPE_4__* pConfig; } ;
struct TYPE_12__ {int pgno; TYPE_5__ buf; TYPE_5__ pgidx; } ;
struct TYPE_13__ {int iSegid; int bFirstTermInPage; int iBtPage; TYPE_1__ writer; } ;
typedef TYPE_2__ Fts5SegWriter ;
typedef TYPE_3__ Fts5Index ;
typedef TYPE_4__ Fts5Config ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,scalar_t__*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (scalar_t__*,TYPE_5__*,int const) ;
 int FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_7(
  Fts5Index *VAR_2,
  Fts5SegWriter *VAR_3,
  int VAR_4
){
  const int VAR_5 = VAR_2->pConfig->pgsz + VAR_0;

  FUNC_3(VAR_3, 0, sizeof(Fts5SegWriter));
  VAR_3->iSegid = VAR_4;

  FUNC_2(VAR_2, VAR_3, 1);
  VAR_3->writer.pgno = 1;
  VAR_3->bFirstTermInPage = 1;
  VAR_3->iBtPage = 1;

  FUNC_0( VAR_3->writer.buf.n==0 );
  FUNC_0( VAR_3->writer.pgidx.n==0 );


  FUNC_4(&VAR_2->rc, &VAR_3->writer.pgidx, VAR_5);
  FUNC_4(&VAR_2->rc, &VAR_3->writer.buf, VAR_5);

  if( VAR_2->pIdxWriter==0 ){
    Fts5Config *VAR_6 = VAR_2->pConfig;
    FUNC_1(VAR_2, &VAR_2->pIdxWriter, FUNC_6(
          "INSERT INTO '%q'.'%q_idx'(segid,term,pgno) VALUES(?,?,?)",
          VAR_6->zDb, VAR_6->zName
    ));
  }

  if( VAR_2->rc==VAR_1 ){

    FUNC_3(VAR_3->writer.buf.p, 0, 4);
    VAR_3->writer.buf.n = 4;




    FUNC_5(VAR_2->pIdxWriter, 1, VAR_3->iSegid);
  }
}
