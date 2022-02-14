
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmcTreeNode {int flags; struct chmcTreeNode* buf; struct chmcTreeNode* name; } ;


 int VAR_0 ;
 int FUNC_0 (struct chmcTreeNode*) ;
 int FUNC_1 (struct chmcTreeNode*) ;

void FUNC_2( struct chmcTreeNode *VAR_1 )
{
 FUNC_0(VAR_1);
 FUNC_0(VAR_1->name);

 FUNC_1(VAR_1->name);
 if (VAR_1->buf && !(VAR_1->flags & VAR_0))
  FUNC_1(VAR_1->buf);
 FUNC_1(VAR_1);
}
