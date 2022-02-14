
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int node; } ;
struct TYPE_8__ {TYPE_1__ smgr_rnode; } ;
struct TYPE_7__ {TYPE_4__* rd_smgr; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Page ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ,int ,char*,int) ;

void
FUNC_7(Relation VAR_7)
{
 Page VAR_8;


 VAR_8 = (Page) FUNC_4(VAR_0);
 FUNC_1(VAR_8);
 FUNC_0(VAR_8, VAR_3);
 FUNC_6(VAR_7->rd_smgr, VAR_1, VAR_3,
     (char *) VAR_8, 1);
 FUNC_3(&VAR_7->rd_smgr->smgr_rnode.node, VAR_1,
    VAR_3, VAR_8, 1);


 FUNC_2(VAR_8, VAR_2);

 FUNC_0(VAR_8, VAR_6);
 FUNC_6(VAR_7->rd_smgr, VAR_1, VAR_6,
     (char *) VAR_8, 1);
 FUNC_3(&VAR_7->rd_smgr->smgr_rnode.node, VAR_1,
    VAR_6, VAR_8, 1);


 FUNC_2(VAR_8, VAR_2 | VAR_4);

 FUNC_0(VAR_8, VAR_5);
 FUNC_6(VAR_7->rd_smgr, VAR_1, VAR_5,
     (char *) VAR_8, 1);
 FUNC_3(&VAR_7->rd_smgr->smgr_rnode.node, VAR_1,
    VAR_5, VAR_8, 1);






 FUNC_5(VAR_7->rd_smgr, VAR_1);
}
