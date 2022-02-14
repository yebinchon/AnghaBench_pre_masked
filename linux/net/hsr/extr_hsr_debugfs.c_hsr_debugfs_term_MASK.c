
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsr_priv {int * node_tbl_root; int * node_tbl_file; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct hsr_priv *VAR_0)
{
 FUNC_0(VAR_0->node_tbl_file);
 VAR_0->node_tbl_file = ((void*)0);
 FUNC_0(VAR_0->node_tbl_root);
 VAR_0->node_tbl_root = ((void*)0);
}
