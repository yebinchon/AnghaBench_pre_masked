
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node; int latestRemovedXid; } ;
typedef TYPE_1__ xl_btree_reuse_page ;
typedef int XLogReaderState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(XLogReaderState *VAR_1)
{
 xl_btree_reuse_page *VAR_2 = (xl_btree_reuse_page *) FUNC_1(VAR_1);
 if (VAR_0)
 {
  FUNC_0(VAR_2->latestRemovedXid,
           VAR_2->node);
 }
}
