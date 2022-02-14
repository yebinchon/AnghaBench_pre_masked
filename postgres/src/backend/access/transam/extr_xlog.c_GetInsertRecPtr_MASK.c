
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_3__ {int Write; } ;
struct TYPE_4__ {int info_lck; TYPE_1__ LogwrtRqst; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_0 ;

XLogRecPtr
FUNC_2(void)
{
 XLogRecPtr VAR_1;

 FUNC_0(&VAR_0->info_lck);
 VAR_1 = VAR_0->LogwrtRqst.Write;
 FUNC_1(&VAR_0->info_lck);

 return VAR_1;
}
