
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ forcePageWrites; scalar_t__ fullPageWrites; } ;
typedef TYPE_1__ XLogCtlInsert ;
struct TYPE_6__ {int xlog_seg_size; } ;
struct TYPE_5__ {scalar_t__ ThisTimeLineID; TYPE_1__ Insert; } ;


 int FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(void)
{
 XLogCtlInsert *VAR_5 = &VAR_2->Insert;


 VAR_1 = VAR_2->ThisTimeLineID;
 FUNC_0(VAR_1 != 0 || FUNC_3());


 VAR_4 = VAR_0->xlog_seg_size;


 (void) FUNC_1();

 VAR_3 = (VAR_5->fullPageWrites || VAR_5->forcePageWrites);


 FUNC_2();
}
