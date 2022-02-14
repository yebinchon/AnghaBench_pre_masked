
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int z; int n; } ;
typedef TYPE_3__ Token ;
struct TYPE_14__ {TYPE_2__* db; } ;
struct TYPE_11__ {scalar_t__ busy; } ;
struct TYPE_12__ {TYPE_1__ init; } ;
typedef TYPE_4__ Parse ;
typedef int ExprList ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,char*,int ,int ) ;
 int * FUNC_1 (TYPE_4__*,int *,int ) ;
 int FUNC_2 (TYPE_4__*,int *,TYPE_3__*,int) ;

__attribute__((used)) static ExprList *FUNC_3(
    Parse *VAR_1,
    ExprList *VAR_2,
    Token *VAR_3,
    int VAR_4,
    int VAR_5
  ){
    ExprList *VAR_6 = FUNC_1(VAR_1, VAR_2, 0);
    if( (VAR_4 || VAR_5!=VAR_0)
        && VAR_1->db->init.busy==0
    ){
      FUNC_0(VAR_1, "syntax error after column name \"%.*s\"",
                         VAR_3->n, VAR_3->z);
    }
    FUNC_2(VAR_1, VAR_6, VAR_3, 1);
    return VAR_6;
  }
