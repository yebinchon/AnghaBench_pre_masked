
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_2__ {int ulsn_lck; int unloggedLSN; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;

XLogRecPtr
FUNC_2(void)
{
 XLogRecPtr VAR_1;


 FUNC_0(&VAR_0->ulsn_lck);
 VAR_1 = VAR_0->unloggedLSN++;
 FUNC_1(&VAR_0->ulsn_lck);

 return VAR_1;
}
