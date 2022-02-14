
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct Op2 TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct Op2 {char const* zOp; unsigned char eOp2; } ;
struct TYPE_10__ {int zToken; } ;
struct TYPE_8__ {TYPE_4__* pList; } ;
struct TYPE_12__ {scalar_t__ op; TYPE_3__ u; int pTab; TYPE_1__ x; } ;
struct TYPE_11__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_9__ {TYPE_5__* pExpr; } ;
typedef TYPE_4__ ExprList ;
typedef TYPE_5__ Expr ;


 int FUNC_0 (TYPE_7__ const*) ;
 int FUNC_1 (int ) ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,char const*) ;

__attribute__((used)) static int FUNC_3(
  Expr *VAR_2,
  unsigned char *VAR_3
){
  static const struct Op2 {
    const char *zOp;
    unsigned char eOp2;
  } VAR_4[] = {
    { "match", 129 },
    { "glob", 131 },
    { "like", 130 },
    { "regexp", 128 }
  };
  ExprList *VAR_5;
  Expr *VAR_6;
  int VAR_7;

  if( VAR_2->op!=VAR_1 ){
    return 0;
  }
  VAR_5 = VAR_2->x.pList;
  if( VAR_5==0 || VAR_5->nExpr!=2 ){
    return 0;
  }
  VAR_6 = VAR_5->a[1].pExpr;
  if( VAR_6->op!=VAR_0 || !FUNC_1(VAR_6->pTab) ){
    return 0;
  }
  for(VAR_7=0; VAR_7<FUNC_0(VAR_4); VAR_7++){
    if( FUNC_2(VAR_2->u.zToken, VAR_4[VAR_7].zOp)==0 ){
      *VAR_3 = VAR_4[VAR_7].eOp2;
      return 1;
    }
  }
  return 0;
}
