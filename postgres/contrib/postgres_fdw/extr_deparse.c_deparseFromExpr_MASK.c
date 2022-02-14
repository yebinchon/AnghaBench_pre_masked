
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int params_list; int root; int foreignrel; TYPE_2__* scanrel; int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_9__ {int relids; } ;
typedef int StringInfo ;
typedef TYPE_2__ RelOptInfo ;
typedef int List ;
typedef int Index ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int * VAR_1 ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,TYPE_2__*,int,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_8(List *VAR_2, deparse_expr_cxt *VAR_3)
{
 StringInfo VAR_4 = VAR_3->buf;
 RelOptInfo *VAR_5 = VAR_3->scanrel;


 FUNC_0(!FUNC_3(VAR_3->foreignrel) ||
     FUNC_1(VAR_5) || FUNC_2(VAR_5));


 FUNC_5(VAR_4, " FROM ");
 FUNC_7(VAR_4, VAR_3->root, VAR_5,
        (FUNC_6(VAR_5->relids) == VAR_0),
        (Index) 0, ((void*)0), VAR_3->params_list);


 if (VAR_2 != VAR_1)
 {
  FUNC_5(VAR_4, " WHERE ");
  FUNC_4(VAR_2, VAR_3);
 }
}
