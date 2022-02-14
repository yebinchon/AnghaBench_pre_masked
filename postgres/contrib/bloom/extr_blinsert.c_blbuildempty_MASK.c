
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int node; } ;
struct TYPE_9__ {TYPE_1__ smgr_rnode; } ;
struct TYPE_8__ {TYPE_3__* rd_smgr; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Page ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ,char*,int) ;

void
FUNC_6(Relation VAR_3)
{
 Page VAR_4;


 VAR_4 = (Page) FUNC_3(VAR_0);
 FUNC_0(VAR_3, VAR_4);
 FUNC_1(VAR_4, VAR_1);
 FUNC_5(VAR_3->rd_smgr, VAR_2, VAR_1,
     (char *) VAR_4, 1);
 FUNC_2(&VAR_3->rd_smgr->smgr_rnode.node, VAR_2,
    VAR_1, VAR_4, 1);






 FUNC_4(VAR_3->rd_smgr, VAR_2);
}
