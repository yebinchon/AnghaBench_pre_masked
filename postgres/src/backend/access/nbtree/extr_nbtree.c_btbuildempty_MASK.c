
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int node; } ;
struct TYPE_8__ {TYPE_1__ smgr_rnode; } ;
struct TYPE_7__ {TYPE_3__* rd_smgr; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Page ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int *,int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ,char*,int) ;

void
FUNC_6(Relation VAR_4)
{
 Page VAR_5;


 VAR_5 = (Page) FUNC_3(VAR_0);
 FUNC_1(VAR_5, VAR_3, 0);
 FUNC_0(VAR_5, VAR_1);
 FUNC_5(VAR_4->rd_smgr, VAR_2, VAR_1,
     (char *) VAR_5, 1);
 FUNC_2(&VAR_4->rd_smgr->smgr_rnode.node, VAR_2,
    VAR_1, VAR_5, 1);






 FUNC_4(VAR_4->rd_smgr, VAR_2);
}
