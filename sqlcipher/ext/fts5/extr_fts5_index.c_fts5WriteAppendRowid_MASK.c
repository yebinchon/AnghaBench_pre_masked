
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int u16 ;
typedef scalar_t__ i64 ;
struct TYPE_18__ {scalar_t__ rc; TYPE_2__* pConfig; } ;
struct TYPE_13__ {scalar_t__ n; int p; } ;
struct TYPE_14__ {scalar_t__ n; } ;
struct TYPE_17__ {TYPE_12__ buf; TYPE_1__ pgidx; } ;
struct TYPE_16__ {scalar_t__ iPrevRowid; scalar_t__ bFirstRowidInPage; scalar_t__ bFirstRowidInDoclist; TYPE_4__ writer; } ;
struct TYPE_15__ {scalar_t__ pgsz; } ;
typedef TYPE_3__ Fts5SegWriter ;
typedef TYPE_4__ Fts5PageWriter ;
typedef TYPE_5__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,TYPE_12__*,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*,scalar_t__) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(
  Fts5Index *VAR_1,
  Fts5SegWriter *VAR_2,
  i64 VAR_3
){
  if( VAR_1->rc==VAR_0 ){
    Fts5PageWriter *VAR_4 = &VAR_2->writer;

    if( (VAR_4->buf.n + VAR_4->pgidx.n)>=VAR_1->pConfig->pgsz ){
      FUNC_4(VAR_1, VAR_2);
    }




    if( VAR_2->bFirstRowidInPage ){
      FUNC_2(VAR_4->buf.p, (u16)VAR_4->buf.n);
      FUNC_3(VAR_1, VAR_2, VAR_3);
    }


    if( VAR_2->bFirstRowidInDoclist || VAR_2->bFirstRowidInPage ){
      FUNC_1(&VAR_1->rc, &VAR_4->buf, VAR_3);
    }else{
      FUNC_0( VAR_1->rc || VAR_3>VAR_2->iPrevRowid );
      FUNC_1(&VAR_1->rc, &VAR_4->buf, VAR_3 - VAR_2->iPrevRowid);
    }
    VAR_2->iPrevRowid = VAR_3;
    VAR_2->bFirstRowidInDoclist = 0;
    VAR_2->bFirstRowidInPage = 0;
  }
}
