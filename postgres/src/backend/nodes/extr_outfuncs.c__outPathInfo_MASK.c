
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pathtarget; TYPE_1__* param_info; TYPE_2__* parent; } ;
struct TYPE_6__ {scalar_t__ reltarget; int * relids; } ;
struct TYPE_5__ {int * ppi_req_outer; } ;
typedef int StringInfo ;
typedef TYPE_3__ Path ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_10, const Path *VAR_11)
{
 FUNC_1(VAR_6, VAR_0);
 FUNC_5(VAR_10, " :parent_relids ");
 FUNC_6(VAR_10, VAR_11->parent->relids);
 if (VAR_11->pathtarget != VAR_11->parent->reltarget)
  FUNC_4(VAR_5);
 FUNC_5(VAR_10, " :required_outer ");
 if (VAR_11->param_info)
  FUNC_6(VAR_10, VAR_11->param_info->ppi_req_outer);
 else
  FUNC_6(VAR_10, ((void*)0));
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 FUNC_3(VAR_3);
 FUNC_2(VAR_7, "%.0f");
 FUNC_2(VAR_8, "%.2f");
 FUNC_2(VAR_9, "%.2f");
 FUNC_4(VAR_4);
}
