
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {scalar_t__ rc; } ;
struct TYPE_8__ {int pgno; } ;
struct TYPE_9__ {TYPE_1__ writer; int iBtPage; int btterm; } ;
typedef TYPE_2__ Fts5SegWriter ;
typedef TYPE_3__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,int *,int,int const*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(
  Fts5Index *VAR_1,
  Fts5SegWriter *VAR_2,
  int VAR_3, const u8 *VAR_4
){
  FUNC_1(VAR_1, VAR_2);
  if( VAR_1->rc==VAR_0 ){
    FUNC_0(&VAR_1->rc, &VAR_2->btterm, VAR_3, VAR_4);
    VAR_2->iBtPage = VAR_2->writer.pgno;
  }
}
