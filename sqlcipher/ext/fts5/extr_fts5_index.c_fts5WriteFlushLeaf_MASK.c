
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
typedef int i64 ;
struct TYPE_14__ {scalar_t__ n; int const* p; } ;
struct TYPE_13__ {int rc; } ;
struct TYPE_12__ {int pgno; scalar_t__ iPrevPgidx; TYPE_9__ buf; TYPE_9__ pgidx; } ;
struct TYPE_11__ {int bFirstTermInPage; int bFirstRowidInPage; int nLeafWritten; int iSegid; TYPE_2__ writer; } ;
typedef TYPE_1__ Fts5SegWriter ;
typedef TYPE_2__ Fts5PageWriter ;
typedef TYPE_3__ Fts5Index ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_9__*,int,int const*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_3__*,int ,int const*,int) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(Fts5Index *VAR_0, Fts5SegWriter *VAR_1){
  static const u8 VAR_2[] = { 0x00, 0x00, 0x00, 0x00 };
  Fts5PageWriter *VAR_3 = &VAR_1->writer;
  i64 VAR_4;

  FUNC_1( (VAR_3->pgidx.n==0)==(VAR_1->bFirstTermInPage) );


  FUNC_1( 0==FUNC_5(&VAR_3->buf.p[2]) );
  FUNC_6(&VAR_3->buf.p[2], (u16)VAR_3->buf.n);

  if( VAR_1->bFirstTermInPage ){

    FUNC_1( VAR_3->pgidx.n==0 );
    FUNC_7(VAR_0, VAR_1);
  }else{

    FUNC_2(&VAR_0->rc, &VAR_3->buf, VAR_3->pgidx.n, VAR_3->pgidx.p);
  }


  VAR_4 = FUNC_0(VAR_1->iSegid, VAR_3->pgno);
  FUNC_4(VAR_0, VAR_4, VAR_3->buf.p, VAR_3->buf.n);


  FUNC_3(&VAR_3->buf);
  FUNC_3(&VAR_3->pgidx);
  FUNC_2(&VAR_0->rc, &VAR_3->buf, 4, VAR_2);
  VAR_3->iPrevPgidx = 0;
  VAR_3->pgno++;


  VAR_1->nLeafWritten++;


  VAR_1->bFirstTermInPage = 1;
  VAR_1->bFirstRowidInPage = 1;
}
