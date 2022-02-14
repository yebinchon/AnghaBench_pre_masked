
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * TableScanDesc ;
struct TYPE_4__ {int * ss_currentScanDesc; } ;
struct TYPE_5__ {TYPE_1__ ss; } ;
typedef TYPE_2__ SeqScanState ;
typedef int ScanState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(SeqScanState *VAR_0)
{
 TableScanDesc VAR_1;

 VAR_1 = VAR_0->ss.ss_currentScanDesc;

 if (VAR_1 != ((void*)0))
  FUNC_1(VAR_1,
      ((void*)0));

 FUNC_0((ScanState *) VAR_0);
}
