
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ nEmpty; TYPE_2__* aDlidx; } ;
struct TYPE_6__ {scalar_t__ n; } ;
struct TYPE_7__ {TYPE_1__ buf; } ;
typedef TYPE_3__ Fts5SegWriter ;
typedef int Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_1(Fts5Index *VAR_1, Fts5SegWriter *VAR_2){
  int VAR_3 = 0;



  if( VAR_2->aDlidx[0].buf.n>0 && VAR_2->nEmpty>=VAR_0 ){
    VAR_3 = 1;
  }
  FUNC_0(VAR_1, VAR_2, VAR_3);
  VAR_2->nEmpty = 0;
  return VAR_3;
}
