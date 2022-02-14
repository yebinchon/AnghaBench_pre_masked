
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node; int latestRemovedXid; } ;
typedef TYPE_1__ xl_heap_cleanup_info ;
typedef int XLogReaderState ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(XLogReaderState *VAR_1)
{
 xl_heap_cleanup_info *VAR_2 = (xl_heap_cleanup_info *) FUNC_2(VAR_1);

 if (VAR_0)
  FUNC_1(VAR_2->latestRemovedXid, VAR_2->node);
 FUNC_0(!FUNC_3(VAR_1));
}
