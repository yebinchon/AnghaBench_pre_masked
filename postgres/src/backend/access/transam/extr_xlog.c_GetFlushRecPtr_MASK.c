
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_4__ {int Flush; } ;
struct TYPE_3__ {int info_lck; TYPE_2__ LogwrtResult; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;

XLogRecPtr
FUNC_2(void)
{
 FUNC_0(&VAR_1->info_lck);
 VAR_0 = VAR_1->LogwrtResult;
 FUNC_1(&VAR_1->info_lck);

 return VAR_0.Flush;
}
