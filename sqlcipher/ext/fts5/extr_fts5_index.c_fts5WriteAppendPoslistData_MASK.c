
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
typedef int u64 ;
typedef int i64 ;
struct TYPE_16__ {scalar_t__ rc; TYPE_1__* pConfig; } ;
struct TYPE_11__ {scalar_t__ n; } ;
struct TYPE_13__ {scalar_t__ n; } ;
struct TYPE_15__ {TYPE_10__ buf; TYPE_2__ pgidx; } ;
struct TYPE_14__ {TYPE_4__ writer; } ;
struct TYPE_12__ {scalar_t__ pgsz; } ;
typedef TYPE_3__ Fts5SegWriter ;
typedef TYPE_4__ Fts5PageWriter ;
typedef TYPE_5__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,TYPE_10__*,int,int const*) ;
 scalar_t__ FUNC_2 (int const*,int *) ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(
  Fts5Index *VAR_1,
  Fts5SegWriter *VAR_2,
  const u8 *VAR_3,
  int VAR_4
){
  Fts5PageWriter *VAR_5 = &VAR_2->writer;
  const u8 *VAR_6 = VAR_3;
  int VAR_7 = VAR_4;

  FUNC_0( VAR_1->pConfig->pgsz>0 );
  while( VAR_1->rc==VAR_0
     && (VAR_5->buf.n + VAR_5->pgidx.n + VAR_7)>=VAR_1->pConfig->pgsz
  ){
    int VAR_8 = VAR_1->pConfig->pgsz - VAR_5->buf.n - VAR_5->pgidx.n;
    int VAR_9 = 0;
    while( VAR_9<VAR_8 ){
      i64 VAR_10;
      VAR_9 += FUNC_2(&VAR_6[VAR_9], (u64*)&VAR_10);
    }
    FUNC_1(&VAR_1->rc, &VAR_5->buf, VAR_9, VAR_6);
    VAR_6 += VAR_9;
    VAR_7 -= VAR_9;
    FUNC_3(VAR_1, VAR_2);
  }
  if( VAR_7>0 ){
    FUNC_1(&VAR_1->rc, &VAR_5->buf, VAR_7, VAR_6);
  }
}
