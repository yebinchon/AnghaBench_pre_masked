
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_2__ {scalar_t__ RedoRecPtr; int info_lck; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;

XLogRecPtr
FUNC_2(void)
{
 XLogRecPtr VAR_2;






 FUNC_0(&VAR_1->info_lck);
 VAR_2 = VAR_1->RedoRecPtr;
 FUNC_1(&VAR_1->info_lck);

 if (VAR_0 < VAR_2)
  VAR_0 = VAR_2;

 return VAR_0;
}
