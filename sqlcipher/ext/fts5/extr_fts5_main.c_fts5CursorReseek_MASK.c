
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_10__ {scalar_t__ pVtab; } ;
struct TYPE_13__ {int bDesc; int pExpr; TYPE_1__ base; } ;
struct TYPE_11__ {int pIndex; } ;
struct TYPE_12__ {TYPE_2__ p; } ;
typedef TYPE_3__ Fts5FullTable ;
typedef TYPE_4__ Fts5Cursor ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(Fts5Cursor *VAR_3, int *VAR_4){
  int VAR_5 = VAR_2;
  FUNC_3( *VAR_4==0 );
  if( FUNC_2(VAR_3, VAR_1) ){
    Fts5FullTable *VAR_6 = (Fts5FullTable*)(VAR_3->base.pVtab);
    int VAR_7 = VAR_3->bDesc;
    i64 VAR_8 = FUNC_7(VAR_3->pExpr);

    VAR_5 = FUNC_6(VAR_3->pExpr, VAR_6->p.pIndex, VAR_8, VAR_7);
    if( VAR_5==VAR_2 && VAR_8!=FUNC_7(VAR_3->pExpr) ){
      *VAR_4 = 1;
    }

    FUNC_0(VAR_3, VAR_1);
    FUNC_4(VAR_3);
    if( FUNC_5(VAR_3->pExpr) ){
      FUNC_1(VAR_3, VAR_0);
      *VAR_4 = 1;
    }
  }
  return VAR_5;
}
