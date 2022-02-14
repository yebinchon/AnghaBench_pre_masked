
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_14__ {size_t n; int * p; } ;
struct TYPE_13__ {scalar_t__ rc; } ;
struct TYPE_11__ {int nData; int pData; } ;
struct TYPE_12__ {TYPE_1__ base; } ;
typedef TYPE_2__ Fts5Iter ;
typedef TYPE_3__ Fts5Index ;
typedef TYPE_4__ Fts5Buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*,TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void FUNC_5(
  Fts5Index *VAR_2,
  i64 VAR_3,
  Fts5Iter *VAR_4,
  Fts5Buffer *VAR_5
){
  int VAR_6 = VAR_4->base.nData;
  int VAR_7 = VAR_6 + 9 + 9 + VAR_0;
  FUNC_0( VAR_6>0 );
  if( VAR_2->rc==VAR_1 && 0==FUNC_1(&VAR_2->rc, VAR_5, VAR_7) ){
    FUNC_3(VAR_5, VAR_3);
    FUNC_3(VAR_5, VAR_6*2);
    FUNC_2(VAR_5, VAR_4->base.pData, VAR_6);
    FUNC_4(&VAR_5->p[VAR_5->n], 0, VAR_0);
  }
}
