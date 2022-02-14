
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_10__ {scalar_t__ rc; int pIdxWriter; } ;
struct TYPE_8__ {int n; scalar_t__ p; } ;
struct TYPE_9__ {scalar_t__ iBtPage; scalar_t__ nEmpty; TYPE_1__ btterm; } ;
typedef TYPE_2__ Fts5SegWriter ;
typedef TYPE_3__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (int ,int,char const*,int ,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(Fts5Index *VAR_2, Fts5SegWriter *VAR_3){
  int VAR_4;

  FUNC_0( VAR_3->iBtPage || VAR_3->nEmpty==0 );
  if( VAR_3->iBtPage==0 ) return;
  VAR_4 = FUNC_1(VAR_2, VAR_3);

  if( VAR_2->rc==VAR_0 ){
    const char *VAR_5 = (VAR_3->btterm.n>0?(const char*)VAR_3->btterm.p:"");


    FUNC_2(VAR_2->pIdxWriter, 2, VAR_5, VAR_3->btterm.n, VAR_1);
    FUNC_3(VAR_2->pIdxWriter, 3, VAR_4 + ((i64)VAR_3->iBtPage<<1));
    FUNC_6(VAR_2->pIdxWriter);
    VAR_2->rc = FUNC_5(VAR_2->pIdxWriter);
    FUNC_4(VAR_2->pIdxWriter, 2);
  }
  VAR_3->iBtPage = 0;
}
