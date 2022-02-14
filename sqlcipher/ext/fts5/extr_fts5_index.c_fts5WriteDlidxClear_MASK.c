
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ n; int p; } ;
struct TYPE_6__ {scalar_t__ pgno; scalar_t__ bPrevValid; TYPE_3__ buf; } ;
struct TYPE_5__ {int nDlidx; int iSegid; TYPE_2__* aDlidx; } ;
typedef TYPE_1__ Fts5SegWriter ;
typedef int Fts5Index ;
typedef TYPE_2__ Fts5DlidxWriter ;


 int FUNC_0 (int ,int,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(
  Fts5Index *VAR_0,
  Fts5SegWriter *VAR_1,
  int VAR_2
){
  int VAR_3;
  FUNC_1( VAR_2==0 || (VAR_1->nDlidx>0 && VAR_1->aDlidx[0].buf.n>0) );
  for(VAR_3=0; VAR_3<VAR_1->nDlidx; VAR_3++){
    Fts5DlidxWriter *VAR_4 = &VAR_1->aDlidx[VAR_3];
    if( VAR_4->buf.n==0 ) break;
    if( VAR_2 ){
      FUNC_1( VAR_4->pgno!=0 );
      FUNC_2(VAR_0,
          FUNC_0(VAR_1->iSegid, VAR_3, VAR_4->pgno),
          VAR_4->buf.p, VAR_4->buf.n
      );
    }
    FUNC_3(&VAR_4->buf);
    VAR_4->bPrevValid = 0;
  }
}
