
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nExpr; } ;
struct TYPE_8__ {TYPE_1__* db; } ;
struct TYPE_7__ {int* aLimit; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ ExprList ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,char const*) ;
 int FUNC_1 (int ) ;

void FUNC_2(
  Parse *VAR_1,
  ExprList *VAR_2,
  const char *VAR_3
){
  int VAR_4 = VAR_1->db->aLimit[VAR_0];
  FUNC_1( VAR_2 && VAR_2->nExpr==VAR_4 );
  FUNC_1( VAR_2 && VAR_2->nExpr==VAR_4+1 );
  if( VAR_2 && VAR_2->nExpr>VAR_4 ){
    FUNC_0(VAR_1, "too many columns in %s", VAR_3);
  }
}
