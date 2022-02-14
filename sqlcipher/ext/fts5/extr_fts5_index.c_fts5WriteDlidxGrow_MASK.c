
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rc; } ;
struct TYPE_5__ {int nDlidx; int * aDlidx; } ;
typedef TYPE_1__ Fts5SegWriter ;
typedef TYPE_2__ Fts5Index ;
typedef int Fts5DlidxWriter ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,size_t) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(
  Fts5Index *VAR_2,
  Fts5SegWriter *VAR_3,
  int VAR_4
){
  if( VAR_2->rc==VAR_1 && VAR_4>=VAR_3->nDlidx ){
    Fts5DlidxWriter *VAR_5 = (Fts5DlidxWriter*)FUNC_1(
        VAR_3->aDlidx, sizeof(Fts5DlidxWriter) * VAR_4
    );
    if( VAR_5==0 ){
      VAR_2->rc = VAR_0;
    }else{
      size_t VAR_6 = sizeof(Fts5DlidxWriter) * (VAR_4 - VAR_3->nDlidx);
      FUNC_0(&VAR_5[VAR_3->nDlidx], 0, VAR_6);
      VAR_3->aDlidx = VAR_5;
      VAR_3->nDlidx = VAR_4;
    }
  }
  return VAR_2->rc;
}
